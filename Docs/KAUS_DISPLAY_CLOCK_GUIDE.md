# Kaus Display Clock — Guide

> **Audience**: New programmers and designers who need to add a visible
> "wall clock" to the game, react to time-of-day changes (lighting, NPC
> ambience, UI), or set the starting time for a level.
>
> **Style**: Concept-first. Concrete examples. "Why" before "how". For
> exact API signatures and contracts, see `KAUS_DISPLAY_CLOCK_REFERENCE.md`.

---

## What is this, and why is it separate from the Time system?

Kaus already has a Time system (see `KAUS_TIME_GUIDE.md`) that handles
**Cycle progression**, **action budgets**, and **end-of-day mechanics**.
That system is action-driven: time advances when the player does something.
If the player stands still, no game time passes.

But a game world feels dead if the on-screen clock never moves. NPCs
mentioning the time, the sun position, ambient audio that shifts at dusk —
these all want a visible clock that flows on its own, regardless of what the
player is doing.

That's what the **Display Clock** does. It is a separate, lightweight virtual
clock with one job: **show the passage of time**. It does not influence Cycle
progression, action budgets, or any game logic. Two parallel time
representations, separate concerns:

| System | Purpose | Driven by |
|---|---|---|
| **Time system** (Cycles, Budget) | Game logic — what the player can do, when the day ends | Player actions |
| **Display Clock** | Visual presentation — what time the wall clock shows | Real seconds (Tick) |

If you find yourself reaching for the Display Clock to gate gameplay, stop:
you want the Time system. If you find yourself reaching for the Time system
to drive lighting, stop: you want the Display Clock.

---

## The model in one picture

```
  Settings (Project Settings)             Display Clock Subsystem
  ┌────────────────────────────┐          ┌──────────────────────────────┐
  │  DayDurationSeconds = 86400│  load    │  Tick:                       │
  │  InitialHour       = 8     │ ───────► │    AccumulatedMinutes +=     │
  │  InitialMinute     = 0     │          │      DeltaTime * (1440 / day)│
  └────────────────────────────┘          │                              │
                                          │  Wraps at 1440 → 0           │
                                          │                              │
                                          │  Fires:                      │
                                          │    OnMinuteOfDayChanged      │
                                          │    OnHourChanged             │
                                          └──────────────────────────────┘
                                                  │
                                                  ▼
                                          UI clock, lighting, NPC ambience,
                                          environmental audio, …
```

---

## Three time representations, in plain terms

The clock works in minutes, but exposes three different ways of asking what
time it is. Each is useful in a different situation.

### "Minute of Day" (0–1439): the index

A flat counter from 0 (midnight) to 1439 (one minute before midnight). 14:30
is 870. Use this when you need to compare or interpolate without juggling
hours and minutes separately.

```cpp
const int32 MoD = Clock->GetCurrentMinuteOfDay();      // 870
const float MoDf = Clock->GetCurrentMinuteOfDayFloat();// 870.5 (smooth)
```

### "Hour" (0–23) + "Minute of Hour" (0–59): the pair

What you'd write on a wall clock. 14:30. Always use these together when
formatting for UI.

```cpp
const int32 H = Clock->GetCurrentHour();         // 14
const int32 M = Clock->GetCurrentMinuteOfHour(); // 30
// Format as "14:30"
```

### Setting the time

Two ways in, mirroring the two ways out:

```cpp
Clock->SetCurrentTime(14, 30);          // Hour, Minute — the natural way
Clock->SetCurrentMinuteOfDay(870);      // index — for code-driven jumps
```

Both end at the same place. Both clamp out-of-range inputs.

---

## How fast does time flow?

The clock takes **`DayDurationSeconds`** real seconds to traverse one virtual
day. Set it in **Project Settings → Game → Kaus Display Clock**.

| `DayDurationSeconds` | Meaning |
|---|---|
| `86400` | Real-time sync. 1 real minute = 1 virtual minute. |
| `3600` | One virtual day every real hour. |
| `600` | One virtual day every 10 real minutes. |
| `60` | One virtual day per real minute (~24× speed). |
| `0` (or less) | Clock is stopped. |

Default is `86400` (real-time sync). Most games will want something faster.
For a "life-sim" feel, somewhere between 600 and 1800 is a sensible range —
short enough that the player sees the day change in a single play session,
long enough that minutes don't blur past.

---

## Common scenarios

### "I want a clock UI that shows the current time."

Bind to `OnMinuteOfDayChanged` on the Display Clock subsystem, and update
your widget's text from `GetCurrentHour` / `GetCurrentMinuteOfHour`.

```cpp
// In some UI widget initialization
if (UKausDisplayClockSubsystem* Clock = GetWorld()->GetSubsystem<UKausDisplayClockSubsystem>())
{
    Clock->OnMinuteOfDayChanged.AddDynamic(this, &UClockWidget::HandleTimeChanged);
}

void UClockWidget::HandleTimeChanged(int32 NewMinuteOfDay, int32 PreviousMinuteOfDay)
{
    // Read current hour/minute and refresh display
    UKausDisplayClockSubsystem* Clock = GetWorld()->GetSubsystem<UKausDisplayClockSubsystem>();
    TimeText->SetText(FText::FromString(FString::Printf(TEXT("%02d:%02d"),
        Clock->GetCurrentHour(), Clock->GetCurrentMinuteOfHour())));
}
```

In Blueprint, the same flow works: `Get Subsystem → Bind Event to On Minute
Of Day Changed → on event, format and SetText`.

### "I want my NPC to do X every hour."

Bind to `OnHourChanged` instead. It only fires when the hour rolls over, so
you don't pay the cost of running NPC logic every minute.

```cpp
Clock->OnHourChanged.AddDynamic(this, &AMyNPC::HandleHourChanged);

void AMyNPC::HandleHourChanged(int32 NewHour, int32 PreviousHour)
{
    if (NewHour == 9)  { GoToWork(); }
    if (NewHour == 18) { GoHome(); }
}
```

### "I want smooth lighting that gradually shifts color over the day."

Don't bind to events for this. Poll `GetCurrentMinuteOfDayFloat` from your
own Tick and interpolate.

```cpp
void AMySkyLight::Tick(float DeltaTime)
{
    if (UKausDisplayClockSubsystem* Clock = GetWorld()->GetSubsystem<UKausDisplayClockSubsystem>())
    {
        const float MoD = Clock->GetCurrentMinuteOfDayFloat();
        const float DayProgress = MoD / 1440.0f;  // 0.0 to 1.0 over the day
        // Use DayProgress to drive sun angle, sky color, etc.
    }
}
```

The float version exists exactly for this — discrete events would create
visible steps in continuous visuals.

### "I want this level to start at 3:00 AM (a dream sequence)."

Set the time in the level Blueprint's BeginPlay:

```
[Event BeginPlay]
   → Get World → Get Subsystem (UKausDisplayClockSubsystem)
   → Set Current Time (Hour=3, Minute=0)
```

The global default in Project Settings stays at whatever you've configured;
this only overrides for this specific level.

### "I want a cinematic where time pauses, then resumes."

```cpp
Clock->Pause();
// ... cinematic plays ...
Clock->Resume();
```

The clock keeps its current time while paused. Tick has no effect; events
don't fire. Manually calling `SetCurrentTime` while paused still works (and
fires events) — useful if you want to fast-forward the time during a
cinematic, then resume.

### "I want to skip ahead a few hours after a player rests."

```cpp
const int32 NewHour = (Clock->GetCurrentHour() + 8) % 24;
Clock->SetCurrentTime(NewHour, 0);
```

Note that this fires `OnMinuteOfDayChanged` and `OnHourChanged` once each, so
listeners see one big jump (from "before sleep" to "after sleep"), not 480
intermediate minutes. This is intentional — the clock is for display; if you
need NPCs to "live through" those 8 hours, that's a Time system / Cycle
concern.

---

## Configuration

### Global defaults — Project Settings

`Edit → Project Settings → Game → Kaus Display Clock`. Three knobs:

| Field | Default | Range | What it does |
|---|---|---|---|
| `Day Duration Seconds` | 86400 | 0+ | Real seconds per virtual day. 0 = stopped. |
| `Initial Hour` | 0 | 0–23 | Starting hour when a world loads. |
| `Initial Minute` | 0 | 0–59 | Starting minute when a world loads. |

Changes save to `Config/DefaultGame.ini`. Commit that file to share defaults
across the team.

### Per-level overrides

The global default applies to every level. To use a different starting time
in a specific level, call `SetCurrentTime` from the level Blueprint's
BeginPlay (see scenario above). Level overrides are not configured through
Project Settings — they're code/Blueprint logic in the level itself.

---

## Lifetime and reset behavior

The Display Clock is a `UWorldSubsystem`, which means:

- It exists for the duration of a World (level).
- When the player loads a new level, the clock is destroyed and recreated.
- The new clock starts at `Settings.InitialHour:InitialMinute` again, *not*
  at whatever time the previous level was at.

If you want the time to persist across levels (e.g. "the clock keeps
ticking when I move from the bedroom to the garden, since they're the same
day"), the simplest option is: in the new level's BeginPlay, call
`SetCurrentTime` with the time you saved before transitioning. The Display
Clock itself does not save/restore — it's stateless across levels by design,
which keeps it simple.

---

## What lives where, in 30 seconds

```
Source/Kaus/GameTime/
├── KausDisplayClockSubsystem.h/.cpp     ← the clock itself (a WorldSubsystem)
├── KausDisplayClockSettings.h/.cpp      ← Project Settings entries
└── Tests/                               ← 10 automation tests
```

Tests are extensive and pass — the system is small but its boundaries
(midnight wrap, sub-minute non-events, manual jumps, pause) are all covered.

---

## Common gotchas

### "I bound an event but nothing fires."

Three things to check:

1. **Did you bind on the right Subsystem?** `GetSubsystem<UKausDisplayClockSubsystem>()`
   on the World, not the GameInstance.
2. **Is the clock running?** Check `IsPaused()` and `DayDurationSeconds > 0`.
   If `DayDurationSeconds = 0`, time doesn't advance and events don't fire.
3. **Are you binding before BeginPlay?** Subsystems exist as soon as the
   World is initialized, but if your widget is constructed before that, the
   subsystem lookup returns null. Bind in BeginPlay or later.

### "The clock UI shows the wrong starting time."

The starting time comes from `Settings.InitialHour:InitialMinute` in Project
Settings. If you've changed those values and they're not reflected, the
saved `DefaultGame.ini` may not be in sync — try changing them in the editor
again, or check the file directly.

### "Pause didn't work."

`Pause()` stops the clock from advancing on Tick. It does *not* prevent
explicit `SetCurrentTime` calls from firing events. If you want to suppress
all updates including manual ones, check `IsPaused()` in your handler and
early-out.

### "I want to know about every second."

The clock doesn't fire per-second events. The smallest unit it tracks is a
virtual minute. If you want second-level precision, you're probably looking
for a different system — likely a real-time stopwatch, not a virtual clock.

---

## Vocabulary cheat-sheet

| You say... | The code calls it... |
|---|---|
| "the clock" | `UKausDisplayClockSubsystem` |
| "wall clock time" / "what does the clock show" | `(GetCurrentHour, GetCurrentMinuteOfHour)` |
| "minute index" / "smooth time" | `GetCurrentMinuteOfDay` / `GetCurrentMinuteOfDayFloat` |
| "set the time to 3 PM" | `SetCurrentTime(15, 0)` |
| "the clock just ticked over to a new minute" | `OnMinuteOfDayChanged` |
| "the clock just ticked over to a new hour" | `OnHourChanged` |
| "freeze the clock" | `Pause()` |
| "how fast time flows" | `Settings.DayDurationSeconds` |
| "what time the level starts at" | `Settings.InitialHour` + `InitialMinute` |

---

## Where to go from here

- **Want exact API signatures and contracts?** Read
  `KAUS_DISPLAY_CLOCK_REFERENCE.md`.
- **Want to add Cycle-driven behavior (action budgets, end-of-day)?** That's
  the Time system, not this. See `KAUS_TIME_GUIDE.md`.
- **Found a bug?** Reproduce it as a unit test in
  `Source/Kaus/GameTime/Tests/`. The existing tests use a `TestSetup` helper
  that doesn't need a World, so most scenarios are easy to add.
