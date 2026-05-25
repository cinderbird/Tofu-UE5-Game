# Kaus Time System — Engineer Reference

> **Audience**: Engineers and AI agents who need to integrate with, modify, or
> debug the Time system. Assumes UE 5.5 + Lyra-style architecture familiarity.
>
> **Style**: Fact-dense, no analogies, no narrative. Look here for: API
> signatures, contracts, call ordering, lifecycle, gotchas. Look at
> `KAUS_TIME_GUIDE.md` for design rationale and onboarding context.

---

## 1. Module layout

```
Source/Kaus/
├── Calendar/                       Layer 1 — Date catalog
│   ├── KausGameDate.h              FKausGameDate (Y, M, D, comparable, hashable)
│   ├── KausCalendarTypes.h         FKausDayMeta, FKausCalendarRuntimeOverride
│   ├── KausCalendarSystem.{h,cpp}  UKausCalendarSystem (Abstract, Instanced)
│   ├── KausGregorianCalendar.*     12-month Gregorian impl
│   ├── KausPlanetaryCalendar.*     Configurable months/days (default 10/40, 8-day week)
│   ├── KausCalendarSchedule.*      DataAsset: System + Range + Rules + Seed
│   ├── KausCalendarSubsystem.*     UKausCalendarSubsystem (GameInstanceSubsystem)
│   └── KausCalendarSaveData.h      Runtime overrides snapshot
│
├── GameTime/                       Layer 2 + 3 — Time axis + Budget accounting
│   ├── KausDayCycleTypes.h         FKausDayCyclePoint, FKausDayCycleSaveData
│   ├── KausDayCycleDefinition.*    UKausDayCycleDefinition (DataAsset),
│   │                               FKausCycleSpec, FKausCycleEndPolicy
│   ├── KausDayCycleSubsystem.*     UKausDayCycleSubsystem (GameInstanceSubsystem)
│   ├── KausGameTimeComponent.*     UKausGameTimeComponent (ActorComponent),
│   │                               EKausSpendResult,
│   │                               FKausRemainingChangedDelegate
│   └── KausGameTimeMessageBroadcastSystem.*
│                                   UKausGameTimeMessageBroadcastSystem
│                                   (GameInstanceSubsystem),
│                                   FKausTimeMessagePayload
│
└── Tags/
    ├── KausCalendarTags.{h,cpp}    Calendar.Day.*, Calendar.Marker.*
    └── KausDayCycleTags.{h,cpp}    Calendar.Cycle.*, Event.Time.*
```

Tests live under each domain's `Tests/` subdirectory. 96 automation tests cover
the system as of this document.

---

## 2. Three-layer model

| Layer | Owns | Knows about |
|---|---|---|
| **1. Calendar** | Date metadata catalog (Y, M, D → tags). What kind of day each date is. | Calendar System (Gregorian/Planetary), Schedule, RuntimeOverrides. **Does not know** which date is "now". |
| **2. DayCycle** | Time axis position. Cycle sequence per day. Date+Cycle progression. | Calendar (for date arithmetic), Definition (for Cycle list). **Does not know** about player resources. |
| **3. GameTime** | Player-side budget accounting + outbound message adapter. | DayCycleSubsystem (subscribes to OnCycleChanged). **Does not advance** time — only requests progression. |

**Invariant**: Lower layer never depends on higher. `Calendar` does not know
DayCycle exists. `DayCycle` does not know about GameTimeComponent.

---

## 3. Core types

### 3.1 `FKausGameDate` (POD, BlueprintType)

```cpp
struct FKausGameDate {
    int32 Year = 1;   // ClampMin = 1
    int32 Month = 1;  // ClampMin = 1
    int32 Day = 1;    // ClampMin = 1

    bool operator==(const FKausGameDate&) const;    // lexicographic
    bool operator< (const FKausGameDate&) const;    // lexicographic
    // <=, >, >=, !=
    FString ToString() const;                        // "Y2026-M06-D15"
};
uint32 GetTypeHash(const FKausGameDate&);
```

- No time-of-day. Time-within-day is DayCycle's responsibility.
- No date arithmetic. Use `UKausCalendarSystem::AddDays` / `DaysBetween`.
- No validity check. Use `UKausCalendarSystem::IsValidDate` (calendar-dependent).
- TMap-key compatible.

### 3.2 `FKausDayCyclePoint` (POD, BlueprintType)

```cpp
struct FKausDayCyclePoint {
    FKausGameDate Date;
    FGameplayTag CycleTag;          // meta = "Calendar.Cycle"

    bool IsValid() const;           // CycleTag.IsValid()  (Date initial (1,1,1) is valid)
    bool operator==(const FKausDayCyclePoint&) const;
    FString ToString() const;        // "Y2026-M06-D15@Calendar.Cycle.Morning"
};
```

### 3.3 `FKausCycleSpec` (BlueprintType)

```cpp
struct FKausCycleSpec {
    FGameplayTag CycleTag;           // meta = "Calendar.Cycle"
    FText DisplayName;
    int32 DisplayHour;               // 0..23, UI display only

    FGameplayTag BudgetMode;         // meta = "Calendar.Cycle.BudgetMode"
    int32 CycleBudget;               // ClampMin = 0; tokens or minutes
    int32 RealtimeStartMinute;       // 0..1439; only meaningful for Realtime mode

    FKausCycleEndPolicy EndPolicy;

    FGameplayTag AdditionalOnEnterEventTag;  // meta = "Event"
    FGameplayTag AdditionalOnExitEventTag;   // meta = "Event"
};
```

### 3.4 `FKausCycleEndPolicy`

```cpp
struct FKausCycleEndPolicy {
    bool bEndOnBudgetExhausted = true;
    bool bAllowManualEndAtThreshold = false;
    int32 ManualEndAtRemainingOrLess = 0;    // ClampMin = 0; effective only if bAllow=true
};
```

### 3.5 `FKausTimeMessagePayload` (BlueprintType)

```cpp
struct FKausTimeMessagePayload {
    FKausDayCyclePoint NewPoint;
    FKausDayCyclePoint PreviousPoint;
    bool bDateChanged = false;
};
```

Sent on every `Event.Time.*` message via `UGameplayMessageSubsystem`.

### 3.6 `EKausSpendResult` (BlueprintType)

```cpp
enum class EKausSpendResult : uint8 {
    Accepted,         // deduction occurred
    NotInitialized,   // no Cycle entered, or CycleTotal <= 0
    InvalidCost,      // negative cost
    Insufficient      // remaining < cost
};
```

---

## 4. Subsystem APIs (essentials)

### 4.1 `UKausCalendarSubsystem` (GameInstance)

| Method | Signature | Notes |
|---|---|---|
| `InitializeWithSchedule` | `bool(UKausCalendarSchedule*)` | Builds the date catalog. Must be called before `IsInitialized` returns true. |
| `IsInitialized` | `bool() const` | True iff Schedule set and `ResolvedDays.Num() > 0`. |
| `GetCalendarSystem` | `UKausCalendarSystem*() const` | The active Gregorian/Planetary impl. |
| `GetStartDate` / `GetEndDate` | `FKausGameDate() const` | Range from Schedule. |
| `GetTotalDayCount` | `int32() const` | Inclusive range size. |
| `IsDateInRange` | `bool(FKausGameDate) const` | Within `[Start, End]`. |
| `DateToIndex` | `int32(FKausGameDate) const` | 1-based, INDEX_NONE if out of range. |
| `IndexToDate` | `FKausGameDate(int32) const` | Inverse. |
| `TryGetDayMeta` | `bool(FKausGameDate, FKausDayMeta&) const` | Per-day tag bag. |
| `GetAllDayMetas` | `TArray<FKausDayMeta>() const` | Snapshot copy. |
| `FindNextDayWithTag` | `bool(From, Tag, OutDate) const` | Linear forward search. |
| `FindAllDaysWithTag` | `TArray<FKausGameDate>(Tag) const` | All matches in range. |
| `ApplyRuntimeOverride` | (see header) | Add/remove tags at runtime; calls `OnDayMetaChanged`. |

**Delegates**: `OnDayMetaChanged(Date, NewMeta)`, `OnCalendarRebuilt()`.

### 4.2 `UKausDayCycleSubsystem` (GameInstance)

| Method | Signature | Notes |
|---|---|---|
| `InitializeWith` | `bool(Definition, StartDate, StartCycleTag, Calendar=nullptr)` | Validates definition + range. Sets `bInitialized`. Fires `OnCycleChanged` once. |
| `IsInitialized` | `bool() const` | |
| `GetDefinition` | `UKausDayCycleDefinition*() const` | |
| `GetCurrentDate` / `GetCurrentCycleTag` / `GetCurrentPoint` | const | The "now" coordinate. |
| `TryGetCurrentDayMeta` | `bool(FKausDayMeta&) const` | Convenience (delegates to Calendar). |
| `CountCyclesBetween` | `int32(From, To) const` | Sign-aware. |
| `AdvanceCycle` | `bool()` | Step forward one Cycle. May cross date boundary. Fires `OnCycleChanged` (and `OnDateChanged` if applicable). |
| `AdvanceBy` | `bool(Days, Cycles, bBroadcastEachStep)` | Bulk advance. With `bBroadcastEachStep=false` only one final broadcast. |
| `JumpTo` | `bool(Date, CycleTag)` | Validates both. Fires events on success. |
| `CaptureSaveData` / `RestoreFromSaveData` | | Serialization-ready POD. |

**Delegates**:
- `OnCycleChanged(NewPoint, PreviousPoint)` — fires on **every** cycle transition, including `InitializeWith`.
- `OnDateChanged(NewDate, PreviousDate)` — fires only when date crosses.

**Event order on a single advance crossing a date boundary**: `OnCycleChanged`
fires **once** with `NewPoint.Date != PreviousPoint.Date`. `OnDateChanged` fires
**after** `OnCycleChanged` in the same call.

### 4.3 `UKausGameTimeComponent` (ActorComponent on PlayerState)

| Method | Signature | Notes |
|---|---|---|
| `TrySpend` | `EKausSpendResult(int32 Cost)` | Game-thread only. Negative → InvalidCost. Zero → Accepted no-op. Fires `OnRemainingChanged` on success. Calls `EvaluateEndPolicy` after. |
| `CanSpend` | `bool(int32 Cost) const` | Non-mutating. |
| `TryManualEndCycle` | `bool()` | Returns true if advance was issued. Requires `CanManualEndCycle()`. |
| `CanManualEndCycle` | `bool() const` | `bAllowManualEndAtThreshold` && `Remaining <= ManualEndAtRemainingOrLess`. |
| `GetRemaining` / `GetCycleTotal` / `GetSpent` | const | Inline. |
| `GetCurrentBudgetMode` / `GetCurrentCycleTag` | const | |
| `GetCurrentRealtimeMinute` | `int32() const` | Returns 0 in Token mode. Wraps via `% 1440`. |
| `AddRemaining` | `void(int32 Amount)` | Debug/cinematic. Clamped to `[0, CycleTotal]`. Fires `OnRemainingChanged`. Calls `EvaluateEndPolicy` (negative grant can trigger auto-advance). |
| `ForceAdvanceCycle` | `void()` | Bypasses EndPolicy. |

**Delegates**:
- `OnRemainingChanged(NewRemaining, Total, DeltaSpent)` — fires on Cycle entry (DeltaSpent=0), TrySpend success, and AddRemaining.
- `OnCanManualEndChanged(bCanManualEnd)` — fires only on actual transition.

**Lifecycle**:
- `BeginPlay`: subscribes to `OnCycleChanged` (idempotent: Remove-before-Add). If
  DayCycle is already initialized, calls `EnterCycle` + `EvaluateEndPolicy`
  immediately.
- `EndPlay`: unsubscribes.
- `bIsAdvancing`: re-entry guard set by `RequestAdvanceCycle`. Used by
  `HandleCycleChanged` to skip `EvaluateEndPolicy` while inside an advance chain.

### 4.4 `UKausGameTimeMessageBroadcastSystem` (GameInstance)

Adapter from `OnCycleChanged` to `UGameplayMessageSubsystem`.

| Method | Signature | Notes |
|---|---|---|
| `StartBroadcasting` | `void()` | Subscribes. Idempotent. |
| `StopBroadcasting` | `void()` | Unsubscribes. |
| `IsBroadcasting` | `bool() const` | |

**Does not advance time**, only translates. Game code (typically GameMode)
must call `StartBroadcasting()` after DayCycle's `InitializeWith`.

---

## 5. Native GameplayTags

Defined in `Tags/KausDayCycleTags.{h,cpp}`. All `KAUS_API`.

### 5.1 Cycle identity (used as `Spec.CycleTag`)

```
Calendar.Cycle.Morning
Calendar.Cycle.Afternoon
Calendar.Cycle.Night1
Calendar.Cycle.Night2
```

### 5.2 Budget mode (used as `Spec.BudgetMode`)

```
Calendar.Cycle.BudgetMode.Token       — integer tokens; cost is integer per action
Calendar.Cycle.BudgetMode.Realtime    — minutes; cost is minutes per action
```

### 5.3 Time events (broadcast on `UGameplayMessageSubsystem`)

```
Event.Time.CycleEntered             (root; never broadcast directly)
Event.Time.CycleEntered.Morning
Event.Time.CycleEntered.Afternoon
Event.Time.CycleEntered.Night1
Event.Time.CycleEntered.Night2

Event.Time.CycleExiting             (root)
Event.Time.CycleExiting.Morning
Event.Time.CycleExiting.Afternoon
Event.Time.CycleExiting.Night1
Event.Time.CycleExiting.Night2

Event.Time.DayStart                 (only when date crosses)
Event.Time.DayEnd                   (only when date crosses)
Event.Time.BudgetExhausted          (broadcast by GameTimeComponent, not the broadcaster)
```

Listeners use child tag to dispatch. Parent tag never fires.

### 5.4 Calendar day tags

Defined in `Tags/KausCalendarTags.h`:

```
Calendar.Day.Weekday    (auto-attached)
Calendar.Day.Weekend    (auto-attached)
Calendar.Day.Holiday    (auto-attached via Schedule.RecurringHolidays)
Calendar.Day.Special    (designer-applied)
Calendar.Day.Story      (designer-applied)

Calendar.Marker         (root for designer labels: Calendar.Marker.Birthday etc.)
```

Designers add child tags via `Config/DefaultGameplayTags.ini`.

---

## 6. Initialization order

GameMode is responsible for orchestrating. Required order:

```
1. CalendarSubsystem.InitializeWithSchedule(Schedule)
2. DayCycleSubsystem.InitializeWith(Definition, StartDate, StartCycleTag, Calendar)
   ↳ fires OnCycleChanged once
3. GameTimeMessageBroadcastSystem.StartBroadcasting()
   ↳ now subscribed to OnCycleChanged
4. PlayerState spawn → GameTimeComponent.BeginPlay()
   ↳ subscribes to OnCycleChanged
   ↳ if DayCycle.IsInitialized(), calls EnterCycle + EvaluateEndPolicy immediately
```

Step 3 must happen **after** step 2; otherwise step 2's broadcast is missed.
Step 4 can happen any time after 2 (the component's BeginPlay handles late
attachment correctly).

---

## 7. Message broadcast order

On a single `AdvanceCycle` call where the date crosses:

```
1. Event.Time.CycleExiting.{Previous}         ← previous Cycle cleanup
2. Spec[Previous].AdditionalOnExitEventTag    ← if set
3. Event.Time.DayEnd                          ← previous Day cleanup
4. Event.Time.DayStart                        ← new Day setup
5. Event.Time.CycleEntered.{New}              ← new Cycle setup
6. Spec[New].AdditionalOnEnterEventTag        ← if set
```

When the date does **not** cross, steps 3 and 4 are skipped.

All messages share the same `FKausTimeMessagePayload`.

---

## 8. Activity flow (player action)

```
GameplayAbility (UKausPlayerActionAbility::ActivateAbility)
  ├─ ResolveTimeCost(TriggerEventData) → int32 Cost
  │     priority 1: Action.Cost.Override tag in InstigatorTags → EventMagnitude
  │     priority 2: TimeCostByMode[CurrentBudgetMode]
  │     priority 3: DefaultTimeCost
  │
  ├─ if Cost <= 0 → K2_OnActivate(EventData), return
  │
  ├─ FindTimeBudgetComponent(ActorInfo)
  │     priority 1: PlayerController.PlayerState
  │     priority 2: AvatarPawn (FindComponentByClass)
  │     priority 3: AvatarPawn.PlayerState
  │
  ├─ Comp.TrySpend(Cost)
  │     ├─ rejected → K2_OnRejected(); EndAbility(Cancelled); return
  │     └─ accepted → continue
  │
  └─ K2_OnActivate(EventData)        ← BP-implementable; ability does its work
        K2_OnActivate is responsible for calling EndAbility when done.
```

`UKausPlayerActionAbility` is `Abstract, Blueprintable`. `InstancingPolicy =
InstancedPerActor`. `NetExecutionPolicy = LocalOnly`.

---

## 9. Cycle progression flow (auto-advance on exhaustion)

```
TrySpend or AddRemaining mutates Remaining
  └─ EvaluateEndPolicy()
       ├─ Remaining <= 0 && bEndOnBudgetExhausted:
       │     ├─ if World available: BroadcastMessage(Event.Time.BudgetExhausted)
       │     ├─ RequestAdvanceCycle()
       │     │     └─ TGuardValue<bool>(bIsAdvancing, true)
       │     │     └─ DayCycle.AdvanceCycle()
       │     │           └─ OnCycleChanged.Broadcast(...)
       │     │                 ├─ GameTimeMessageBroadcastSystem.HandleCycleChanged
       │     │                 │     └─ broadcasts Event.Time.* sequence
       │     │                 └─ GameTimeComponent.HandleCycleChanged
       │     │                       ├─ EnterCycle(NewPoint.CycleTag)
       │     │                       │     └─ TryFindSpec(NewCycleTag, Spec)
       │     │                       │     └─ resets CycleTotal, Remaining, etc.
       │     │                       │     └─ NotifyCanManualEndIfChanged()
       │     │                       └─ if !bIsAdvancing: EvaluateEndPolicy()
       │     │                            (recurses if new Cycle has Budget=0)
       │     └─ return
       │
       └─ NotifyCanManualEndIfChanged()
            └─ if state changed: OnCanManualEndChanged.Broadcast(...)
```

`bIsAdvancing` prevents recursive EvaluateEndPolicy → AdvanceCycle reentry from
the same component during the same logical advance.

---

## 10. Manual cycle end (UI "Next" button)

Wired against `OnCanManualEndChanged`:

```
GameTimeComponent state changes (TrySpend/AddRemaining/EnterCycle)
  └─ NotifyCanManualEndIfChanged()
       └─ if (CanManualEndCycle() != cached) → OnCanManualEndChanged.Broadcast(...)
               UI button enables/disables.

UI button click:
  └─ Comp.TryManualEndCycle()
       ├─ !CanManualEndCycle() → false
       └─ RequestAdvanceCycle() → true
```

Permitted only if `EndPolicy.bAllowManualEndAtThreshold` and
`Remaining <= EndPolicy.ManualEndAtRemainingOrLess`.

---

## 11. Save/Load

| What | Where |
|---|---|
| Date catalog (immutable, derived from Schedule) | Not saved. Rebuilt from Schedule on load. |
| Calendar runtime overrides | `FKausCalendarRuntimeOverride` — apply before `InitializeWithSchedule` or via `ApplyRuntimeOverride`. |
| Time axis position | `FKausDayCycleSaveData` — `CaptureSaveData` / `RestoreFromSaveData`. |
| Player resource state | Owning game's SaveData. Component members (`Remaining`, `CycleTotal`, ...) are `Transient` and re-derived from Cycle re-entry. |

Standard restore order: Calendar → DayCycle → (PlayerState reattaches naturally
because GameTimeComponent re-enters via `OnCycleChanged`).

---

## 12. Critical constraints / gotchas

1. **Game-thread only**. All mutators on GameTimeComponent assert
   `IsInGameThread()`.
2. **Idempotent delegate binding**. Always `RemoveDynamic` before `AddDynamic`
   (the codebase pattern). Failing this trips `ensure()` on duplicate bind.
3. **`UFUNCTION` is required for any function bound via `AddDynamic`**, including
   wrapper methods in test-only derived classes.
4. **`UGameplayMessageSubsystem::HasInstance/Get` use `EGetWorldErrorMode::Assert`**.
   Calling them with a context object that has no World assertion-fails.
   `EvaluateEndPolicy` guards via
   `GEngine->GetWorldFromContextObject(this, EGetWorldErrorMode::LogAndReturnNull)`
   before invoking. Apply the same pattern in any new code path that may run in
   World-less contexts (unit tests, very early init, late shutdown).
5. **Cycle native tags are currently in C++** (`KausDayCycleTags.cpp`). To support
   designer-defined Cycles per game, move them to `Config/DefaultGameplayTags.ini`.
   Pending decision.
6. **EnterCycle uses the `CycleTag` argument** to look up the Spec
   (`TryFindSpec(CycleTag, ...)`). Earlier versions ignored the argument and read
   `DayCycle->GetCurrentCycleTag()` instead — meaning the call had a hidden side
   on which `DayCycle` was passed. Don't reintroduce that pattern.
7. **`bIsAdvancing` is component-scoped**, not subsystem-wide. Two components
   advancing in nested fashion is theoretically possible but not exercised by any
   current test or production path. If multi-player local, audit.
8. **Realtime mode wraps at 1440 minutes**. `GetCurrentRealtimeMinute` returns
   `(StartMinute + Spent) % 1440`. Crossing 24:00 is implicit; UI must format
   accordingly.

---

## 13. Diagnostic logging categories

```
LogKausCalendar      [Calendar]              CalendarSubsystem
LogKausDayCycle      [DayCycle]              DayCycleSubsystem
LogKausTimeBudget    [<Owner>]               GameTimeComponent
LogKausTimeMessage   [<broadcaster name>]    BroadcastSystem
LogKausPlayerAction  [<ability name>]        PlayerActionAbility
```

Verbosity defaults: all `Log`. Verbose-level emits per-spend trace.

---

## 14. Test inventory (96 tests, as of 2026-05-07)

| Path prefix | Count | Coverage |
|---|---|---|
| `Kaus.Calendar.GameDate.*` | 4 | Comparison, hash, ordering, formatting. |
| `Kaus.Calendar.System.*` | 7 | Gregorian + Planetary arithmetic & weekday. |
| `Kaus.Calendar.DayCycle.Definition.*` | 6 | Validation, lookup, Next-with-wrap. |
| `Kaus.Calendar.Subsystem.*` | 8 | Init, range, runtime overrides, find-by-tag. |
| `Kaus.DayCycle.Subsystem.*` | ~15 | Init, advance, jump, save/restore, delegates. |
| `Kaus.TimeMessage.Broadcaster.*` | 8 | Broadcast order, payload, lifecycle. |
| `Kaus.Narrative.State.*` | 10 | Flags + counters + signals (orthogonal system). |
| `Kaus.AbilitySystem.PlayerAction.*` | 7 | Cost resolution priority chain. |
| `Kaus.Player.TimeBudget.*` | ~17 | Spend, manual end, auto-advance, mode-specific. |

Tests use injection-friendly derived classes (`UKausTestGameTimeComponent`,
`UKausTestGameTimeMessageBroadcastSystem`) to override `GetDayCycleSubsystem` and
broadcast routing in the absence of a World.

---

## 15. File-to-purpose map (quick lookup)

| Need to... | Look at |
|---|---|
| Add a new Cycle | `KausDayCycleTags.{h,cpp}` (or `.ini` once migrated) + `UKausDayCycleDefinition` asset |
| Add an action that costs time | Subclass `UKausPlayerActionAbility`, set `DefaultTimeCost` / `TimeCostByMode`, implement `K2_OnActivate` |
| Listen for Cycle changes (C++) | `UKausDayCycleSubsystem::OnCycleChanged` (typed) or `UGameplayMessageSubsystem` listener for `Event.Time.CycleEntered.X` |
| Listen for Cycle changes (BP/Node) | Add `Event.Time.CycleEntered.X` to a Reaction's `ListenEventTag` |
| Apply a runtime calendar override (story event) | `UKausCalendarSubsystem::ApplyRuntimeOverride` |
| Save/load the time axis | `UKausDayCycleSubsystem::CaptureSaveData` / `RestoreFromSaveData` |
| Skip Cycle in cinematic | `UKausGameTimeComponent::ForceAdvanceCycle` |
| Grant time (debug/cheat/item) | `UKausGameTimeComponent::AddRemaining` |
| Add a new BudgetMode | New tag under `Calendar.Cycle.BudgetMode.*`. Update `GetCurrentRealtimeMinute` if mode involves wall-clock semantics. |

---

## 16. Versioning notes

- **Breaking changes to data assets**: adding/removing entries from
  `UKausDayCycleDefinition.Cycles` invalidates `FKausDayCycleSaveData` from prior
  saves. Either bump a save version or add a migration step.
- **`CoreRedirects`**: prior identifier renames (`TrySpendTime → TrySpend`, etc.)
  are bridged via `Config/DefaultEngine.ini` redirects. Remove redirects once all
  BP assets are re-saved.
