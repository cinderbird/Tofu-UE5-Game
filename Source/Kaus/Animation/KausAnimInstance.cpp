#include "Animation/KausAnimInstance.h"
#include "AbilitySystemGlobals.h"
#include "Character/KausCharacter.h"
#include "Character/KausCharacterMovementComponent.h"

#if WITH_EDITOR
#include "Misc/DataValidation.h"
#endif

DEFINE_LOG_CATEGORY_STATIC(LogKausAnimInstance, Log, All);

// ============================================================================
// 생성자 / 초기화
// ============================================================================

UKausAnimInstance::UKausAnimInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UKausAnimInstance::InitializeWithAbilitySystem(UAbilitySystemComponent* ASC)
{
	check(ASC);
	GameplayTagPropertyMap.Initialize(this, ASC);
}

#if WITH_EDITOR
EDataValidationResult UKausAnimInstance::IsDataValid(FDataValidationContext& Context) const
{
	Super::IsDataValid(Context);
	GameplayTagPropertyMap.IsDataValid(this, Context);
	return ((Context.GetNumErrors() > 0)
		? EDataValidationResult::Invalid
		: EDataValidationResult::Valid);
}
#endif

void UKausAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (AActor* Owner = GetOwningActor())
	{
		// 캐스팅을 초기화 시 한 번만 수행하여 매 프레임 Cast 비용 방지
		if (AKausCharacter* Character = Cast<AKausCharacter>(Owner))
		{
			CachedMovementComp = Cast<UKausCharacterMovementComponent>(
				Character->GetCharacterMovement());
		}

		// ASC 초기화
		if (UAbilitySystemComponent* ASC =
				UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Owner))
		{
			InitializeWithAbilitySystem(ASC);
		}
	}
}

// ============================================================================
// 매 프레임 갱신
// ============================================================================

void UKausAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	// 캐시된 참조 사용 — 매 프레임 Cast 없음
	if (CachedMovementComp)
	{
		GroundDistance = CachedMovementComp->GetGroundInfo().GroundDistance;
	}
}

// ============================================================================
// Anim Node Functions — Transition Rule
// BlueprintThreadSafe: 읽기 전용이므로 워커 스레드에서 안전
// ============================================================================

bool UKausAnimInstance::CanTransition_GameplayToCinematic() const
{
	return bIsCinematicPhase && !bIsGameplayPhase;
}

bool UKausAnimInstance::CanTransition_CinematicToGameplay() const
{
	return bIsGameplayPhase && !bIsCinematicPhase;
}

// ============================================================================
// Anim Node Functions — State 수명주기
// BlueprintThreadSafe 아님: 워커 스레드에서 호출 시 안전하지 않은
// 작업이 포함될 수 있으므로 게임 스레드에서만 실행.
//
// Montage 재생은 KausSequenceSubsystem::BeginCinematicSession에서
// 게임 스레드에서 직접 수행한다.
// 이 함수들은 로그, 상태 플래그 정리 등 경량 작업만 담당한다.
// ============================================================================

void UKausAnimInstance::OnCinematicStateEntered()
{
	// Montage 재생은 KausSequenceSubsystem이 게임 스레드에서 직접 수행했으므로
	// 여기서는 로그와 추가 상태 설정만 처리한다.
	UE_LOG(LogKausAnimInstance, Log,
		TEXT("[%s] CinematicState Entered — Action: [%s]"),
		*GetNameSafe(GetOwningActor()),
		*ActiveSkillActionTag.ToString());
}

void UKausAnimInstance::OnCinematicStateExited()
{
	// Montage 정지도 KausSequenceSubsystem::RestoreGameplayState에서
	// 게임 스레드에서 직접 수행한다.
	ActiveSkillActionTag = FGameplayTag::EmptyTag;

	UE_LOG(LogKausAnimInstance, Log,
		TEXT("[%s] CinematicState Exited."),
		*GetNameSafe(GetOwningActor()));
}

void UKausAnimInstance::OnGameplayStateEntered()
{
	UE_LOG(LogKausAnimInstance, Log,
		TEXT("[%s] GameplayState Entered."),
		*GetNameSafe(GetOwningActor()));
}
