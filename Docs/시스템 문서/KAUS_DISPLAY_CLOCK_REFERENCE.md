# Kaus Display Clock — Reference

> **Audience**: Programmers integrating with the Display Clock who need
> exact API signatures, parameter ranges, and behavioral contracts.
>
> **Style**: Precise. Tabular. Contract-oriented. For concept-level
> orientation and "why" explanations, see `KAUS_DISPLAY_CLOCK_GUIDE.md`.

---

## §1. Module layout

```
Source/Kaus/GameTime/
  KausDisplayClockSubsystem.h
  KausDisplayClockSubsystem.cpp
  KausDisplayClockSettings.h
  KausDisplayClockSettings.cpp
  Tests/
    KausDisplayClockSubsystemTests.cpp
    KausDisplayClockTestHelpers.h
```

All public symbols live under the `KAUS_API` macro. No subfolders, no nested
namespaces (apart from a private `namespace KausDisplayClock` for internal
constants in the cpp).

---

## §2. Type summary

| Type | Kind | Purpose |
|---|---|---|
| `UKausDisplayClockSubsystem` | `UTickableWorldSubsystem` | The clock. One per World. |
| `UKausDisplayClockSettings` | `UDeveloperSettings` | Project Settings entries. CDO-only. |
| `FKausDisplayClockMinuteOfDayChanged` | dynamic delegate | `(int32 NewMinuteOfDay, int32 PreviousMinuteOfDay)` |
| `FKausDisplayClockHourChanged` | dynamic delegate | `(int32 NewHour, int32 PreviousHour)` |

---

## §3. Vocabulary

The clock uses three internal terms, kept distinct on purpose:

| Term | Range | Meaning |
|---|---|---|
| **Minute of Day** | 0–1439 | Flat minute index since midnight. 14:30 = 870. |
| **Hour** | 0–23 | Hour component of the displayed time. |
| **Minute of Hour** | 0–59 | Minute component of the displayed time. |

`MinuteOfDay = Hour * 60 + MinuteOfHour` always holds.

---

## §4. `UKausDisplayClockSubsystem` — query API

| Function | Returns | Range | Notes |
|---|---|---|---|
| `GetCurrentMinuteOfDay()` | `int32` | 0–1439 | floor of accumulated minutes |
| `GetCurrentMinuteOfDayFloat()` | `float` | [0.0, 1440.0) | smooth, suitable for interpolation |
| `GetCurrentHour()` | `int32` | 0–23 | `MinuteOfDay / 60` |
| `GetCurrentMinuteOfHour()` | `int32` | 0–59 | `MinuteOfDay % 60` |
| `IsPaused()` | `bool` | — | true if `Pause()` was called and `Resume()` has not |

All are `BlueprintPure`. All are safe to call at any time, including before
the first `Initialize` call (returns the default-constructed values).

---

## §5. `UKausDisplayClockSubsystem` — control API

| Function | Effect |
|---|---|
| `SetCurrentMinuteOfDay(int32 MinuteOfDay)` | Clamps to 0–1439, sets the time. May fire `OnMinuteOfDayChanged` and/or `OnHourChanged` if values change. |
| `SetCurrentTime(int32 Hour, int32 Minute)` | Clamps Hour to 0–23, Minute to 0–59 (independently), then calls `SetCurrentMinuteOfDay(Hour*60 + Minute)`. |
| `Pause()` | Sets internal flag. `Tick` becomes a no-op while set. |
| `Resume()` | Clears the pause flag. Does not retroactively advance for time spent paused. |

All are `BlueprintCallable`.

### Clamping contract

- `SetCurrentMinuteOfDay`: out-of-range inputs clamp to the nearest valid
  value (0 or 1439). Negative → 0. ≥1440 → 1439.
- `SetCurrentTime`: each component clamps independently. `SetCurrentTime(25, 70)`
  → `SetCurrentTime(23, 59)` → 1439. `SetCurrentTime(-5, -10)` → `SetCurrentTime(0, 0)` → 0.
- Manual setters fire events using **the new value vs. the last broadcasted
  value**, not the value before the call. Calling `SetCurrentTime` with the
  same time twice in a row produces exactly one event burst (the first
  call) — the second is suppressed.

---

## §6. Delegates

### `OnMinuteOfDayChanged`

```cpp
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKausDisplayClockMinuteOfDayChanged,
    int32, NewMinuteOfDay, int32, PreviousMinuteOfDay);
```

**Fires when**:
- Tick crosses an integer-minute boundary.
- `SetCurrentMinuteOfDay` or `SetCurrentTime` produces a different integer minute.
- Midnight wrap: `(0, 1439)`.

**Does NOT fire when**:
- Sub-minute Tick increments (the integer floor hasn't changed).
- Manual setters that produce the same integer minute as the last broadcast.
- The clock is paused.
- `DayDurationSeconds <= 0`.

### `OnHourChanged`

```cpp
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKausDisplayClockHourChanged,
    int32, NewHour, int32, PreviousHour);
```

**Fires when**: the integer Hour changes. Always fires *after*
`OnMinuteOfDayChanged` in the same broadcast, never before.

### Ordering guarantees

Within a single event burst (one Tick step or one manual call):

1. State is updated (AccumulatedMinutes, last-broadcasted values).
2. `OnMinuteOfDayChanged` fires first if applicable.
3. `OnHourChanged` fires after if applicable.
4. The function returns.

Re-entering the clock from within a delegate is safe but not recommended.

### Compression of large jumps

A single Tick or `SetCurrentTime` call that crosses many minutes fires each
delegate **once**, not once per intermediate minute. This is by design — the
Display Clock is a presentational artifact, and listeners that need to
"replay" intermediate minutes are using the wrong system.

If you need per-minute callbacks during a fast-forward, do the loop yourself.

---

## §7. Tick semantics

`UKausDisplayClockSubsystem` extends `UTickableWorldSubsystem`. The Tick
function is a thin wrapper around `AdvanceClock(DeltaSeconds)`:

```
AccumulatedMinutes += DeltaSeconds * (1440 / DayDurationSeconds)
if AccumulatedMinutes >= 1440: AccumulatedMinutes = fmod(..., 1440)
broadcast if integer minute or hour changed
```

`AdvanceClock` is protected (callable from derived classes; used by tests
via `TestAdvance`).

### Tick guards

The clock's Tick is suppressed when any of the following hold:

- `bPaused == true`
- `DayDurationSeconds <= 0`
- `DeltaSeconds <= 0`

In all three cases, `AccumulatedMinutes` is not modified and no events fire.

### `IsTickable` / `GetTickableTickType`

The base class returns `Always` after Initialize. CDOs return `Never`.
Test-derived classes override both to `Never`/`false` to keep test
instances out of the global tickable registry.

---

## §8. `UKausDisplayClockSettings`

Project-wide defaults exposed under **Project Settings → Game → Kaus
Display Clock**. Saved to `Config/DefaultGame.ini` under
`[/Script/Kaus.KausDisplayClockSettings]`.

| Field | Type | Default | Range | Effect |
|---|---|---|---|---|
| `DayDurationSeconds` | `float` | 86400.0 | ≥ 0.0 | Real seconds per virtual day. 0 = clock stopped. |
| `InitialHour` | `int32` | 0 | 0–23 | Starting hour when a World initializes. |
| `InitialMinute` | `int32` | 0 | 0–59 | Starting minute when a World initializes. |

### Helper

```cpp
int32 GetInitialMinuteOfDay() const;  // = clamp(InitialHour, 0, 23)*60
                                      // + clamp(InitialMinute, 0, 59)
```

### How the Subsystem reads it

In `Initialize`, the Subsystem calls `GetDefault<UKausDisplayClockSettings>()`
once and copies the values into its own cached members:

```cpp
DayDurationSeconds = Settings->DayDurationSeconds;
InitialMinuteOfDay = Settings->GetInitialMinuteOfDay();
```

After Initialize, the Subsystem does not re-read Settings. Changing values
in the live editor while PIE is running has no effect on the active clock —
restart PIE.

---

## §9. Lifecycle

| Event | Effect |
|---|---|
| World creation (Game / PIE) | Subsystem instance created. `Initialize` called. Time = `Settings.InitialHour:InitialMinute`. |
| World destruction (level transition / PIE end) | Subsystem destroyed. State lost. |
| New level loaded | New Subsystem, new state. Time resets to Settings default. |

`DoesSupportWorldType` returns `true` only for `EWorldType::Game` and
`EWorldType::PIE`. Editor preview, EditorPreview, and other world types do
not get a clock.

The clock has **no save/restore API**. If the game wants the clock time to
persist across level transitions or save/load, the higher-level system that
owns the player save must:

1. Read the time before the transition: `Clock->GetCurrentMinuteOfDay()`.
2. Restore it after the new level loads: `Clock->SetCurrentMinuteOfDay(Saved)`.

This is an explicit design choice — the Display Clock itself stays simple
and stateless across boundaries.

---

## §10. Independence contract

The Display Clock is independent of all other Kaus systems. Specifically:

- It does **not** read from `UKausDayCycleSubsystem`, `UKausCalendarSubsystem`,
  or `UKausGameTimeComponent`.
- It is **not** read by them either.
- It does **not** broadcast `Event.Time.*` GameplayMessages.

If gameplay logic ends up consulting `GetCurrentHour` to make a decision,
that's a smell — gameplay should look at Cycle (`Calendar.Cycle.*` tags)
and Phase (`Phase.*` tags), not the wall clock. The wall clock can advance
freely without affecting any game logic, by design.

---

## §11. Test coverage

`Source/Kaus/GameTime/Tests/KausDisplayClockSubsystemTests.cpp` contains 10
automation tests, all under the path `Kaus.GameTime.DisplayClock.*`:

| # | Name | Verifies |
|---|---|---|
| 1 | `BasicAdvance` | Tick accumulation; Hour/MinuteOfHour at non-boundary |
| 2 | `SubMinuteNoBroadcast` | No event for sub-minute Tick increments |
| 3 | `HourBoundary` | Both delegates fire at hour rollover; correct previous values |
| 4 | `MidnightWrap` | 1439 → 0 wrap; (0, 1439) and (0, 23) event payloads |
| 5 | `PauseResume` | Pause stops Tick; Resume re-enables it |
| 6 | `SetCurrentMinuteOfDay` | Manual jump; clamping; idempotent re-set suppression |
| 7 | `LargeDeltaJump` | Multi-minute Tick fires each delegate once, not per minute |
| 8 | `ZeroDurationStops` | DayDurationSeconds=0 disables Tick advancement |
| 9 | `SetCurrentTime` | Hour/Minute pair conversion and clamping |
| 10 | `MinuteOfHourValues` | MinuteOfHour correctness across many timestamps |

Run from console: `Automation RunTests Kaus.GameTime.DisplayClock`

### Test infrastructure

Tests use a derived helper class `UKausTestDisplayClockSubsystem` that:

- Calls `AdvanceClock(DeltaSeconds)` directly via `TestAdvance(DeltaSeconds)`,
  bypassing Tick and the World requirement.
- Overrides `IsTickable()` and `GetTickableTickType()` to keep test
  instances out of the global tickable registry (avoids the
  `bInitialized` ensure trip in `UTickableWorldSubsystem::Tick`).
- Provides `TestSetup(DayDuration, InitialMinuteOfDay)` to inject state
  directly without going through Settings or Initialize.

---

## §12. Behavioral contracts (summary)

A consolidated list of properties the system guarantees. If a change breaks
one of these, either the change is wrong, or the contract is being revised
(in which case the corresponding test should be updated and the change
reviewed).

1. `0 <= GetCurrentMinuteOfDay() < 1440` always.
2. `0 <= GetCurrentMinuteOfDayFloat() < 1440.0` always.
3. `GetCurrentHour() == GetCurrentMinuteOfDay() / 60`.
4. `GetCurrentMinuteOfHour() == GetCurrentMinuteOfDay() % 60`.
5. `GetCurrentMinuteOfDay() == floor(GetCurrentMinuteOfDayFloat())`.
6. `OnMinuteOfDayChanged` fires iff the integer minute changes.
7. `OnHourChanged` fires iff the integer hour changes.
8. When both fire, `OnMinuteOfDayChanged` precedes `OnHourChanged`.
9. Pausing suppresses Tick advancement but not manual setters.
10. `DayDurationSeconds <= 0` suppresses Tick advancement entirely.
11. `Initialize` reads Settings exactly once. Live edits don't propagate.
12. Time does not persist across level transitions.
13. The Subsystem reads no other Kaus system. It is read by no other Kaus
    system.

---

## §13. Performance

Each Tick is constant-time and trivial: one float add, one comparison, two
integer divisions, up to two delegate broadcasts. There is no allocation,
no map lookup, no Subsystem traversal.

The clock is safe to leave running indefinitely. There is no performance
reason to pause it for optimization purposes.
