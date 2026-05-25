#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "WorldPartition/DataLayer/DataLayerAsset.h"
#include "LevelSequence.h"
#include "KausPhaseDirector.generated.h"

class ULevelSequencePlayer;
class ALevelSequenceActor;

USTRUCT(BlueprintType)
struct FKausPhaseActionData
{
    GENERATED_BODY()

public:
    // 1. 재생할 시퀀서 에셋 (없으면 재생 안 함)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cinematic")
    TObjectPtr<ULevelSequence> SequenceToPlay;

    // 2. 시퀀서가 끝난 뒤 자동으로 넘어갈 다음 페이즈 (선택 사항)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cinematic")
    FGameplayTag NextPhaseOnSequenceEnd;

    // 3. 이 페이즈에 켜야 할 Data Layer들 (예: 몬스터 스폰 구역, 장애물)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DataLayer")
    TArray<TObjectPtr<UDataLayerAsset>> DataLayersToActivate;

    // 4. 이 페이즈에 꺼야 할 Data Layer들
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DataLayer")
    TArray<TObjectPtr<UDataLayerAsset>> DataLayersToDeactivate;
};

UCLASS()
class KAUS_API AKausPhaseDirector : public AActor
{
    GENERATED_BODY()

public:
    AKausPhaseDirector();

protected:
    virtual void BeginPlay() override;

    // 서브시스템에서 페이즈가 변경되었을 때 호출될 함수
    UFUNCTION()
    void OnPhaseChanged(const FGameplayTag& NewPhase);

    // 시퀀서 재생 종료 시 호출될 콜백
    UFUNCTION()
    void OnSequenceFinished();

protected:
    // 에디터에서 세팅할 페이즈별 액션 매핑 딕셔너리
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Phase")
    TMap<FGameplayTag, FKausPhaseActionData> PhaseActionMap;

private:
    // 현재 재생 중인 시퀀서 플레이어 추적용
    UPROPERTY()
    TObjectPtr<ULevelSequencePlayer> CurrentSequencePlayer;

    // 시퀀서 종료 후 넘어가야 할 캐싱된 다음 페이즈 태그
    FGameplayTag CachedNextPhaseTag;
};


//조금 더 정교하게 만들면
//시퀀서를 실행할 것인가?
//실행할 것이면 이에 따라 시퀀서 진입 / 해체 Tag를 Check하고
