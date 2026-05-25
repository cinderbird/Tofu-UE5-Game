#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "KausChoiceHistorySubsystem.generated.h"

/**
 * 선택 누적 알림 델리게이트
 *
 * @param ChoiceTag  누적된 태그
 * @param NewTotal   해당 태그의 새로운 누적 횟수
 * @param Increment  이번에 추가된 증분량
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FKausChoiceRecordedDelegate,
    FGameplayTag, ChoiceTag, int32, NewTotal, int32, Increment);

/**
 * UKausChoiceHistorySubsystem
 *
 * 데모 세션 동안 대화 선택의 누적 횟수를 추적합니다.
 * GameInstance 수명 주기와 동일하여 레벨 전환에도 유지되며,
 * 데모 재시작 시에는 ResetAllChoices() 호출로 초기화됩니다.
 *
 * 접근 방법:
 *   - BP:  Get Game Instance Subsystem (Class = KausChoiceHistorySubsystem)
 *   - C++: GetGameInstance()->GetSubsystem<UKausChoiceHistorySubsystem>()
 */
UCLASS(Config = Game)
class KAUS_API UKausChoiceHistorySubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    //~USubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    //~End of USubsystem

    /**
     * 선택 태그의 누적 횟수를 Increment만큼 증가시킵니다.
     * 음수 증분도 허용하지만 총합은 0 미만으로 내려가지 않습니다.
     *
     * @param ChoiceTag  기록할 태그 (유효하지 않으면 무시)
     * @param Increment  증분 (기본 1, 음수 가능)
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Choice")
    void RecordChoice(FGameplayTag ChoiceTag, int32 Increment = 1);

    /** 특정 태그의 현재 누적 횟수를 반환. 없으면 0 반환 */
    UFUNCTION(BlueprintPure, Category = "Kaus|Choice")
    int32 GetChoiceCount(FGameplayTag ChoiceTag) const;

    /** 특정 태그의 누적이 Threshold 이상인지 확인 */
    UFUNCTION(BlueprintPure, Category = "Kaus|Choice")
    bool HasChoiceAtLeast(FGameplayTag ChoiceTag, int32 Threshold) const;

    /**
     * 특정 태그의 모든 하위 태그(계층적) 누적 합계 반환.
     * 예: "Kaus.Choice.Tutorial"로 질의 시 "Kaus.Choice.Tutorial.Kind" + "Kaus.Choice.Tutorial.Cold" 등 합산
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|Choice")
    int32 GetTotalCountMatching(FGameplayTag ParentTag) const;

    /** 모든 선택 누적 초기화 (데모 재시작 시 사용) */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Choice")
    void ResetAllChoices();

    /** 현재 모든 누적 데이터의 스냅샷 반환 (디버그/UI용) */
    UFUNCTION(BlueprintPure, Category = "Kaus|Choice")
    TMap<FGameplayTag, int32> GetAllChoiceCounts() const { return ChoiceCounts; }

    /** 선택 기록 시 브로드캐스트되는 델리게이트 */
    UPROPERTY(BlueprintAssignable, Category = "Kaus|Choice")
    FKausChoiceRecordedDelegate OnChoiceRecorded;

private:
    /** Tag → 누적 횟수 */
    UPROPERTY(Transient)
    TMap<FGameplayTag, int32> ChoiceCounts;
};