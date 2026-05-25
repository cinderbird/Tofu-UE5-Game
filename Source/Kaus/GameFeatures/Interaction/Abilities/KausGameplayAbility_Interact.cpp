#include "KausGameplayAbility_Interact.h"
#include "AbilitySystemComponent.h"
#include "Interaction/IInteractableTarget.h"
#include "Interaction/InteractionStatics.h"
#include "Interaction/Tasks/AbilityTask_GrantNearbyInteraction.h"
#include "NativeGameplayTags.h"
#include "Player/KausPlayerController.h"
#include "UI/IndicatorSystem/IndicatorDescriptor.h"
#include "UI/IndicatorSystem/KausIndicatorManagerComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "Node/KausNodeComponent.h" 
#include "KausGameplayTags.h"


class UUserWidget;


UE_DEFINE_GAMEPLAY_TAG(TAG_INTERACTION_DURATION_MESSAGE, "Ability.Interaction.Duration.Message");

UKausGameplayAbility_Interact::UKausGameplayAbility_Interact(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ActivationPolicy = EKausAbilityActivationPolicy::OnSpawn;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}

void UKausGameplayAbility_Interact::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	UAbilitySystemComponent* AbilitySystem = GetAbilitySystemComponentFromActorInfo();
	if (AbilitySystem && AbilitySystem->GetOwnerRole() == ROLE_Authority)
	{
		UAbilityTask_GrantNearbyInteraction* Task = UAbilityTask_GrantNearbyInteraction::GrantAbilitiesForNearbyInteractors(this, InteractionScanRange, InteractionScanRate);
		Task->ReadyForActivation();
	}
}

void UKausGameplayAbility_Interact::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
    ClearAllIndicators();
    ClearAllOutlines();
    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UKausGameplayAbility_Interact::UpdateInteractions(const TArray<FInteractionOption>& InteractiveOptions)
{
	CurrentOptions = InteractiveOptions;

	if (CurrentOptions.Num() > 0)
	{
		SelectedInteractionIndex = FMath::Clamp(SelectedInteractionIndex, 0, CurrentOptions.Num() - 1);
	}
	else
	{
		SelectedInteractionIndex = 0;
	}

	BroadcastTargetSelectionMessage();
}

void UKausGameplayAbility_Interact::CycleInteractionTarget(bool bNext)
{
	if (CurrentOptions.Num() <= 1) return; 

	if (bNext)
		SelectedInteractionIndex = (SelectedInteractionIndex + 1) % CurrentOptions.Num();
	else
		SelectedInteractionIndex = (SelectedInteractionIndex - 1 + CurrentOptions.Num()) % CurrentOptions.Num();

	BroadcastTargetSelectionMessage();
}

void UKausGameplayAbility_Interact::SetInteractionTargetIndex(int32 NewIndex)
{
	if (CurrentOptions.IsValidIndex(NewIndex))
	{
		SelectedInteractionIndex = NewIndex;
		BroadcastTargetSelectionMessage();
	}
}

void UKausGameplayAbility_Interact::TriggerInteraction()
{
	if (CurrentOptions.Num() == 0 || !CurrentOptions.IsValidIndex(SelectedInteractionIndex))
	{
		SelectedInteractionIndex = 0;
		return;
	}

	UAbilitySystemComponent* AbilitySystem = GetAbilitySystemComponentFromActorInfo();
	if (AbilitySystem)
	{
		const FInteractionOption& InteractionOption = CurrentOptions[SelectedInteractionIndex];

		AActor* Instigator = GetAvatarActorFromActorInfo();
		AActor* InteractableTargetActor = UInteractionStatics::GetActorFromInteractableTarget(InteractionOption.InteractableTarget);

        int32 LocalIndex = 0;
        for (int32 i = 0; i < SelectedInteractionIndex; ++i)
        {
            if (CurrentOptions[i].InteractableTarget == InteractionOption.InteractableTarget)
            {
                LocalIndex++;
            }
        }

		FGameplayEventData Payload;
		Payload.EventTag = KausGameplayTags::TAG_Ability_Interaction_Activate;
		Payload.Instigator = Instigator;
		Payload.Target = InteractableTargetActor;
        
        // [핵심 트릭] 수치형 변수인 EventMagnitude를 활용해 몇 번째 옵션이 눌렸는지 NodeComponent에게 알려줌!
        Payload.EventMagnitude = static_cast<float>(LocalIndex); 

		InteractionOption.InteractableTarget->CustomizeInteractionEventData(KausGameplayTags::TAG_Ability_Interaction_Activate, Payload);

		AActor* TargetActor = const_cast<AActor*>(ToRawPtr(Payload.Target));

		FGameplayAbilityActorInfo ActorInfo;
		ActorInfo.InitFromActor(InteractableTargetActor, TargetActor, InteractionOption.TargetAbilitySystem);

		if (InteractionOption.TargetInteractionAbilityHandle.IsValid())
		{
			InteractionOption.TargetAbilitySystem->TriggerAbilityFromGameplayEvent(
				InteractionOption.TargetInteractionAbilityHandle,
				&ActorInfo,
				KausGameplayTags::TAG_Ability_Interaction_Activate,
				&Payload,
				*InteractionOption.TargetAbilitySystem
			);
		}
		else
		{
			InteractionOption.TargetAbilitySystem->HandleGameplayEvent(KausGameplayTags::TAG_Ability_Interaction_Activate, &Payload);
		}
	}
}

void UKausGameplayAbility_Interact::BroadcastTargetSelectionMessage()
{
    FKausInteractionUIMessage Message;

    // 대상이 없으면 빈 목록으로 방송 → Widget이 ListView를 비운다
    if (!CurrentOptions.IsEmpty())
    {
        Message.SelectedGlobalIndex = SelectedInteractionIndex;

        // CurrentOptions의 모든 대상을 순회하여 EntryData 생성
        // 동일 Actor가 여러 Option을 가질 수 있으므로 Actor 단위로 병합한다
        TMap<AActor*, UKausInteractionEntryData*> ActorToEntry;

        for (int32 i = 0; i < CurrentOptions.Num(); ++i)
        {
            const FInteractionOption& Option = CurrentOptions[i];
            AActor* TargetActor = UInteractionStatics::GetActorFromInteractableTarget(Option.InteractableTarget);
            if (!TargetActor) continue;

            // 동일 Actor에 대한 Entry가 이미 있으면 재사용
            UKausInteractionEntryData* Entry = nullptr;
            if (UKausInteractionEntryData** Found = ActorToEntry.Find(TargetActor))
            {
                Entry = *Found;
            }
            else
            {
                Entry = NewObject<UKausInteractionEntryData>(this);
                Entry->TargetActor    = TargetActor;
                Entry->GlobalIndex    = i;
                Entry->bIsSelected    = (i == SelectedInteractionIndex);
                ActorToEntry.Add(TargetActor, Entry);
                Message.AllEntries.Add(Entry);
            }

            // 해당 대상의 NodeComponent에서 유효 상호작용 목록 수집
            UKausNodeComponent* NodeComp = nullptr;
            UObject* TargetObject = Option.InteractableTarget.GetObject();

            NodeComp = Cast<UKausNodeComponent>(TargetObject);
            if (!NodeComp)
            {
                if (AActor* Actor = Cast<AActor>(TargetObject))
                {
                    NodeComp = Actor->FindComponentByClass<UKausNodeComponent>();
                }
            }

            if (NodeComp && NodeComp->NodeDataAsset)
            {
                for (const FKausNodeInteraction& Interaction : NodeComp->NodeDataAsset->Interactions)
                {
                    if (!Interaction.RequiredStateTag.IsValid() ||
                        Interaction.RequiredStateTag == NodeComp->GetCurrentStateTag())
                    {
                        Entry->AvailableInteractions.Add(Interaction);
                    }
                }

                
            }
        }
    }

    RefreshOutlines();

    if (UGameplayMessageSubsystem::HasInstance(this))
    {
        UGameplayMessageSubsystem::Get(this).BroadcastMessage(
            FGameplayTag::RequestGameplayTag("UI.Interaction.Event.SelectionChanged"), Message);
    }
}

void UKausGameplayAbility_Interact::RefreshIndicators()
{
    APlayerController* PC = GetActorInfo().PlayerController.Get();
    if (!PC) return;

    UKausIndicatorManagerComponent* IndicatorManager = UKausIndicatorManagerComponent::GetComponent(PC);
    if (!IndicatorManager) return;

    // 1단계: 현재 유효한 Actor 집합 수집
    TSet<AActor*> ValidActors;
    for (const FInteractionOption& Option : CurrentOptions)
    {
        if (AActor* TargetActor = UInteractionStatics::GetActorFromInteractableTarget(Option.InteractableTarget))
        {
            ValidActors.Add(TargetActor);
        }
    }

    // 2단계: 범위를 벗어난 Actor의 Indicator 제거
    TArray<AActor*> ToRemove;
    for (auto& Pair : IndicatorMap)
    {
        if (!ValidActors.Contains(Pair.Key))
        {
            ToRemove.Add(Pair.Key);
        }
    }
    for (AActor* RemovedActor : ToRemove)
    {
        if (TObjectPtr<UIndicatorDescriptor> Indicator = IndicatorMap.FindRef(RemovedActor))
        {
            IndicatorManager->RemoveIndicator(Indicator);
        }
        IndicatorMap.Remove(RemovedActor);
    }

    // 3단계: 선택된 Actor 파악
    AActor* SelectedActor = nullptr;
    if (CurrentOptions.IsValidIndex(SelectedInteractionIndex))
    {
        SelectedActor = UInteractionStatics::GetActorFromInteractableTarget(
            CurrentOptions[SelectedInteractionIndex].InteractableTarget);
    }

    // 4단계: 신규 Actor는 Indicator 추가, 기존 Actor는 선택 상태만 갱신
    for (const FInteractionOption& Option : CurrentOptions)
    {
        AActor* TargetActor = UInteractionStatics::GetActorFromInteractableTarget(Option.InteractableTarget);
        if (!TargetActor) continue;

        const bool bIsSelected = (TargetActor == SelectedActor);
        const TSoftClassPtr<UUserWidget> DesiredClass = (bIsSelected && !SelectedIndicatorWidgetClass.IsNull())
            ? SelectedIndicatorWidgetClass
            : InteractionIndicatorWidgetClass;

        if (auto* ExistingIndicator = IndicatorMap.Find(TargetActor))
        {
            // 이미 존재 → 위젯 클래스만 교체
            (*ExistingIndicator)->SetIndicatorClass(DesiredClass);
        }
        else
        {
            // 신규 → Indicator 생성 후 Map에 등록
            UIndicatorDescriptor* NewIndicator = NewObject<UIndicatorDescriptor>(IndicatorManager);
            NewIndicator->SetIndicatorClass(DesiredClass);
            NewIndicator->SetSceneComponent(TargetActor->GetRootComponent());
            NewIndicator->SetAutoRemoveWhenIndicatorComponentIsNull(true);

            IndicatorManager->AddIndicator(NewIndicator);
            IndicatorMap.Add(TargetActor, NewIndicator);
        }
    }
}

void UKausGameplayAbility_Interact::ClearAllIndicators()
{
    APlayerController* PC = GetActorInfo().PlayerController.Get();
    if (!PC) return;

    UKausIndicatorManagerComponent* IndicatorManager = UKausIndicatorManagerComponent::GetComponent(PC);
    if (!IndicatorManager) return;

    for (auto& Pair : IndicatorMap)
    {
        if (Pair.Value)
        {
            IndicatorManager->RemoveIndicator(Pair.Value);
        }
    }
    IndicatorMap.Empty();
}

void UKausGameplayAbility_Interact::RefreshOutlines()
{
    // 1) 현재 선택된 Actor 식별
    AActor* SelectedActor = nullptr;
    if (CurrentOptions.IsValidIndex(SelectedInteractionIndex))
    {
        SelectedActor = UInteractionStatics::GetActorFromInteractableTarget(
            CurrentOptions[SelectedInteractionIndex].InteractableTarget);
    }

    // 2) 이전에 outlined되어 있던 Actor 중 더 이상 선택이 아닌 Actor는 OFF
    TArray<TWeakObjectPtr<AActor>> ToTurnOff;
    for (const TWeakObjectPtr<AActor>& WeakActor : OutlinedActors)
    {
        AActor* Actor = WeakActor.Get();
        if (!Actor || Actor != SelectedActor)
        {
            ToTurnOff.Add(WeakActor);
        }
    }
    for (const TWeakObjectPtr<AActor>& WeakActor : ToTurnOff)
    {
        if (AActor* Actor = WeakActor.Get())
        {
            if (UKausNodeComponent* NodeComp = UKausNodeComponent::FindNodeComponent(Actor))
            {
                NodeComp->SetOutlineEnabled(false);
            }
        }
        OutlinedActors.Remove(WeakActor);
    }

    // 3) 새로 선택된 Actor의 Outline ON (NodeComponent의 State 판정에 따라 실제 적용 여부 결정됨)
    if (SelectedActor)
    {
        if (UKausNodeComponent* NodeComp = UKausNodeComponent::FindNodeComponent(SelectedActor))
        {
            NodeComp->SetOutlineEnabled(true);
            OutlinedActors.Add(SelectedActor);
        }
    }
}

void UKausGameplayAbility_Interact::ClearAllOutlines()
{
    for (const TWeakObjectPtr<AActor>& WeakActor : OutlinedActors)
    {
        if (AActor* Actor = WeakActor.Get())
        {
            if (UKausNodeComponent* NodeComp = UKausNodeComponent::FindNodeComponent(Actor))
            {
                NodeComp->SetOutlineEnabled(false);
            }
        }
    }
    OutlinedActors.Empty();
}
