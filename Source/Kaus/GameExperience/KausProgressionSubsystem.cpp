#include "KausProgressionSubsystem.h"
#include "Logs/KausLogChannels.h" // 커스텀 로그 (설정에 맞게 수정)

void UKausProgressionSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    
    // 초기 상태 비우기
    CurrentPhaseTag = FGameplayTag::EmptyTag;
    UnlockedPhases.Reset();
    
    UE_LOG(LogTemp, Log, TEXT("[KausProgression] 시스템이 성공적으로 초기화되었습니다."));
}

void UKausProgressionSubsystem::Deinitialize()
{
    Super::Deinitialize();
}

void UKausProgressionSubsystem::SetCurrentPhase(FGameplayTag NewPhase)
{
    // 이미 같은 페이즈라면 무시 (중복 호출 방지)
    if (CurrentPhaseTag == NewPhase)
    {
        return;
    }

    FGameplayTag OldPhase = CurrentPhaseTag;
    CurrentPhaseTag = NewPhase;
    
    // 도달한 페이즈 누적 기록 (업적이나 세이브 데이터 검증에 유용)
    UnlockedPhases.AddTag(NewPhase);

    // 로그 출력
    UE_LOG(LogTemp, Warning, TEXT("[KausProgression] 페이즈 전환: %s -> %s"), *OldPhase.ToString(), *NewPhase.ToString());

    // 맵에 존재하는 모든 리스너들에게 상태 변경을 방송(Broadcast)
    OnPhaseChanged.Broadcast(OldPhase, NewPhase);
}

bool UKausProgressionSubsystem::HasReachedPhase(FGameplayTag TargetPhase) const
{
    // 현재 상태이거나, 과거에 이미 언락한 상태라면 true 반환
    return UnlockedPhases.HasTag(TargetPhase);
}