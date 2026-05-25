#include "KausIndicatorComponent.h"
#include "UI/IndicatorSystem/IndicatorLibrary.h"
#include "UI/IndicatorSystem/KausIndicatorManagerComponent.h"
#include "Kismet/GameplayStatics.h"

UKausIndicatorComponent::UKausIndicatorComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UKausIndicatorComponent::BeginPlay()
{
    Super::BeginPlay();

    if (bAutoActivate)
    {
        ActivateIndicator();
    }
}

void UKausIndicatorComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    DeactivateIndicator();
    
    Super::EndPlay(EndPlayReason);
}

void UKausIndicatorComponent::ActivateIndicator()
{
    if (ActiveIndicator != nullptr)
    {
        return;
    }

    if (IndicatorWidgetClass.IsNull())
    {
        UE_LOG(LogTemp, Warning, TEXT("UKausIndicatorSourceComponent: IndicatorWidgetClass is null on %s"), *GetOwner()->GetName());
        return;
    }

    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (!PC) return;

    UKausIndicatorManagerComponent* Manager = UIndicatorLibrary::GetIndicatorManagerComponent(PC);
    if (!Manager) return;

    ActiveIndicator = NewObject<UIndicatorDescriptor>(this);
    ActiveIndicator->SetIndicatorClass(IndicatorWidgetClass);
    ActiveIndicator->SetSceneComponent(this); 
    ActiveIndicator->SetProjectionMode(ProjectionMode);
    ActiveIndicator->SetHAlign(HAlignment);
    ActiveIndicator->SetVAlign(VAlignment);
    ActiveIndicator->SetClampToScreen(bClampToScreen);
    ActiveIndicator->SetShowClampToScreenArrow(bShowClampToScreenArrow);
    ActiveIndicator->SetWorldPositionOffset(WorldPositionOffset);
    ActiveIndicator->SetScreenSpaceOffset(ScreenSpaceOffset);
    ActiveIndicator->SetBoundingBoxAnchor(BoundingBoxAnchor);
    ActiveIndicator->SetPriority(Priority);
	ActiveIndicator->SetDataObject(this); 

    ActiveIndicator->SetAutoRemoveWhenIndicatorComponentIsNull(true);

    Manager->AddIndicator(ActiveIndicator);
}

void UKausIndicatorComponent::DeactivateIndicator()
{
    if (ActiveIndicator != nullptr)
    {
        ActiveIndicator->UnregisterIndicator();
        ActiveIndicator = nullptr;
    }
}