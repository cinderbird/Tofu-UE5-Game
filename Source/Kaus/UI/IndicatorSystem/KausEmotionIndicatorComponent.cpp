#include "KausEmotionIndicatorComponent.h"

#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "UI/IndicatorSystem/IndicatorDescriptor.h"
#include "UI/IndicatorSystem/IndicatorLibrary.h"
#include "UI/IndicatorSystem/KausEmotionIndicatorDataAsset.h"
#include "UI/IndicatorSystem/KausIndicatorManagerComponent.h"

UKausEmotionIndicatorComponent::UKausEmotionIndicatorComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UKausEmotionIndicatorComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UKausEmotionIndicatorComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    HideAllEmotions();
    Super::EndPlay(EndPlayReason);
}

USceneComponent* UKausEmotionIndicatorComponent::ResolveTargetMesh() const
{
    if (TargetMeshOverride) return TargetMeshOverride;
    if (const ACharacter* OwnerChar = Cast<ACharacter>(GetOwner()))
    {
        return OwnerChar->GetMesh();
    }
    return GetOwner() ? GetOwner()->GetRootComponent() : nullptr;
}

void UKausEmotionIndicatorComponent::ShowEmotion(FGameplayTag EmotionTag)
{
    if (!EmotionTag.IsValid() || !EmotionDataAsset) return;

    // 이미 표시 중이면 visible만 켜고 종료
    if (TObjectPtr<UIndicatorDescriptor>* Existing = ActiveDescriptors.Find(EmotionTag))
    {
        if (*Existing)
        {
            (*Existing)->SetDesiredVisibility(true);
        }
        return;
    }

    const FKausEmotionIndicatorEntry* Entry = EmotionDataAsset->FindEntry(EmotionTag);
    if (!Entry)
    {
        UE_LOG(LogTemp, Warning, TEXT("[EmotionIndicator] DataAsset에 태그 %s 가 없음"),
            *EmotionTag.ToString());
        return;
    }
    if (Entry->WidgetClass.IsNull())
    {
        UE_LOG(LogTemp, Warning, TEXT("[EmotionIndicator] %s 의 WidgetClass 가 null"),
            *EmotionTag.ToString());
        return;
    }

    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (!PC) return;
    UKausIndicatorManagerComponent* Manager = UIndicatorLibrary::GetIndicatorManagerComponent(PC);
    if (!Manager) return;

    USceneComponent* TargetMesh = ResolveTargetMesh();
    if (!TargetMesh) return;

    UIndicatorDescriptor* Desc = NewObject<UIndicatorDescriptor>(this);
    Desc->SetIndicatorClass(Entry->WidgetClass);
    Desc->SetSceneComponent(TargetMesh);
    Desc->SetComponentSocketName(Entry->SocketName);
    Desc->SetProjectionMode(Entry->ProjectionMode);
    Desc->SetHAlign(Entry->HAlignment);
    Desc->SetVAlign(Entry->VAlignment);
    Desc->SetClampToScreen(Entry->bClampToScreen);
    Desc->SetWorldPositionOffset(Entry->WorldPositionOffset);
    Desc->SetScreenSpaceOffset(Entry->ScreenSpaceOffset);
    Desc->SetPriority(Entry->Priority);
    Desc->SetDataObject(this);
    // SceneComponent(=메시)가 파괴되면 자동 정리
    Desc->SetAutoRemoveWhenIndicatorComponentIsNull(true);
    Desc->SetDesiredVisibility(true);

    Manager->AddIndicator(Desc);
    ActiveDescriptors.Add(EmotionTag, Desc);
}

void UKausEmotionIndicatorComponent::HideEmotion(FGameplayTag EmotionTag)
{
    if (TObjectPtr<UIndicatorDescriptor>* Existing = ActiveDescriptors.Find(EmotionTag))
    {
        if (*Existing)
        {
            // 완전 제거가 아니라 가시성만 끔 → 재표시 시 재생성 비용 없음
            (*Existing)->SetDesiredVisibility(false);
        }
    }
}

void UKausEmotionIndicatorComponent::HideAllEmotions()
{
    for (auto& Pair : ActiveDescriptors)
    {
        if (Pair.Value)
        {
            Pair.Value->UnregisterIndicator();
        }
    }
    ActiveDescriptors.Empty();
}
