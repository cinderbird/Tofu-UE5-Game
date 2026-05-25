# UE5 Automation Test Authoring — Agent Playbook

**Engine**: Unreal Engine 5.5.4 baseline. Most rules apply 5.0+.
**Audience**: AI agents writing or modifying UE5 automation tests.
**Last revision**: 2026-05-06 — sections 3 (cross-subsystem lookup), 8 (UE 5.5 enum class breakage), 14 and 15 (build cache diagnosis) added based on field experience from the Kaus DayCycle Layer 2 implementation.

This document encodes pitfalls that are non-obvious and will fail at compile time, link time, UHT step, or worse — runtime crash. Always check this before writing automation tests.

---

## Decision Tree: Should You Write the Test?

```
Is the code under test pure C++ (no UWorld/GEngine)?
├─ Yes → Write a unit test. Use IMPLEMENT_SIMPLE_AUTOMATION_TEST.
└─ No → Does it need a UGameInstance?
        ├─ Yes (and it's a GameInstanceSubsystem)
        │  → Use isolated NewObject pattern (see § 3). DO NOT call InitializeStandalone.
        ├─ Yes (general game code)
        │  → Use FWorldFixture pattern with UWorld::CreateWorld.
        └─ Needs full PIE → Latent commands + ADD_LATENT_AUTOMATION_COMMAND.
```

---

## § 1. Mandatory File Structure

```cpp
// Copyright …

#if WITH_DEV_AUTOMATION_TESTS

#include "Path/To/Subject.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMyTest,
    "Project.Category.Subcategory.Name",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FMyTest::RunTest(const FString& Parameters)
{
    // body
    return true;  // or false to fail
}

#endif // WITH_DEV_AUTOMATION_TESTS
```

### Rules
- **Always wrap with `#if WITH_DEV_AUTOMATION_TESTS`** — tests must not be in Shipping builds.
- **Test name** uses dot-separated hierarchy. Becomes a tree node in Session Frontend.
- **Test class name** must be unique across the whole engine. Prefix with `F` + project shorthand.
- **Flags**: `EditorContext | EngineFilter` is the safe default. See § 8 for alternatives.

---

## § 2. CRITICAL: UCLASS / UFUNCTION Inside Preprocessor Guards

**UHT (UnrealHeaderTool) rejects UCLASS, USTRUCT, UFUNCTION, UPROPERTY inside any preprocessor block except `WITH_EDITORONLY_DATA`.**

```cpp
// ❌ FAILS — UHT error: "'UCLASS' must not be inside preprocessor blocks"
#if WITH_DEV_AUTOMATION_TESTS
UCLASS()
class UMyTestListener : public UObject { ... };
#endif

// ✅ CORRECT — UCLASS lives in a header at file-scope, no guard
// header.h:
UCLASS()
class UMyTestListener : public UObject { ... };

// cpp uses guard for actual logic:
#if WITH_DEV_AUTOMATION_TESTS
#include "MyTestListener.h"
// ... use the class here
#endif
```

### Implication
If your test needs a UCLASS (for `AddDynamic` callbacks or UPROPERTY containers), you **must put it in a header file**. Cpp-internal `UCLASS()` does not work — UHT does not parse cpp body for these macros under guards.

### Cost
Empty UCLASS leaks into Shipping builds. For testing helpers this is acceptable (a few tens of bytes). Wrapping the *body* of test functions with the guard, while exposing the class itself, is the standard idiom.

---

## § 3. Subsystem Tests — Honor ClassWithin, Skip InitializeStandalone

`UGameInstanceSubsystem` is declared with `ClassWithin = UGameInstance`. UE5's `NewObject` enforces this:

```
LogUObjectGlobals: Object None of class /Script/MyModule.MySubsystem with ClassWithin
                   of /Script/Engine.GameInstance was created in invalid Outer
                   /Script/UnrealEd.UnrealEdEngine!
Ensure condition failed: false [UObjectGlobals.cpp:3362]
```

So Outer **must** be a `UGameInstance` (or subclass).

But `UGameInstance::InitializeStandalone()` creates a `WorldContext` that conflicts with PIE/Runtime contexts → crash. So we can't fully initialize the GameInstance either.

### ❌ Anti-pattern 1: GEngine as Outer
```cpp
UMySubsystem* Sub = NewObject<UMySubsystem>(GEngine);  // ENSURE — ClassWithin violated
```

### ❌ Anti-pattern 2: InitializeStandalone
```cpp
UGameInstance* GI = NewObject<UGameInstance>();
GI->InitializeStandalone();  // CRASH in Runtime context
UMySubsystem* Sub = GI->GetSubsystem<UMySubsystem>();
```

### ✅ Correct: Empty GameInstance + Direct Subsystem Instantiation

```cpp
struct FTestContext
{
    TObjectPtr<UGameInstance> GameInstance = nullptr;
    TObjectPtr<UMySubsystem> Subsystem = nullptr;

    FTestContext()
    {
        // Empty container — DO NOT call Init or InitializeStandalone
        GameInstance = NewObject<UGameInstance>();
        GameInstance->AddToRoot();

        // ClassWithin satisfied: Outer is UGameInstance
        Subsystem = NewObject<UMySubsystem>(GameInstance);
        Subsystem->AddToRoot();
    }

    ~FTestContext()
    {
        if (Subsystem) { Subsystem->RemoveFromRoot(); Subsystem = nullptr; }
        if (GameInstance) { GameInstance->RemoveFromRoot(); GameInstance = nullptr; }
    }

    UMySubsystem* Get() const { return Subsystem; }
    UObject* GetOuter() const { return GameInstance; }  // for child objects
};
```

### Why this works
- `UGameInstance` itself has no `ClassWithin` restriction (parent UObject) → safe to NewObject
- Empty GameInstance never creates WorldContext → no Runtime conflict
- Child Subsystem's ClassWithin is satisfied because Outer = UGameInstance
- Both AddToRoot'd → GC-safe across the test
- Subsystem `Initialize()` is NOT called — but since most simple Subsystems' Initialize is just logging + variable zeroing, this is harmless. Members self-init via UPROPERTY defaults.

### When Initialize() must run
If your Subsystem's `Initialize` does meaningful work (registers tickers, binds delegates with shared state, etc.), you have two choices:
1. Refactor to make those side effects opt-in via a public method, then call that method explicitly in tests
2. Use a real PIE world fixture instead of unit tests (heavier, slower)

For pure data subsystems (like Calendar), option 1 is rarely needed — `Initialize` is a no-op outside of housekeeping.

### Cross-Subsystem Lookup — A Trap You Will Hit

The empty-GameInstance pattern keeps a single subsystem isolated, but it does **not** populate the GameInstance's SubsystemCollection. So `GameInstance->GetSubsystem<UOtherSubsystem>()` returns `nullptr` even if you `NewObject`'d that other subsystem with the same GameInstance as Outer.

This bites you when subsystem A internally calls `GetGameInstance()->GetSubsystem<B>()`. In production that works; in tests it returns `nullptr` and A behaves as if B does not exist.

```cpp
// Production code (real GameInstance, real SubsystemCollection)
UCalendarSubsystem* Calendar = GetGameInstance()->GetSubsystem<UCalendarSubsystem>();
// ✅ works — SubsystemCollection has it

// Test environment (empty GameInstance, no SubsystemCollection)
// Even though both subsystems exist with GI as Outer:
UCalendarSubsystem* Calendar = GetGameInstance()->GetSubsystem<UCalendarSubsystem>();
// ❌ returns nullptr — nothing was ever auto-registered
```

The symptom: tests fail with messages like "X subsystem not initialized" even though you set up X correctly. The trap is that the failure looks like a logic bug, not a test-environment bug.

#### Fix 1: Dependency Injection (preferred)

Add an optional parameter to the dependent subsystem's init function. Production uses `nullptr` (default), tests pass the explicit instance.

```cpp
// Header
UFUNCTION(BlueprintCallable, meta = (AdvancedDisplay = "InCalendar"))
bool InitializeWith(/*...other args...*/, UCalendarSubsystem* InCalendar = nullptr);

// Cpp
UCalendarSubsystem* Calendar = InCalendar
    ? InCalendar
    : GetGameInstance()->GetSubsystem<UCalendarSubsystem>();
```

This is the cleanest fix — production is unchanged, tests are explicit.

#### Fix 2: Outer-scan Fallback (defense in depth)

If the dependent subsystem cannot accept new parameters (legacy API, BP-only callers, etc.), make `GetSubsystem<>()` failure trigger a manual scan of the GameInstance's children:

```cpp
UCalendarSubsystem* GetCalendar() const
{
    if (CachedCalendar.IsValid()) return CachedCalendar.Get();

    UGameInstance* GI = GetGameInstance();
    if (!GI) return nullptr;

    // Production path
    if (auto* Sub = GI->GetSubsystem<UCalendarSubsystem>())
    {
        CachedCalendar = Sub;
        return Sub;
    }

    // Test fallback — scan direct children of GI
    TArray<UObject*> Children;
    GetObjectsWithOuter(GI, Children, /*bIncludeNestedObjects=*/false);
    for (UObject* Child : Children)
    {
        if (auto* Sub = Cast<UCalendarSubsystem>(Child))
        {
            CachedCalendar = Sub;
            return Sub;
        }
    }
    return nullptr;
}
```

Cache the result in a `mutable TWeakObjectPtr` to avoid repeated scans. Use both fixes together for maximum robustness — DI is the primary line, outer-scan is the safety net.

#### What does NOT work

- Calling `GameInstance->Init()` to populate the collection — creates a WorldContext, breaks PIE.
- Trusting that `NewObject<USub>(GI)` registers the subsystem — it does not. Outer + collection are different things.
- Using `GetTransientPackage()` as Outer — fails ClassWithin.

### Other Subsystem types

| Type | ClassWithin | Test pattern |
|---|---|---|
| `UEngineSubsystem` | `UEngine` | `GEngine->GetEngineSubsystem<...>()` directly — engine already created it |
| `UGameInstanceSubsystem` | `UGameInstance` | This pattern (empty GI + NewObject) |
| `UWorldSubsystem` | `UWorld` | `FWorldFixture` — see § 4 |
| `ULocalPlayerSubsystem` | `ULocalPlayer` | Heavy — requires GameInstance + LocalPlayer setup. Prefer integration tests |

---

## § 4. World-Dependent Tests — FWorldFixture Pattern

When the Subject needs a `UWorld`:

```cpp
class FWorldFixture
{
public:
    FWorldFixture()
    {
        if (!GEngine) return;
        const FString WorldName = FString::Printf(TEXT("TestWorld_%d"), Counter++);
        World = UWorld::CreateWorld(EWorldType::Game, false, *WorldName, GetTransientPackage());
        FWorldContext& Ctx = GEngine->CreateNewWorldContext(EWorldType::Game);
        Ctx.SetCurrentWorld(World);
        World->InitializeActorsForPlay(FURL());
        World->BeginPlay();
    }

    ~FWorldFixture()
    {
        if (World && GEngine)
        {
            World->BeginTearingDown();
            GEngine->DestroyWorldContext(World);
            World->DestroyWorld(false);
        }
    }

    UWorld* Get() const { return World.Get(); }

private:
    static uint32 Counter;
    TStrongObjectPtr<UWorld> World;
};
```

Place this in a shared header for reuse. Each test creates its own instance for isolation.

---

## § 5. Test Assertion API

### Two-argument requirement
**`TestTrue` / `TestFalse` ALWAYS take `(FString What, bool Value)`.** Single-argument forms do not compile.

```cpp
// ❌
TestTrue(MyFunc());                       // C2661: no overloaded function takes 1 arguments

// ✅
TestTrue(TEXT("MyFunc returned true"), MyFunc());
```

This catches developers who naturally write `assert(expr)`-style code.

### Common assertion API
```cpp
TestTrue(What, bool);
TestFalse(What, bool);
TestEqual(What, Actual, Expected);                 // any comparable type
TestNotEqual(What, Actual, Expected);
TestNull(What, Pointer);
TestNotNull(What, Pointer);
TestSame(What, ActualPtr, ExpectedPtr);            // same pointer
TestNotSame(What, ActualPtr, ExpectedPtr);
TestValid(What, SharedPtr);                        // .IsValid()
TestInvalid(What, SharedPtr);

// Failure helpers
AddError(TEXT("Custom error message"));
AddWarning(TEXT("Custom warning"));
AddInfo(TEXT("Diagnostic info"));
```

### Early-return pattern for nullable preconditions
```cpp
if (!TestNotNull(TEXT("Subsystem must exist"), Sub))
{
    return false;  // abort early; don't deref null
}
TestTrue(TEXT("Subsystem initialized"), Sub->IsInitialized());
```

---

## § 6. GC Safety in Tests

Tests run inside the engine's normal GC cycle. UObjects created with `NewObject` and not held by any UPROPERTY anywhere will be collected on the next GC pass.

### Rule: Always `AddToRoot` long-lived test UObjects
```cpp
UMySubsystem* Sub = NewObject<UMySubsystem>(GEngine);
Sub->AddToRoot();
// ... test
Sub->RemoveFromRoot();  // before destruction or test end
```

### Or: Use parent Outer to anchor lifetime
```cpp
UObject* Outer = GEngine;  // or another rooted UObject
UMySchedule* Schedule = NewObject<UMySchedule>(Outer);  // GC-safe via Outer
```

If the Outer is rooted, all children are reachable. This is why `FTestContext::GetOuter()` returns the Subsystem's Outer — it's GEngine, which is permanently rooted.

### Never: Default Outer for long-lived objects
```cpp
// ❌ TransientPackage is rooted, but objects there compete for global namespace
// and may collide between tests
UMyObj* Obj = NewObject<UMyObj>();  // Outer = TransientPackage
```

---

## § 7. Date / Calendar Test Pitfalls

If testing systems with date arithmetic (or any closed-domain types):

### Test boundary cases match domain
```cpp
// ❌ Generic ranges that hit invalid territory
const FKausGameDate Base(1, 1, 1);
for (int32 N : {1, 100, -10})           // -10 from Year=1 is invalid
{
    const auto F = Cal->AddDays(Base, N);
    TestEqual(...);
}

// ✅ Split by direction; pick Base values that keep results valid
const FKausGameDate Base(1, 1, 1);
for (int32 N : {1, 100, 1000}) { /* test forward */ }

const FKausGameDate MidBase(3, 5, 20);  // enough headroom
for (int32 N : {-10, -100}) { /* test backward */ }
```

### Default-constructed value can collide with valid values
If `MyType{}` default-constructs to a value that's also a valid in-domain value, error returns can silently pass tests:
```cpp
// FKausGameDate default = (1, 1, 1) — also a valid date
// AddDays returns FKausGameDate{} on failure → tests think result == Base
// → false-positive "round-trip succeeded"
```
Mitigation: distinguish failure with explicit `bool` return / `TOptional`, or use base values that can't collide.

---

## § 8. Test Flags Cheatsheet

```cpp
// Common combos
EAutomationTestFlags::EditorContext   | EAutomationTestFlags::EngineFilter   // editor-only quick smoke
EAutomationTestFlags::EditorContext   | EAutomationTestFlags::ProductFilter  // longer editor tests
EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter  // run anywhere

// Filters by speed
SmokeFilter      // < 1 sec, runs on every commit
EngineFilter     // engine-level functionality
ProductFilter    // gameplay product
PerfFilter       // performance benchmarks
StressFilter     // stress / soak

// Contexts
EditorContext       // editor commandlets, Session Frontend
ClientContext       // client-side runtime
ServerContext       // dedicated server runtime
CommandletContext   // headless commandlets
ApplicationContextMask = all four

// Disabled — keeps test code, hides from runner
Disabled
```

UE 5.5 changed `EAutomationTestFlags` from `namespace { enum }` to `enum class`. **Bitwise operator overloads still work for individual flags**, but **composite masks were removed**. Specifically:

- `EAutomationTestFlags::ApplicationContextMask` no longer exists as a value — it must be reconstructed as `EditorContext | ClientContext | ServerContext | CommandletContext`, or use individual context flags directly.
- Old code that wrote `ApplicationContextMask | ProductFilter` will fail to compile in 5.5+ with errors like *"is not a member of 'EAutomationTestFlags'"*.

When migrating a test file from 5.4 or earlier, expect to replace every `ApplicationContextMask` with explicit context flags. The safest replacement is `EditorContext | EngineFilter` (editor-only, fast) unless you genuinely need server/client/commandlet runs.

This caught us by surprise in a real migration — the prior version of this playbook claimed "no code change needed", which was wrong.

---

## § 9. Specs (BDD Alternative)

For BDD-style tests with `BeforeEach`/`AfterEach`:
```cpp
BEGIN_DEFINE_SPEC(FMyClassSpec, "Project.MyClass",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
    TUniquePtr<FWorldFixture> Fixture;
    UMyClass* Subject;
END_DEFINE_SPEC(FMyClassSpec)

void FMyClassSpec::Define()
{
    Describe("Behavior of MyClass", [this]()
    {
        BeforeEach([this]()
        {
            Fixture = MakeUnique<FWorldFixture>();
            Subject = NewObject<UMyClass>(Fixture->Get());
        });

        It("should initialize cleanly", [this]()
        {
            TestTrue("Initialized", Subject->IsInitialized());
        });

        AfterEach([this]() { Fixture.Reset(); });
    });
}
```
Useful for many tests sharing setup. Not required for simple cases.

---

## § 10. Latent Commands (Multi-Frame Tests)

For tests requiring time progression (timers, async loads):

```cpp
DEFINE_LATENT_AUTOMATION_COMMAND(FMyLatent);
bool FMyLatent::Update()
{
    // return false to keep waiting, true when done
    return CheckCondition();
}

bool FMyTest::RunTest(const FString& Parameters)
{
    DoSetup();
    ADD_LATENT_AUTOMATION_COMMAND(FWaitLatentCommand(2.0f));   // wait 2 sec
    ADD_LATENT_AUTOMATION_COMMAND(FMyLatent());
    return true;  // returns immediately; latent commands run after
}
```

`TestEqual` calls outside latent commands fire immediately during `RunTest`, not in sequence with latent commands. Wrap assertions in latent commands too if order matters.

---

## § 11. Running Tests

### Editor
```
Tools → Test Automation
or
Window → Developer Tools → Session Frontend → Automation
```

### Command line
```bat
UnrealEditor-Cmd.exe Project.uproject ^
  -ExecCmds="Automation RunTests Project.Category; Quit" ^
  -unattended -nullrhi -nopause
```
- `-nullrhi`: no graphics. Required for headless CI.
- `-unattended`: auto-dismiss modals.
- `-nopause`: don't pause on errors.

### Console (in-game)
```
` (backtick) → Automation RunTests Project.Category
              → Automation List
```

---

## § 12. Common Mistakes Checklist

Run through this list before submitting:

- [ ] All UCLASS / UFUNCTION in headers, NOT inside `#if WITH_DEV_AUTOMATION_TESTS`
- [ ] All `TestTrue` / `TestFalse` calls have description string as first arg
- [ ] All long-lived test UObjects either `AddToRoot()` or have rooted Outer
- [ ] Subsystem tests use **GameInstance as Outer** (not GEngine) — respects ClassWithin
- [ ] No `UGameInstance::InitializeStandalone()` for subsystem tests (use empty GI + direct NewObject)
- [ ] Test name unique across project + engine
- [ ] Test class struct name (`FMyTest`) unique
- [ ] `RunTest` returns true (test continues even if assertions fail; only return false for catastrophic abort)
- [ ] No assertions on default-constructed values that could collide with valid domain values
- [ ] Date arithmetic doesn't go below domain minimum (Year=1 for Gregorian/Planetary)
- [ ] Async / multi-thread mutations marshalled to game thread
- [ ] If subsystem A calls `GetSubsystem<B>()` internally, tests inject B explicitly **or** A has an outer-scan fallback (§ 3)
- [ ] No `EAutomationTestFlags::ApplicationContextMask` (removed in UE 5.5; use explicit context flags — § 8)
- [ ] When fix-then-test reproduces identical results across runs, suspect build cache before logic (§ 14, § 15)
- [ ] Header file UCLASS that previously did not exist has not been duplicated to a `Tests/` subfolder by accident — UHT rejects same-named headers in one module

---

## § 13. Integration with Project Conventions

Per Kaus project memory:

### Idempotent delegate binding
```cpp
// Always pair these — even in tests
Sub->OnDayMetaChanged.RemoveDynamic(Listener, &UListener::Handle);
Sub->OnDayMetaChanged.AddDynamic(Listener, &UListener::Handle);
```

### Module dependencies
Tests inherit from the module's `.Build.cs`. No automation-specific module setup needed for `WITH_DEV_AUTOMATION_TESTS`-guarded code.

### Subsystem categorization
- `UGameInstanceSubsystem` (Calendar) → § 3 direct instantiation
- `UWorldSubsystem` (GamePhase) → § 4 FWorldFixture
- `ULocalPlayerSubsystem` (DialoguePreferences) → needs LocalPlayer + GameInstance setup, prefer integration over unit
- `UEngineSubsystem` → use `GEngine->GetEngineSubsystem<...>()` directly; engine already created it

---

## § 14. Build Cache and Live Coding — When Code Changes Don't Apply

**This section costs the most time when you don't know it.** Symptoms below match what we hit live during DayCycle development, where 4 sequential test runs returned **byte-identical CSV results** despite code changes.

### Symptom

You change a `.cpp` (or `.h`) file in a way that should change test outcomes. You build. You run tests. The results are **identical** to before the change — same failures, same line numbers, same error strings.

### Causes (in decreasing likelihood)

1. **The file was not actually copied to the project.** Especially when working from a separate output directory or AI-assisted code generation pipeline. The most common cause by far.
2. **Live Coding patched only the cpp.** UE Live Coding can apply `.cpp` changes via in-place patching while leaving `.h` changes unrouted. The result: signature changes do not propagate, test cpp keeps calling the old version because the linker never re-bound.
3. **Hot-reload corruption.** Multiple incremental compiles can leave stale `.obj` files in `Intermediate/Build/Win64/...` that link against the old code.
4. **UHT manifest cache.** `Intermediate/Build/Win64/<Project>Editor/<Config>/<Project>.uhtmanifest` can lock in old class metadata; `UFUNCTION` signature changes are most affected.
5. **The editor was open during the build.** Even with Live Coding off, an open editor holds DLLs that may not refresh.

### How to verify a change actually built

Pick something distinctive from your change and grep the on-disk file at the project's actual path. Don't trust your own memory of "I copied that".

```powershell
# Did my new diagnostic log actually land in the file?
Select-String -Path "D:\Project\Source\Mod\File.cpp" -Pattern "\[Diag\]"
# Returns 0 hits → the file was not updated
```

If you have automated tests, **leave a unique fingerprint in the change**. A new log message with a unique tag, a new test name, a new `UE_LOG` line — anything you can confirm by grep. After every "the change didn't seem to apply" event, grep first, debug second.

### Line-number cross-check

CSV-based test failure output reports the file path and line number of each failed `TestTrue` / `TestEqual`. After making changes that should add lines (an extra parameter on a multi-line call, a new comment, etc.), the line numbers in failures should shift. If the same `Tests/X.cpp(469)` keeps appearing across multiple builds where you added lines around line 469, the file you built is not the file you edited.

### The reset that always works

When the cause is unclear and you've spent more than 15 minutes on it, do the full reset:

1. **Close the Unreal Editor entirely.** Live Coding is process-bound; closing it dumps the patch state.
2. **Delete `Binaries/`, `Intermediate/`, `DerivedDataCache/`** in the project root.
3. **Right-click `.uproject` → Generate Visual Studio project files**.
4. **Build → Rebuild Solution** (not Build, not Compile — Rebuild).
5. **Reopen the editor**, then run tests.

Yes, this takes 5–15 minutes depending on project size. It is also the only thing that reliably defeats every cause in the list above.

### Diagnostic log technique

When a fix should have worked but didn't, instrument the suspect path with `UE_LOG(LogX, Warning, TEXT("[Diag] ..."))` lines that are uniquely greppable. Each branch should log differently so the test output reveals which path actually executed:

```cpp
if (ExplicitArg)
{
    UE_LOG(LogX, Warning, TEXT("[Diag] Init: using EXPLICIT arg"));
    // ...
}
else
{
    UE_LOG(LogX, Warning, TEXT("[Diag] Init: arg is null, falling back"));
    // ...
}
```

After the next test run, the absence of any `[Diag]` line in the output proves the cpp itself didn't build. Their presence tells you exactly which branch ran. Keep diagnostic logs in for one or two runs after green, then strip them.

---

## § 15. When the Same Fix Doesn't Take

You apply a fix. You build. Tests still fail with the same error. You apply a different fix. Same failure. You verify the file content with `cat`. It looks correct. What's happening?

This is the trap that consumed the longest stretch of our DayCycle session. The signs and what to check:

| Sign | What to check |
|---|---|
| CSV results are **byte-identical** across two consecutive runs after a code change | § 14 — the build did not apply. Skip ahead, do the full reset. |
| New code paths (e.g. fallback branches) appear unreached, but they should run | Add `[Diag]` UE_LOG lines on every branch (§ 14 last subsection). Their absence in the next run proves the cpp didn't build. |
| Your fix touched a header signature; tests use the old signature | Test `.cpp` files in `Tests/` subfolder were not updated. Grep for the new signature in the test file directly. |
| Failure line numbers don't shift even though you added lines | Same as above — the test cpp on disk is older than what you think. |
| Fix looks correct, file content correct, but tests still fail | The compiled `.obj` is stale. Delete `Intermediate/Build/Win64/`. |

A useful invariant: **after a real code change is built and run, *something* in the test output should be different from before.** If everything is identical, the change did not take. Stop applying more fixes; investigate the build pipeline first.

---

## See Also
- `Misc/AutomationTest.h` — engine source for full API
- `Source/Kaus/Calendar/Tests/` — example tests in this project
- Anthropic Claude memory entry "Delegate 안전 패턴" — Idempotent Add-before-Remove
