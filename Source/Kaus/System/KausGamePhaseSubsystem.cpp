#include "KausGamePhaseSubsystem.h"
#include "Engine/World.h"

// 디버깅용 로그 카테고리 (필요시 KausLogChannels.h에 정의된 로그로 교체하세요)
DEFINE_LOG_CATEGORY_STATIC(LogKausPhase, Log, All);

UKausGamePhaseSubsystem::UKausGamePhaseSubsystem()
{
	CurrentPhaseTag = FGameplayTag::EmptyTag;
	PreviousPhaseTag = FGameplayTag::EmptyTag;
}

void UKausGamePhaseSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UE_LOG(LogKausPhase, Log, TEXT("KausGamePhaseSubsystem Initialized for World: %s"), 
		GetWorld() ? *GetWorld()->GetName() : TEXT("Unknown"));
}

void UKausGamePhaseSubsystem::Deinitialize()
{
	// 맵이 파괴되거나 전환될 때 남아있는 리스너들을 안전하게 정리하여 메모리 누수를 방지합니다.
	OnPhaseChanged.Clear();
	
	CurrentPhaseTag = FGameplayTag::EmptyTag;
	PreviousPhaseTag = FGameplayTag::EmptyTag;

	UE_LOG(LogKausPhase, Log, TEXT("KausGamePhaseSubsystem Deinitialized."));

	Super::Deinitialize();
}

void UKausGamePhaseSubsystem::StartPhase(FGameplayTag NewPhase)
{
	// 유효하지 않은 태그가 들어오면 무시
	if (!NewPhase.IsValid())
	{
		UE_LOG(LogKausPhase, Warning, TEXT("StartPhase called with an Invalid Tag!"));
		return;
	}

	// 이미 해당 페이즈에 진입해 있다면 중복 호출 방지
	if (CurrentPhaseTag == NewPhase)
	{
		UE_LOG(LogKausPhase, Verbose, TEXT("StartPhase: Already in Phase [%s]. Ignoring request."), *NewPhase.ToString());
		return;
	}

	PreviousPhaseTag = CurrentPhaseTag;
	CurrentPhaseTag = NewPhase;

	UE_LOG(LogKausPhase, Log, TEXT("Phase Transition: [%s] -> [%s]"), 
		PreviousPhaseTag.IsValid() ? *PreviousPhaseTag.ToString() : TEXT("None"), 
		*CurrentPhaseTag.ToString());

	// 델리게이트 브로드캐스트 (KausPhaseDirector 및 기타 UI, 스포너 등이 반응함)
	OnPhaseChanged.Broadcast(CurrentPhaseTag);
}

bool UKausGamePhaseSubsystem::IsPhaseActive(FGameplayTag PhaseTagToCheck) const
{
	if (!CurrentPhaseTag.IsValid() || !PhaseTagToCheck.IsValid())
	{
		return false;
	}

	// MatchesTag를 사용하면 계층적 검사가 가능합니다.
	// 예: CurrentPhase가 "Phase.NewGame.Tutorial.Start"일 때,
	// "Phase.NewGame.Tutorial"로 검사해도 true를 반환합니다.
	return CurrentPhaseTag.MatchesTag(PhaseTagToCheck);
}