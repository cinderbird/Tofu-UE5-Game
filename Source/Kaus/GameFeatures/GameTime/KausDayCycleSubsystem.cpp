// Copyright Project Kaus. All Rights Reserved.

#include "KausDayCycleSubsystem.h"
#include "KausDayCycleDefinition.h"
#include "KausCalendarSubsystem.h"
#include "KausCalendarSystem.h"
#include "KausCalendarTypes.h"
#include "Engine/GameInstance.h"
#include "Logging/LogMacros.h"
#include "UObject/UObjectHash.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausDayCycle, Log, All);

void UKausDayCycleSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    UE_LOG(LogKausDayCycle, Log, TEXT("[DayCycle] Subsystem Initialized"));
}

void UKausDayCycleSubsystem::Deinitialize()
{
    OnCycleChanged.Clear();
    OnDateChanged.Clear();
    Definition = nullptr;
    Current = FKausDayCyclePoint{};
    bInitialized = false;
    CachedCalendar.Reset();
    UE_LOG(LogKausDayCycle, Log, TEXT("[DayCycle] Subsystem Deinitialized"));
    Super::Deinitialize();
}

bool UKausDayCycleSubsystem::InitializeWith(UKausDayCycleDefinition* InDefinition, const FKausGameDate& StartDate, const FGameplayTag& StartCycleTag, UKausCalendarSubsystem* InCalendar)
{
    check(IsInGameThread());

    if (!InDefinition)
    {
        UE_LOG(LogKausDayCycle, Warning, TEXT("[DayCycle] InitializeWith: null Definition"));
        return false;
    }

    FString Error;
    if (!InDefinition->IsDefinitionValid(Error))
    {
        UE_LOG(LogKausDayCycle, Warning, TEXT("[DayCycle] InitializeWith: Definition '%s' invalid: %s"),
            *InDefinition->GetName(), *Error);
        return false;
    }

    if (!StartCycleTag.IsValid() || !InDefinition->ContainsCycle(StartCycleTag))
    {
        UE_LOG(LogKausDayCycle, Warning, TEXT("[DayCycle] InitializeWith: StartCycleTag '%s' not in Definition"), *StartCycleTag.ToString());
        return false;
    }

    // Calendar 참조 결정:
    //  1) 명시 주입(InCalendar) 우선 — 테스트 / DI 시나리오.
    //     주입된 인스턴스가 있으면 캐시에 저장하고, 이후 GetCalendarSubsystem()이 같은 것을 반환.
    //  2) nullptr이면 GetCalendarSubsystem() — GameInstance Subsystem Collection 사용.
    UKausCalendarSubsystem* Calendar = InCalendar;
    if (Calendar)
    {
        CachedCalendar = Calendar;
    }
    else
    {
        Calendar = GetCalendarSubsystem();
    }

    if (!Calendar || !Calendar->IsInitialized())
    {
        UE_LOG(LogKausDayCycle, Warning, TEXT("[DayCycle] InitializeWith: Calendar Subsystem not initialized. " "Call CalendarSubsystem::InitializeWithSchedule first."));
        return false;
    }

    if (!Calendar->IsDateInRange(StartDate))
    {
        UE_LOG(LogKausDayCycle, Warning, TEXT("[DayCycle] InitializeWith: StartDate %s out of Calendar range [%s, %s]"), *StartDate.ToString(), *Calendar->GetStartDate().ToString(), *Calendar->GetEndDate().ToString());
        return false;
    }

    const FKausDayCyclePoint OldPoint = Current;

    Definition = InDefinition;
    Current = FKausDayCyclePoint(StartDate, StartCycleTag);
    bInitialized = true;

    UE_LOG(LogKausDayCycle, Log, TEXT("[DayCycle] Initialized at %s with Definition '%s'"), *Current.ToString(), *Definition->GetName());

    // 재초기화 시 좌표가 변경되었으면 발행.
    // 첫 초기화(OldPoint가 default)도 차이가 있으면 발행 — 구독자가 시작 시점을 알 수 있도록.
    BroadcastCycleChanged(OldPoint);
    BroadcastDateChanged(OldPoint.Date);

    return true;
}

bool UKausDayCycleSubsystem::TryGetCurrentDayMeta(FKausDayMeta& OutMeta) const
{
    if (!bInitialized) return false;

    UKausCalendarSubsystem* Calendar = GetCalendarSubsystem();
    if (!Calendar) return false;

    return Calendar->TryGetDayMeta(Current.Date, OutMeta);
}

int32 UKausDayCycleSubsystem::CountCyclesBetween(const FKausDayCyclePoint& From, const FKausDayCyclePoint& To) const
{
    if (!bInitialized || !Definition) return 0;

    UKausCalendarSubsystem* Calendar = GetCalendarSubsystem();
    if (!Calendar) return 0;

    UKausCalendarSystem* CalSys = Calendar->GetCalendarSystem();
    if (!CalSys) return 0;

    if (!From.IsValid() || !To.IsValid()) return 0;

    const int32 FromStep = Definition->GetCycleStepIndex(From.CycleTag);
    const int32 ToStep   = Definition->GetCycleStepIndex(To.CycleTag);
    if (FromStep == INDEX_NONE || ToStep == INDEX_NONE) return 0;

    const int32 CycleCount = Definition->GetCycleCount();
    if (CycleCount <= 0) return 0;

    // Date가 같으면 step 차이만.
    if (From.Date == To.Date)
    {
        return ToStep - FromStep;
    }

    // 다른 Date: DaysBetween * CycleCount + step 차이.
    // 두 Date 모두 Calendar 범위 안일 필요는 없다 — DaysBetween은 캘린더 산술에 의존.
    const int32 DayDiff = CalSys->DaysBetween(From.Date, To.Date);
    return DayDiff * CycleCount + (ToStep - FromStep);
}

bool UKausDayCycleSubsystem::AdvanceCycle()
{
    check(IsInGameThread());

    if (!bInitialized) return false;

    FKausDayCyclePoint OldPoint;
    bool bDateBoundary = false;
    if (!AdvanceOneStep(OldPoint, bDateBoundary))
    {
        return false;
    }

    BroadcastCycleChanged(OldPoint);
    if (bDateBoundary)
    {
        BroadcastDateChanged(OldPoint.Date);
    }
    return true;
}

bool UKausDayCycleSubsystem::AdvanceBy(int32 DaysToSkip, int32 CyclesToSkip, bool bBroadcastEachStep)
{
    check(IsInGameThread());

    if (!bInitialized) return false;
    if (DaysToSkip < 0 || CyclesToSkip < 0)
    {
        UE_LOG(LogKausDayCycle, Warning,
            TEXT("[DayCycle] AdvanceBy: negative values not allowed (Days=%d, Cycles=%d)"),
            DaysToSkip, CyclesToSkip);
        return false;
    }

    // 0,0 → no-op + 신호 미발행
    if (DaysToSkip == 0 && CyclesToSkip == 0)
    {
        return true;
    }

    if (!Definition) return false;
    const int32 CycleCount = Definition->GetCycleCount();
    if (CycleCount <= 0) return false;

    // 총 step 수 = DaysToSkip * CycleCount + CyclesToSkip.
    // 이렇게 변환해서 통일된 step 루프로 처리.
    // (DaysToSkip만 있으면 정확히 CycleCount번 step한 후 같은 Cycle로 돌아옴.)
    const int64 TotalSteps = static_cast<int64>(DaysToSkip) * static_cast<int64>(CycleCount) + static_cast<int64>(CyclesToSkip);

    if (TotalSteps <= 0) return true;

    const FKausDayCyclePoint InitialPoint = Current;
    FKausGameDate LastBroadcastedDate = Current.Date;

    for (int64 i = 0; i < TotalSteps; ++i)
    {
        FKausDayCyclePoint StepOldPoint;
        bool bStepDateBoundary = false;
        if (!AdvanceOneStep(StepOldPoint, bStepDateBoundary))
        {
            // 진행 실패 — 여기서 중단.
            // 이미 진행된 부분은 그대로 유지. 마지막 발행은 아래 로직에서 처리.
            UE_LOG(LogKausDayCycle, Warning, TEXT("[DayCycle] AdvanceBy: aborted at step %lld of %lld"),
                i, TotalSteps);
            break;
        }

        if (bBroadcastEachStep)
        {
            BroadcastCycleChanged(StepOldPoint);
            if (bStepDateBoundary)
            {
                BroadcastDateChanged(StepOldPoint.Date);
                LastBroadcastedDate = Current.Date;
            }
        }
    }

    // batch 모드: 시작점 ↔ 최종점 간 단일 발행.
    if (!bBroadcastEachStep)
    {
        BroadcastCycleChanged(InitialPoint);
        if (Current.Date != InitialPoint.Date)
        {
            BroadcastDateChanged(InitialPoint.Date);
        }
    }

    return true;
}

bool UKausDayCycleSubsystem::JumpTo(const FKausGameDate& Date, const FGameplayTag& CycleTag)
{
    check(IsInGameThread());

    if (!bInitialized || !Definition) return false;

    if (!CycleTag.IsValid() || !Definition->ContainsCycle(CycleTag))
    {
        UE_LOG(LogKausDayCycle, Warning, TEXT("[DayCycle] JumpTo: CycleTag '%s' not in Definition"), *CycleTag.ToString());
        return false;
    }

    UKausCalendarSubsystem* Calendar = GetCalendarSubsystem();
    if (!Calendar || !Calendar->IsDateInRange(Date))
    {
        UE_LOG(LogKausDayCycle, Warning, TEXT("[DayCycle] JumpTo: Date %s out of Calendar range"), *Date.ToString());
        return false;
    }

    const FKausDayCyclePoint Target(Date, CycleTag);
    if (Target == Current)
    {
        // 동일 좌표 → no-op
        return true;
    }

    const FKausDayCyclePoint OldPoint = Current;
    Current = Target;

    BroadcastCycleChanged(OldPoint);
    if (Current.Date != OldPoint.Date)
    {
        BroadcastDateChanged(OldPoint.Date);
    }
    return true;
}

FKausDayCycleSaveData UKausDayCycleSubsystem::CaptureSaveData() const
{
    FKausDayCycleSaveData Data;
    if (Definition)
    {
        Data.DefinitionAssetPath = FSoftObjectPath(Definition);
    }
    Data.Current = Current;
    return Data;
}

bool UKausDayCycleSubsystem::RestoreFromSaveData(const FKausDayCycleSaveData& Data)
{
    check(IsInGameThread());

    UKausDayCycleDefinition* LoadedDef = nullptr;
    if (Data.DefinitionAssetPath.IsValid())
    {
        UObject* Loaded = Data.DefinitionAssetPath.TryLoad();
        LoadedDef = Cast<UKausDayCycleDefinition>(Loaded);
    }

    if (!LoadedDef)
    {
        UE_LOG(LogKausDayCycle, Warning, TEXT("[DayCycle] RestoreFromSaveData: failed to load Definition from %s"), *Data.DefinitionAssetPath.ToString());
        return false;
    }

    if (!Data.Current.IsValid())
    {
        UE_LOG(LogKausDayCycle, Warning, TEXT("[DayCycle] RestoreFromSaveData: SaveData has invalid Current point"));
        return false;
    }

    return InitializeWith(LoadedDef, Data.Current.Date, Data.Current.CycleTag);
}

bool UKausDayCycleSubsystem::AdvanceOneStep(FKausDayCyclePoint& OutOldPoint, bool& OutbDateBoundary)
{
    OutOldPoint = Current;
    OutbDateBoundary = false;

    if (!Definition) return false;

    bool bWrappedDate = false;
    const FGameplayTag NextTag = Definition->NextCycle(Current.CycleTag, bWrappedDate);
    if (!NextTag.IsValid()) return false;

    FKausGameDate NextDate = Current.Date;
    if (bWrappedDate)
    {
        // 다음 Date 계산
        UKausCalendarSubsystem* Calendar = GetCalendarSubsystem();
        if (!Calendar) return false;

        UKausCalendarSystem* CalSys = Calendar->GetCalendarSystem();
        if (!CalSys) return false;

        NextDate = CalSys->AddDays(Current.Date, 1);

        // 새 Date가 Calendar 범위 밖이면 진행 거부.
        if (!Calendar->IsDateInRange(NextDate))
        {
            UE_LOG(LogKausDayCycle, Verbose, TEXT("[DayCycle] AdvanceOneStep: next Date %s out of Calendar range"), *NextDate.ToString());
            return false;
        }
    }

    Current.Date = NextDate;
    Current.CycleTag = NextTag;
    OutbDateBoundary = bWrappedDate;
    return true;
}

void UKausDayCycleSubsystem::BroadcastCycleChanged(const FKausDayCyclePoint& PreviousPoint)
{
    if (Current == PreviousPoint) return;
    OnCycleChanged.Broadcast(Current, PreviousPoint);
}

void UKausDayCycleSubsystem::BroadcastDateChanged(const FKausGameDate& PreviousDate)
{
    if (Current.Date == PreviousDate) return;
    OnDateChanged.Broadcast(Current.Date, PreviousDate);
}

UKausCalendarSubsystem* UKausDayCycleSubsystem::GetCalendarSubsystem() const
{
    if (CachedCalendar.IsValid())
    {
        return CachedCalendar.Get();
    }

    UGameInstance* GI = GetGameInstance();
    if (!GI) return nullptr;

    if (UKausCalendarSubsystem* Sub = GI->GetSubsystem<UKausCalendarSubsystem>())
    {
        CachedCalendar = Sub;
        return Sub;
    }

    //Fallback - 런타임에서는 비정상적 도달 위치. 발생하면 안됨
    TArray<UObject*> Children;
    GetObjectsWithOuter(GI, Children, /*bIncludeNestedObjects=*/false);
    for (UObject* Child : Children)
    {
        if (UKausCalendarSubsystem* Sub = Cast<UKausCalendarSubsystem>(Child))
        {
            CachedCalendar = Sub;
            return Sub;
        }
    }

    return nullptr;
}
