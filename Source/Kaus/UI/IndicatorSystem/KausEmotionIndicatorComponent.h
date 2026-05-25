#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "KausEmotionIndicatorComponent.generated.h"

class UIndicatorDescriptor;
class UKausEmotionIndicatorDataAsset;
class USceneComponent;

/**
 * 캐릭터에 부착하여 여러 감정 indicator를 본 소켓 위에 동시에 표시한다.
 * - 표시할 감정/위젯/소켓 매핑은 EmotionDataAsset 으로 정의
 * - ShowEmotion / HideEmotion / HideAllEmotions 로 on/off 제어
 */
UCLASS(ClassGroup = (Kaus), meta = (BlueprintSpawnableComponent))
class KAUS_API UKausEmotionIndicatorComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UKausEmotionIndicatorComponent();

    /** 감정 태그에 해당하는 indicator를 표시. 이미 표시 중이면 visible만 다시 켠다. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Emotion")
    void ShowEmotion(FGameplayTag EmotionTag);

    /** 특정 감정만 숨김 (디스크립터는 풀에 남김 - 빠른 재표시 위해). */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Emotion")
    void HideEmotion(FGameplayTag EmotionTag);

    /** 모든 감정 indicator 제거 (매니저에서 unregister). */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Emotion")
    void HideAllEmotions();

    /** 부착할 SkeletalMesh를 명시 지정. 미설정 시 Owner 의 ACharacter::GetMesh() 사용. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Emotion")
    void SetTargetMeshComponent(USceneComponent* InMesh) { TargetMeshOverride = InMesh; }

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    /** 감정 정의 DataAsset */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Emotion")
    TObjectPtr<UKausEmotionIndicatorDataAsset> EmotionDataAsset;

    /** 명시 지정된 부착 대상 (없으면 Owner Character의 Mesh 사용) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Emotion")
    TObjectPtr<USceneComponent> TargetMeshOverride = nullptr;

private:
    USceneComponent* ResolveTargetMesh() const;

    /** 활성 디스크립터 캐시 (감정태그 → 디스크립터). 매니저에 등록된 상태로 보관. */
    UPROPERTY(Transient)
    TMap<FGameplayTag, TObjectPtr<UIndicatorDescriptor>> ActiveDescriptors;
};
