#pragma once
#include "Animation/AnimInstance.h"
#include "GameplayEffectTypes.h"
#include "KausAnimInstance.generated.h"

class UAbilitySystemComponent;
class UKausCharacterMovementComponent;

/**
 * UKausAnimInstance
 *
 * Kaus 프로젝트의 베이스 AnimInstance. AnimBP 가 이 클래스를 상속해 사용한다.
 *
 * 책임:
 *  1) ASC 와의 결합 — GameplayTagBlueprintPropertyMap 으로 GAS 태그를 AnimBP 의
 *     변수에 자동 미러링한다. 어빌리티/이펙트가 태그를 켜면 AnimBP 의 bool 이 바뀌고,
 *     이 값으로 Transition Rule 이 분기된다.
 *  2) 이동 정보 캐시 — CharacterMovementComponent 를 NativeInitializeAnimation 시점에
 *     한 번 캐스팅해 두어, 매 프레임 Cast 비용을 피한다.
 *  3) Gameplay/Cinematic 상태 머신 연동 — bIsGameplayPhase / bIsCinematicPhase 두 플래그로
 *     AnimGraph 내 상위 State Machine 이 분기되며, AnimPhase 메시지 수신 시
 *     IKausAnimPhaseHandler 구현이 이 두 플래그를 토글해 Inertial Blending 으로
 *     자연스러운 전환을 유도한다.
 */
UCLASS(Config = Game)
class UKausAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UKausAnimInstance(const FObjectInitializer& ObjectInitializer);

	/**
	 * GAS 태그를 AnimBP 변수에 미러링하기 위해 ASC 와 결합한다.
	 * 호출 시점은 보통 NativeInitializeAnimation — Owner 의 ASC 가 준비된 직후.
	 */
	virtual void InitializeWithAbilitySystem(UAbilitySystemComponent* ASC);

protected:
#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly, Category = "GameplayTags")
	FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;

	UPROPERTY(BlueprintReadOnly, Category = "Character State Data")
	float GroundDistance = -1.0f;

	UPROPERTY(Transient)
	TObjectPtr<UKausCharacterMovementComponent> CachedMovementComp;

	/**
	 * 상위 State Machine 의 Gameplay 상태 활성화 플래그.
	 * AnimPhase 메시지 수신 시 IKausAnimPhaseHandler 구현이 이 값을 토글하면,
	 * 다음 프레임에 CanTransition_CinematicToGameplay 가 true 가 되어 자연 전이된다.
	 * (즉, 직접 ChangeState 를 호출하지 않고 Transition Rule 로 간접 전환하는 구조.)
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Kaus|Animation Phase")
	bool bIsGameplayPhase = false;

	/** Cinematic 상태 활성화 플래그. bIsGameplayPhase 의 반대편 — 둘은 동시에 true 이면 안 된다. */
	UPROPERTY(BlueprintReadOnly, Category = "Kaus|Animation Phase")
	bool bIsCinematicPhase = false;

	/** 현재 활성 스킬 액션 태그 (ASC에서 직접 조회 가능, 디버그용 캐시) */
	UPROPERTY(BlueprintReadOnly, Transient, Category = "Kaus|Cinematic")
	FGameplayTag ActiveSkillActionTag;

	/**
	 * AnimGraph Transition Rule 평가용 — Gameplay → Cinematic 전이 허용 여부.
	 * BlueprintThreadSafe: 읽기 전용이므로 AnimGraph 의 워커 스레드에서 호출 가능.
	 * 두 플래그를 모두 보는 이유: 짧은 순간 둘 다 true 가 되는 race 를 안전하게 막기 위함.
	 */
	UFUNCTION(BlueprintPure, Category = "Kaus|Animation Phase|Transition",
		meta = (BlueprintThreadSafe))
	bool CanTransition_GameplayToCinematic() const;

	/** Cinematic → Gameplay 역방향. 두 플래그를 모두 검사하는 의도는 위와 동일. */
	UFUNCTION(BlueprintPure, Category = "Kaus|Animation Phase|Transition",
		meta = (BlueprintThreadSafe))
	bool CanTransition_CinematicToGameplay() const;

	/** CinematicState 진입 시 */
	UFUNCTION(BlueprintCallable, Category = "Kaus|Animation Phase|State")
	void OnCinematicStateEntered();

	/** CinematicState 퇴장 시 */
	UFUNCTION(BlueprintCallable, Category = "Kaus|Animation Phase|State")
	void OnCinematicStateExited();

	/** GameplayState 진입 시 */
	UFUNCTION(BlueprintCallable, Category = "Kaus|Animation Phase|State")
	void OnGameplayStateEntered();
};
