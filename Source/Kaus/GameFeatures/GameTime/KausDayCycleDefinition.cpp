// Copyright Project Kaus. All Rights Reserved.

#include "KausDayCycleDefinition.h"
#include "Tags/KausDayCycleTags.h"

#if WITH_EDITOR
#include "Misc/DataValidation.h"
#endif

bool UKausDayCycleDefinition::IsDefinitionValid(FString& OutError) const
{
    if (Cycles.Num() == 0)
    {
        OutError = TEXT("Cycles 배열이 비어있습니다.");
        return false;
    }

    TSet<FGameplayTag> SeenTags;
    SeenTags.Reserve(Cycles.Num());

    for (int32 i = 0; i < Cycles.Num(); ++i)
    {
        const FKausCycleSpec& Spec = Cycles[i];

        if (!Spec.CycleTag.IsValid())
        {
            OutError = FString::Printf(TEXT("Cycles[%d]의 CycleTag가 invalid 입니다."), i);
            return false;
        }

        bool bAlreadyIn = false;
        SeenTags.Add(Spec.CycleTag, &bAlreadyIn);
        if (bAlreadyIn)
        {
            OutError = FString::Printf(TEXT("Cycles에 중복된 CycleTag '%s' 가 있습니다."),
                *Spec.CycleTag.ToString());
            return false;
        }

        // 새 검증: BudgetMode가 valid 태그여야 함
        if (!Spec.BudgetMode.IsValid())
        {
            OutError = FString::Printf(
                TEXT("Cycles[%d] '%s'의 BudgetMode가 invalid 입니다. "
                     "Calendar.Cycle.BudgetMode.{Token, Realtime} 중 하나를 지정하세요."),
                i, *Spec.CycleTag.ToString());
            return false;
        }

        // CycleBudget 음수 거부
        if (Spec.CycleBudget < 0)
        {
            OutError = FString::Printf(
                TEXT("Cycles[%d] '%s'의 CycleBudget이 음수(%d)입니다."),
                i, *Spec.CycleTag.ToString(), Spec.CycleBudget);
            return false;
        }
    }

    return true;
}

int32 UKausDayCycleDefinition::IndexOf(const FGameplayTag& CycleTag) const
{
    if (!CycleTag.IsValid()) return INDEX_NONE;

    for (int32 i = 0; i < Cycles.Num(); ++i)
    {
        if (Cycles[i].CycleTag.MatchesTagExact(CycleTag))
        {
            return i;
        }
    }
    return INDEX_NONE;
}

FGameplayTag UKausDayCycleDefinition::TagAt(int32 Index) const
{
    return Cycles.IsValidIndex(Index) ? Cycles[Index].CycleTag : FGameplayTag::EmptyTag;
}

FKausCycleSpec UKausDayCycleDefinition::SpecAt(int32 Index) const
{
    return Cycles.IsValidIndex(Index) ? Cycles[Index] : FKausCycleSpec{};
}

FKausCycleSpec UKausDayCycleDefinition::FindSpec(const FGameplayTag& CycleTag, bool& OutFound) const
{
    const int32 Idx = IndexOf(CycleTag);
    if (Idx == INDEX_NONE)
    {
        OutFound = false;
        return FKausCycleSpec{};
    }
    OutFound = true;
    return Cycles[Idx];
}

FGameplayTag UKausDayCycleDefinition::NextCycle(const FGameplayTag& CycleTag, bool& OutbWrappedDate) const
{
    OutbWrappedDate = false;

    const int32 Idx = IndexOf(CycleTag);
    if (Idx == INDEX_NONE) return FGameplayTag::EmptyTag;

    const int32 Next = Idx + 1;
    if (Next >= Cycles.Num())
    {
        OutbWrappedDate = true;
        return Cycles[0].CycleTag;
    }

    return Cycles[Next].CycleTag;
}

#if WITH_EDITOR
EDataValidationResult UKausDayCycleDefinition::IsDataValid(FDataValidationContext& Context) const
{
    EDataValidationResult Result = Super::IsDataValid(Context);

    FString Error;
    if (!IsDefinitionValid(Error))
    {
        Context.AddError(FText::FromString(Error));
        Result = EDataValidationResult::Invalid;
    }

    // DisplayHour 단조증가 권장 경고 (강제 아님)
    if (Cycles.Num() >= 2)
    {
        bool bMonotonic = true;
        for (int32 i = 1; i < Cycles.Num(); ++i)
        {
            if (Cycles[i].DisplayHour <= Cycles[i - 1].DisplayHour)
            {
                bMonotonic = false;
                break;
            }
        }
        if (!bMonotonic)
        {
            Context.AddWarning(FText::FromString(
                TEXT("Cycles의 DisplayHour가 단조증가하지 않습니다. "
                     "의도된 것이라면 무시하세요. (예: 자정을 넘는 Cycle 표현)")));
        }
    }

    // Realtime Mode인데 CycleBudget이 0이면 무한 머무름 — 경고
    for (int32 i = 0; i < Cycles.Num(); ++i)
    {
        const FKausCycleSpec& Spec = Cycles[i];
        if (Spec.BudgetMode.IsValid()
            && Spec.BudgetMode.MatchesTagExact(KausDayCycleTags::Calendar_Cycle_BudgetMode_Realtime)
            && Spec.CycleBudget == 0)
        {
            Context.AddWarning(FText::Format(NSLOCTEXT("Kaus", "RealtimeWithZeroBudget", "Cycles[{0}] '{1}'은 Realtime Mode인데 CycleBudget이 0입니다. " 
                "이 Cycle에 진입하면 즉시 종료됩니다."), FText::AsNumber(i), FText::FromString(Spec.CycleTag.ToString())));
        }
    }

    return Result;
}
#endif
