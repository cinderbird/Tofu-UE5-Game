#include "UI/KausUISubsystem.h"
#include "PrimaryGameLayout.h"
#include "CommonActivatableWidget.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausUI, Log, All);

UKausUISubsystem::UKausUISubsystem()
{
}

void UKausUISubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogKausUI, Log, TEXT("KausUISubsystem Initialized."));
}

void UKausUISubsystem::Deinitialize()
{
	ClearAll();
	UE_LOG(LogKausUI, Log, TEXT("KausUISubsystem Deinitialized."));
	Super::Deinitialize();
}

UPrimaryGameLayout* UKausUISubsystem::GetPrimaryLayout() const
{
	return UPrimaryGameLayout::GetPrimaryGameLayoutForPrimaryPlayer(GetWorld());
}

void UKausUISubsystem::CleanupStaleManagedEntries()
{
	ManagedWidgets.RemoveAll([](const FKausManagedWidgetEntry& Entry)
	{
		return !Entry.WidgetInstance.IsValid();
	});
}

void UKausUISubsystem::RegisterToGroup(FGameplayTag GroupTag, FGameplayTag LayerTag, TSubclassOf<UCommonActivatableWidget> WidgetClass)
{
	if (!GroupTag.IsValid() || !LayerTag.IsValid() || !WidgetClass)
	{
		UE_LOG(LogKausUI, Warning, TEXT("RegisterToGroup: Invalid parameters."));
		return;
	}

	// 중복 등록 방지
	for (const auto& Entry : GroupEntries)
	{
		if (Entry.GroupTag == GroupTag && Entry.WidgetClass == WidgetClass)
			return;
	}

	FKausUIGroupEntry Entry;
	Entry.GroupTag = GroupTag;
	Entry.LayerTag = LayerTag;
	Entry.WidgetClass = WidgetClass;
	// CachedInstance는 ShowGroup 시 최초 생성
	GroupEntries.Add(Entry);

	UE_LOG(LogKausUI, Log, TEXT("RegisterToGroup: [%s] → Group [%s] Layer [%s]"), *WidgetClass->GetName(), *GroupTag.ToString(), *LayerTag.ToString());
}

void UKausUISubsystem::UnregisterFromGroup(FGameplayTag GroupTag, TSubclassOf<UCommonActivatableWidget> WidgetClass)
{
	if (!WidgetClass) return;

	GroupEntries.RemoveAll([&](FKausUIGroupEntry& Entry)
	{
		if (Entry.GroupTag == GroupTag && Entry.WidgetClass == WidgetClass)
		{
			// 캐싱된 인스턴스가 있으면 정리
			if (UCommonActivatableWidget* Widget = Entry.CachedInstance.Get())
			{
				Widget->DeactivateWidget();
			}
			return true;
		}
		return false;
	});
}

void UKausUISubsystem::ShowGroup(FGameplayTag GroupTag)
{
	if (!GroupTag.IsValid()) return;

	if (VisibleGroups.HasTagExact(GroupTag))
	{
		UE_LOG(LogKausUI, Verbose, TEXT("ShowGroup: [%s] already visible."), *GroupTag.ToString());
		return;
	}

	UPrimaryGameLayout* Layout = GetPrimaryLayout();
	int32 Count = 0;

	for (auto& Entry : GroupEntries)
	{
		if (Entry.GroupTag != GroupTag) continue;

		UCommonActivatableWidget* Widget = Entry.CachedInstance.Get();

		if (!Widget)
		{
			// 캐싱된 인스턴스가 없거나 파괴됨 → 새로 생성
			if (Layout)
			{
				Widget = Layout->PushWidgetToLayerStack<UCommonActivatableWidget>(
					Entry.LayerTag, Entry.WidgetClass);
				Entry.CachedInstance = Widget;
			}
		}

		if (Widget)
		{
			Widget->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			
			if (!Widget->IsActivated())
			{
				Widget->ActivateWidget();
			}
			Count++;
		}
	}

	VisibleGroups.AddTag(GroupTag);

	UE_LOG(LogKausUI, Log, TEXT("ShowGroup: [%s] — %d widget(s) activated."), *GroupTag.ToString(), Count);
}

void UKausUISubsystem::HideGroup(FGameplayTag GroupTag)
{
	if (!GroupTag.IsValid() || !VisibleGroups.HasTagExact(GroupTag)) return;

	int32 Count = 0;
	for (auto& Entry : GroupEntries)
	{
		if (Entry.GroupTag != GroupTag) continue;

		if (UCommonActivatableWidget* Widget = Entry.CachedInstance.Get())
		{
			Widget->SetVisibility(ESlateVisibility::Collapsed);
			Count++;
		}
	}
	VisibleGroups.RemoveTag(GroupTag);
}

void UKausUISubsystem::ClearGroup(FGameplayTag GroupTag)
{
	if (!GroupTag.IsValid()) return;

	GroupEntries.RemoveAll([&](FKausUIGroupEntry& Entry)
	{
		if (Entry.GroupTag == GroupTag)
		{
			if (UCommonActivatableWidget* Widget = Entry.CachedInstance.Get())
			{
				Widget->DeactivateWidget();
			}
			return true;
		}
		return false;
	});

	VisibleGroups.RemoveTag(GroupTag);

	UE_LOG(LogKausUI, Log, TEXT("ClearGroup: [%s] — all entries removed."), *GroupTag.ToString());
}

bool UKausUISubsystem::IsGroupVisible(FGameplayTag GroupTag) const
{
	return VisibleGroups.HasTagExact(GroupTag);
}

UCommonActivatableWidget* UKausUISubsystem::PushWidget(FGameplayTag UILayerTag, TSubclassOf<UCommonActivatableWidget> WidgetClass)
{
	if (!WidgetClass)
	{
		UE_LOG(LogKausUI, Warning, TEXT("PushWidget: WidgetClass is null."));
		return nullptr;
	}

	UPrimaryGameLayout* Layout = GetPrimaryLayout();
	if (!Layout)
	{
		UE_LOG(LogKausUI, Warning, TEXT("PushWidget: PrimaryGameLayout not found."));
		return nullptr;
	}

	UCommonActivatableWidget* Widget = Layout->PushWidgetToLayerStack<UCommonActivatableWidget>(UILayerTag, WidgetClass);

	if (Widget)
	{
		FKausManagedWidgetEntry Entry;
		Entry.LayerTag = UILayerTag;
		Entry.WidgetClass = WidgetClass;
		Entry.WidgetInstance = Widget;
		ManagedWidgets.Add(Entry);

		UE_LOG(LogKausUI, Log, TEXT("PushWidget: [%s] → Layer [%s]"), *WidgetClass->GetName(), *UILayerTag.ToString()); 
	}

	return Widget;
}

void UKausUISubsystem::RemoveWidget(TSubclassOf<UCommonActivatableWidget> WidgetClass)
{
	if (!WidgetClass) return;

	CleanupStaleManagedEntries();

	// 가장 최근에 Push된 인스턴스를 역순 탐색
	for (int32 i = ManagedWidgets.Num() - 1; i >= 0; --i)
	{
		FKausManagedWidgetEntry& Entry = ManagedWidgets[i];
		if (Entry.WidgetClass == WidgetClass && Entry.WidgetInstance.IsValid())
		{
			// CommonUI의 자체 종료 사이클 실행
			// Outro 애니메이션이 재생된 후 위젯이 자연스럽게 제거된다.
			Entry.WidgetInstance->DeactivateWidget();

			ManagedWidgets.RemoveAt(i);

			UE_LOG(LogKausUI, Log, TEXT("RemoveWidget: [%s] — DeactivateWidget called."), *WidgetClass->GetName());
			return;
		}
	}
}

void UKausUISubsystem::RemoveWidgetInstance(UCommonActivatableWidget* WidgetInstance)
{
	if (!WidgetInstance) return;

	// CommonUI의 자체 종료 사이클 실행
	WidgetInstance->DeactivateWidget();

	ManagedWidgets.RemoveAll([WidgetInstance](const FKausManagedWidgetEntry& Entry)
	{
		return Entry.WidgetInstance.Get() == WidgetInstance;
	});
}

void UKausUISubsystem::ClearAll()
{
	// 그룹 위젯 전부 정리
	for (auto& Entry : GroupEntries)
	{
		if (UCommonActivatableWidget* Widget = Entry.CachedInstance.Get())
		{
			Widget->DeactivateWidget();
		}
	}
	GroupEntries.Empty();
	VisibleGroups.Reset();

	// 개별 위젯 전부 정리
	for (auto& Entry : ManagedWidgets)
	{
		if (Entry.WidgetInstance.IsValid())
		{
			Entry.WidgetInstance->DeactivateWidget();
		}
	}
	ManagedWidgets.Empty();

	UE_LOG(LogKausUI, Log, TEXT("ClearAll: All managed widgets cleared."));
}

UCommonActivatableWidget* UKausUISubsystem::FindActiveWidget(TSubclassOf<UCommonActivatableWidget> WidgetClass) const
{
	if (!WidgetClass) return nullptr;

	// 그룹에서 검색
	for (const auto& Entry : GroupEntries)
	{
		if (Entry.WidgetClass == WidgetClass && Entry.CachedInstance.IsValid())
		{
			return Entry.CachedInstance.Get();
		}
	}

	// 개별 관리에서 검색
	for (const auto& Entry : ManagedWidgets)
	{
		if (Entry.WidgetClass == WidgetClass && Entry.WidgetInstance.IsValid())
		{
			return Entry.WidgetInstance.Get();
		}
	}

	return nullptr;
}

bool UKausUISubsystem::IsWidgetActive(TSubclassOf<UCommonActivatableWidget> WidgetClass) const
{
	return FindActiveWidget(WidgetClass) != nullptr;
}
