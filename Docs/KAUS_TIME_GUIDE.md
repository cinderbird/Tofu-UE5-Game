# Kaus Time System — Guide

> **Audience**: New programmers joining the project, and game designers who
> need to understand what's possible without reading C++.
>
> **Style**: Concept-first. Concrete examples. "Why" before "how". For exact
> API tables and call ordering, see `KAUS_TIME_REFERENCE.md`.

---

## What problem does this system solve?

Kaus is a game where time matters. Days pass. Each day has multiple
"slots" — morning, afternoon, evening — and the player can do limited things in
each slot. Some events happen on specific dates. Some cycles play out in
real-time minutes (like late-night sequences).

Without a unified system, this gets tangled fast: who tracks "what day is it",
who decides "is this slot over", who tells the rest of the game "we just moved
to evening", who enforces "you can't do that, you're out of time"?

The Time system separates these concerns into three layers, each with one
responsibility, and gives the rest of the codebase clean signals to react to.

---

## The three layers, in plain terms

### Layer 1 — Calendar: *what kind of day is it?*

Think of the Calendar as a wall calendar with notes on each square. It knows
that day 47 is a Tuesday, day 90 is a holiday, day 156 is the protagonist's
birthday. **It does not know what day "today" is.** It just maintains the
catalog.

Designers fill in this catalog through a `CalendarSchedule` data asset — they
set the start/end dates, mark recurring weekends and holidays, and seed special
days. The game can also apply runtime overrides (e.g. "after this story event,
mark day 200 as a funeral day").

**Example**: Designer wants every Friday in March to be a "study day" with a
specific tag. They configure `RecurringWeekday = Friday`, `MonthFilter = 3`,
`Tag = Calendar.Day.Special.StudyDay`. The Calendar pre-computes which dates
match.

### Layer 2 — DayCycle: *what time is it now, and how do we move forward?*

The DayCycle is a pointer. It holds two values: today's date, and which slot of
today we're in. Together, that pair is `FKausDayCyclePoint` — the "now"
coordinate.

The DayCycle also knows the **sequence** of slots in a day, configured per
project as a `DayCycleDefinition`. In Kaus, there are four:

| Cycle tag | Display | Typical use |
|---|---|---|
| `Calendar.Cycle.Morning` | 5 AM | Free exploration (Token mode, ~5 actions) |
| `Calendar.Cycle.Afternoon` | 10 AM | Main story choices (Token mode) |
| `Calendar.Cycle.Night1` | 6 PM | Free exploration #2 (Token mode) |
| `Calendar.Cycle.Night2` | 10 PM | Auto-progressing night events (Realtime mode) |

When something asks the DayCycle to move forward, it advances to the next
slot. If that was the last slot of the day, it crosses into tomorrow and asks
the Calendar what tomorrow is.

**The DayCycle never decides on its own to move forward.** Something else
(usually the player resource layer) tells it when to advance.

### Layer 3 — GameTime (player-side): *how much can the player still do?*

A `GameTimeComponent` lives on each player and tracks the player's remaining
budget for the current Cycle. When the player does an action that costs
something, the component asks: "Do you have enough?" If yes, deduct. If the
remaining hits zero (and the policy says to), the component tells the DayCycle
to advance.

Two budget modes:

- **Token mode** — integer count. "Morning has 5 actions. Each action costs 1.
  After 5 actions, it's Afternoon."
- **Realtime mode** — virtual minutes. "Night2 starts at 10:00 PM and lasts 240
  minutes. Each interaction costs some minutes. When you've spent 240, it's the
  next day."

The GameTime side also broadcasts events to the rest of the game ("Morning just
started", "the day just ended"). NPCs, UI, audio, ambient systems can listen.

---

## The mental model in one picture

```
Designer puts day metadata into:
   ┌───────────────────────────┐
   │   CalendarSchedule        │  ← DataAsset (calendar.uasset)
   │   - start/end dates       │
   │   - weekends, holidays    │
   │   - special days          │
   └───────────────────────────┘
              │ feeds
              ▼
   ┌───────────────────────────┐         "What kind of day is Day 47?"
   │   CalendarSubsystem       │ ──┐
   │   (Layer 1: catalog)      │   │
   └───────────────────────────┘   │
              ▲                    │
              │ asks for tomorrow  │
              │                    │
   ┌───────────────────────────┐   │     "What's the current Date+Cycle?"
   │   DayCycleSubsystem       │ ──┤
   │   (Layer 2: now-pointer)  │   │
   └───────────────────────────┘   │
       │ OnCycleChanged signal     │
       ▼                           │
   ┌───────────────────────────┐   │
   │   GameTimeComponent       │ ──┘
   │   (Layer 3: player budget)│
   └───────────────────────────┘
       │ also emits messages
       ▼
   ┌───────────────────────────┐         Anyone can listen to:
   │ GameTimeMessageBroadcast  │  →   Event.Time.CycleEntered.Morning
   │ System                    │  →   Event.Time.DayStart
   │ (translator/adapter)      │  →   Event.Time.BudgetExhausted
   └───────────────────────────┘
```

Lower layers don't know about higher ones. The Calendar has no idea the
DayCycle exists. The DayCycle has no idea about player resources. This makes
each layer testable on its own and replaceable in isolation.

---

## Common scenarios

### "I want to make an action that costs 2 time."

If you're in Blueprint, this is mostly a one-line change.

1. Create a new GameplayAbility derived from `KausPlayerActionAbility` (it's
   `Abstract, Blueprintable` — extend it).
2. Set `DefaultTimeCost = 2`.
3. Override `K2_OnActivate` (the Blueprint event) — put the actual gameplay
   logic there. When done, call `EndAbility`.

That's it. The base class handles the cost deduction. If the player can't
afford it, your ability gets `K2_OnRejected` instead, and you can show a UI
message.

If different Cycle modes should cost differently:

```
DefaultTimeCost = 1                          // fallback
TimeCostByMode:
   Calendar.Cycle.BudgetMode.Token    → 1
   Calendar.Cycle.BudgetMode.Realtime → 30   // 30 in-game minutes
```

If a specific interaction wants to override the cost (e.g. "this examine action
is free for tutorial"), the interaction sends an FGameplayEventData with the
`Action.Cost.Override` tag set and `EventMagnitude` = the override value.
`EventMagnitude = 0` means free; the override tag is required so that "0" can
mean "explicitly free" and not "uninitialized default".

### "I want NPCs to do something when night starts."

Listen for the `Event.Time.CycleEntered.Night1` GameplayMessage.

In a Node Reaction (the project's main BP-driven event system), set
`ListenEventTag = Event.Time.CycleEntered.Night1`. The reaction fires every
time the game enters Night1.

In C++, register with the `UGameplayMessageSubsystem`:

```cpp
UGameplayMessageSubsystem::Get(this).RegisterListener(
    KausDayCycleTags::Event_Time_CycleEntered_Night1,
    [](FGameplayTag Channel, const FKausTimeMessagePayload& Payload) {
        // run when Night1 begins
    });
```

The payload tells you the new and previous coordinates and whether the date
crossed.

### "I want the morning UI to show a Continue button after enough actions."

Cycles can support manual ending — the player can choose to skip ahead once
they've done "enough". This is configured per-Cycle:

```
CycleSpec for Morning:
   CycleBudget = 5
   EndPolicy.bAllowManualEndAtThreshold = true
   EndPolicy.ManualEndAtRemainingOrLess = 3
```

Meaning: "After the player has 3 or fewer actions left (i.e. used at least 2),
the Continue button activates."

UI binds to `OnCanManualEndChanged` on the GameTimeComponent. When that fires
true, enable the button. When it fires false, disable. Click handler calls
`TryManualEndCycle()`.

### "I want a special story event on day 100."

Two options.

**Option A — declarative (preferred for static content)**: Add a seed entry to
the `CalendarSchedule` asset. Designer adds:
`Date = (2026, 4, 10), Tag = Calendar.Marker.MeetingWithNPC`. From then on,
`CalendarSubsystem.TryGetDayMeta(Date)` reports that tag. Story logic queries
the Calendar each Cycle entry to decide what to do.

**Option B — runtime (for content unlocked by player progression)**: Call
`CalendarSubsystem.ApplyRuntimeOverride` after a story flag is set. The override
is saved with the player's save game.

### "I want to skip ahead one day for testing."

`DayCycleSubsystem.AdvanceBy(1, 0)` advances by exactly one day, ending in the
same Cycle of the next day. Or call `JumpTo(SpecificDate, SpecificCycleTag)`.

For player-facing skip (cinematic, sleep button), use
`GameTimeComponent.ForceAdvanceCycle()` repeatedly, or call
`DayCycleSubsystem.AdvanceBy` with `bBroadcastEachStep = false` to suppress
per-step events and emit only the final transition.

---

## What lives where, in 30 seconds

```
Source/Kaus/
├── Calendar/      ← which dates exist, what tags they have
├── GameTime/      ← what time is it now; how budget works
├── Narrative/     ← unrelated, but related-feeling: story flags & counters
│                    ("did the player meet Alice?", "how many times have they
│                    visited the library?")
└── Tags/          ← all the GameplayTags used by the above
```

Tests live under each domain in a `Tests/` subfolder. There are 96 of them and
they all pass — meaning these systems are stable and you can rely on the
documented behavior.

---

## How to think about adding new things

### Adding a new Cycle (e.g. "Dawn" before Morning)

1. Decide the tag: `Calendar.Cycle.Dawn`.
2. Today these are registered in C++ (`KausDayCycleTags.cpp`); in the future
   they may move to `.ini`. For now, add the entry there.
3. Open the project's `DayCycleDefinition` asset and add a new Cycle to the
   array, in chronological order. Set `DisplayHour`, `BudgetMode`,
   `CycleBudget`, `EndPolicy`.
4. Optionally add a corresponding `Event.Time.CycleEntered.Dawn` and
   `Event.Time.CycleExiting.Dawn` so listeners can dispatch.

The system handles the rest.

### Adding a new BudgetMode

Two existing modes (Token, Realtime) cover the obvious cases. Adding a third
mode is unusual — most ideas turn out to be parameter variations of these
two. Talk to the engineering lead before adding one.

### Adding a new event (e.g. `Event.Time.MidnightChime`)

Add the tag. Decide who broadcasts it. If it's a derived event from Cycle
transitions, the `GameTimeMessageBroadcastSystem` is a natural place to extend.
If it's a side effect of a player action, the action's logic should broadcast
directly via `UGameplayMessageSubsystem::Get(this).BroadcastMessage`.

---

## Common gotchas, in plain terms

### "My ability doesn't deduct time."

Three things to check:
1. Is your ability derived from `KausPlayerActionAbility`? If not, the deduction
   logic doesn't run.
2. Is `DefaultTimeCost > 0`? If it's 0, the system treats the action as free.
3. Is the player's GameTimeComponent attached? It lives on the PlayerState.
   If your test rig spawned only a Pawn without a PlayerController/PlayerState,
   the ability falls back to looking on the Pawn.

### "I subscribed to a GameplayMessage but nothing fires."

GameplayMessages need an active `UGameplayMessageSubsystem`, which exists on
the World. In automation tests with no World, no messages fire — that's
expected. In game, make sure GameMode has called
`GameTimeMessageBroadcastSystem.StartBroadcasting()` after the DayCycle is
initialized.

Also: there is no `Event.Time.CycleEntered` event. Only the children fire
(`...Morning`, `...Afternoon`, etc.). Listen to the specific child you care
about.

### "Time advances when I don't want it to."

Some Cycle has `EndPolicy.bEndOnBudgetExhausted = true`. When budget hits zero,
it auto-advances. If you want a Cycle that the player must manually end, set:

```
bEndOnBudgetExhausted = false
bAllowManualEndAtThreshold = true
ManualEndAtRemainingOrLess = 0     // available immediately
```

### "I broke a test."

Read what the test asserts. Most tests are short and direct. The system has
contracts (in `KAUS_TIME_REFERENCE.md` §12), and the tests encode them. If
your change makes a test fail, either: (a) you broke a contract — revisit the
change, or (b) the contract is wrong — discuss with the team before changing
the test.

---

## Designer's vocabulary cheat-sheet

| You say... | The code calls it... |
|---|---|
| "the calendar" | `KausCalendarSubsystem` (the catalog) + `KausCalendarSchedule` (the data asset you edit) |
| "what kind of day" / "day tag" | `FKausDayMeta.Tags` |
| "today's slot" / "current cycle" | `FKausDayCyclePoint.CycleTag` |
| "actions per slot" | `FKausCycleSpec.CycleBudget` |
| "an action's cost" | `UKausPlayerActionAbility.DefaultTimeCost` (or override) |
| "remaining actions" | `Remaining` (on the component) |
| "Continue button" / "skip rest" | `TryManualEndCycle()` + `OnCanManualEndChanged` |
| "morning starts" event | `Event.Time.CycleEntered.Morning` GameplayTag |
| "the day rolls over" | `Event.Time.DayEnd` then `Event.Time.DayStart` |
| "out of time" event | `Event.Time.BudgetExhausted` |

---

## Where to go from here

- **Want exact API and contracts?** Read `KAUS_TIME_REFERENCE.md`.
- **Want to add a new gameplay mechanic that interacts with time?** Look at
  existing `KausPlayerActionAbility` subclasses for patterns. Talk to the
  ability/interaction owner before introducing a new pattern.
- **Want to change the day structure (number of Cycles, lengths)?** Edit the
  `DayCycleDefinition` data asset. Add native tags if introducing a new Cycle
  identity. Re-test save/load (changing Cycle count breaks old saves).
- **Found a bug?** Reproduce it in a unit test in the appropriate `Tests/`
  folder. The test rig is well-developed — most scenarios can be tested without
  a running World.
