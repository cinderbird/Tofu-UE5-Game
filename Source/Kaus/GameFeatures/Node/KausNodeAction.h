#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "KausNodeEventPayload.h"
#include "AbilitySystem/Attributes/KausUnitAttributeSet.h"
#include "KausNodeAction.generated.h"

class UGameplayEffect;
class UKausNodeComponent;

/**
 * Action이 효과를 적용할 대상을 결정하는 방식.
 *
 * - Player:     Get Player Pawn(0).
 * - Instigator: Payload.Instigator (이벤트를 유발한 액터).
 * - Self:       Node Owner (Action이 속한 Node Component의 소유 Actor).
 * - Target:     Payload.Target (이벤트 페이로드에 명시된 타겟).
 */
UENUM(BlueprintType)
enum class EKausEffectTarget : uint8
{
    Player     UMETA(DisplayName = "Player)"),
    Instigator UMETA(DisplayName = "Instigator"),
    Self       UMETA(DisplayName = "Self"),
    Target     UMETA(DisplayName = "Target")
};

UCLASS(Abstract, BlueprintType, EditInlineNew, DefaultToInstanced)
class KAUS_API UKausNodeAction : public UObject
{
    GENERATED_BODY()

public:
    virtual void ExecuteAction(class UKausNodeComponent* TargetComponent, const struct FKausEventPayload& Payload) PURE_VIRTUAL(UKausNodeAction::ExecuteAction, );

    static AActor* ResolveTargetActor(EKausEffectTarget TargetMode, UKausNodeComponent* NodeComponent, const FKausEventPayload& Payload);
};

//상태 변경 액션
UCLASS(meta = (DisplayName = "Action: State 변경"))
class KAUS_API UKausAction_ChangeState : public UKausNodeAction
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Category = "Action")
    FGameplayTag NewStateTag;

    virtual void ExecuteAction(UKausNodeComponent* TargetComponent, const FKausEventPayload& Payload) override;
};

UCLASS(meta = (DisplayName = "Action: 다른 이벤트 브로드캐스트"))
class KAUS_API UKausAction_BroadcastEvent : public UKausNodeAction
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Category = "Action")
    FGameplayTag EventToBroadcast;
    
    virtual void ExecuteAction(UKausNodeComponent* TargetComponent, const FKausEventPayload& Payload) override;
};

/**
 * Action: GameplayEffect 적용 (고정 GE 클래스)
 *
 * 지정된 GameplayEffect를 지정된 대상의 ASC에 적용합니다.
 * 스텟 증감(Attribute 변동)의 기본 수단.
 */
UCLASS(meta = (DisplayName = "Action: GameplayEffect 적용"))
class KAUS_API UKausAction_ApplyGameplayEffect : public UKausNodeAction
{
    GENERATED_BODY()

public:
    /** 적용할 GameplayEffect 클래스 */
    UPROPERTY(EditAnywhere, Category = "Action|Effect")
    TSubclassOf<UGameplayEffect> EffectToApply;

    /** GE Level (Payload.Value로 override 가능) */
    UPROPERTY(EditAnywhere, Category = "Action|Effect")
    float Level = 1.0f;

    /** true면 Payload.Value를 Level로 사용 */
    UPROPERTY(EditAnywhere, Category = "Action|Effect")
    bool bUsePayloadValueAsLevel = false;

    /** 효과를 적용할 대상 */
    UPROPERTY(EditAnywhere, Category = "Action|Target")
    EKausEffectTarget TargetMode = EKausEffectTarget::Player;

    virtual void ExecuteAction(UKausNodeComponent* TargetComponent, const FKausEventPayload& Payload) override;
};

/**
 * Action: 태그 기반 GameplayEffect 다중 적용
 *
 * Payload.Values (TMap<FGameplayTag, float>)를 순회하며,
 * TagToEffectMap에 매핑된 GameplayEffect를 각 수치(Magnitude)로 적용합니다.
 *
 * 한 번의 선택에서 여러 스텟을 동시에 바꿀 때 사용.
 * 예: { "Attribute.Logic": +5, "Attribute.SelfEsteem": -2 } → GE 2개 적용
 */
UCLASS(meta = (DisplayName = "Action: 태그별 GameplayEffect 적용 (다중)"))
class KAUS_API UKausAction_ApplyGameplayEffectByTag : public UKausNodeAction
{
    GENERATED_BODY()

public:
    /**
     * 태그 → GE 매핑.
     * Payload.Values에 있는 태그 중 이 맵에 등록된 것만 적용됩니다.
     * 각 GE의 SetByCaller Magnitude로 수치가 전달됩니다.
     */
    UPROPERTY(EditAnywhere, Category = "Action|Effect")
    TMap<FGameplayTag, TSubclassOf<UGameplayEffect>> TagToEffectMap;

    /** SetByCaller로 전달할 Magnitude 태그 (GE에 동일한 태그의 SetByCaller modifier가 있어야 함) */
    UPROPERTY(EditAnywhere, Category = "Action|Effect",
        meta = (ToolTip = "GE의 Modifier에서 SetByCaller.DataTag로 사용할 태그. 보통 'Data.Magnitude'."))
    FGameplayTag MagnitudeTag;

    UPROPERTY(EditAnywhere, Category = "Action|Target")
    EKausEffectTarget TargetMode = EKausEffectTarget::Player;

    virtual void ExecuteAction(UKausNodeComponent* TargetComponent, const FKausEventPayload& Payload) override;
};

/**
 * Action: 선택 누적 기록 (ChoiceHistorySubsystem)
 *
 * Decorator 대신 Node Reaction에서도 Choice 누적 가능하게 하는 대체 경로.
 * Payload 유무에 따라 ChoiceTag 또는 Payload.Tags의 태그를 기록.
 */
UCLASS(meta = (DisplayName = "Action: Choice 기록"))
class KAUS_API UKausAction_RecordChoice : public UKausNodeAction
{
    GENERATED_BODY()

public:
    /** 기록할 ChoiceTag. 유효하지 않으면 Payload.Tags의 모든 Kaus.Choice.* 태그를 기록 */
    UPROPERTY(EditAnywhere, Category = "Action",
        meta = (Categories = "Kaus.Choice"))
    FGameplayTag ChoiceTag;

    /** 기록 증분. Payload.Value가 0이 아니면 우선 사용 */
    UPROPERTY(EditAnywhere, Category = "Action")
    int32 Increment = 1;

    /** true면 Payload.Value를 Increment로 사용 (정수로 캐스트) */
    UPROPERTY(EditAnywhere, Category = "Action")
    bool bUsePayloadValueAsIncrement = false;

    virtual void ExecuteAction(UKausNodeComponent* TargetComponent, const FKausEventPayload& Payload) override;
};

// ============================================================================
// UKausAction_ApplyStatDeltas
// ============================================================================

/**
 * Action: Payload.Values에 담긴 스텟 증감을 Player ASC에 즉시 적용
 *
 * 데모용 단순화 버전 — GE 에셋 없이 Tag→Attribute 매핑으로 직접 ApplyModToAttribute.
 * 적용 대상은 항상 로컬 플레이어 Pawn의 ASC.
 *
 * Payload.Values 예시:
 *   { "Kaus.Stat.Logic":      +5.0,
 *     "Kaus.Stat.SelfEsteem": -2.0 }
 *
 * 인식하는 태그 목록은 UKausUnitAttributeSet의 8개 속성:
 *   Vitality, ReactionSpeed, Logic, SelfEsteem,
 *   Motivation, Depression, Anxiety, Anger
 */
UCLASS(meta = (DisplayName = "Action: Player 스텟 증감 (Payload.Values)"))
class KAUS_API UKausAction_ApplyStatDeltas : public UKausNodeAction
{
    GENERATED_BODY()

public:
    virtual void ExecuteAction(UKausNodeComponent* TargetComponent, const FKausEventPayload& Payload) override;

private:
    /** StatTag → FGameplayAttribute 매핑 (첫 호출 시 lazy 초기화) */
    static const TMap<FGameplayTag, FGameplayAttribute>& GetStatTagToAttributeMap();
};
