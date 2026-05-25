#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "KausUISubsystem.generated.h"

class UPrimaryGameLayout;
class UCommonActivatableWidget;

USTRUCT()
struct FKausUIGroupEntry
{
	GENERATED_BODY()

	UPROPERTY()
	FGameplayTag GroupTag;

	UPROPERTY()
	FGameplayTag LayerTag;

	UPROPERTY()
	TSubclassOf<UCommonActivatableWidget> WidgetClass;

	UPROPERTY(Transient)
	TWeakObjectPtr<UCommonActivatableWidget> CachedInstance;
};

USTRUCT()
struct FKausManagedWidgetEntry
{
	GENERATED_BODY()

	UPROPERTY()
	FGameplayTag LayerTag;

	UPROPERTY()
	TSubclassOf<UCommonActivatableWidget> WidgetClass;

	UPROPERTY(Transient)
	TWeakObjectPtr<UCommonActivatableWidget> WidgetInstance;
};

UCLASS()
class KAUS_API UKausUISubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UKausUISubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UFUNCTION(BlueprintCallable, Category = "Kaus|UI|Group")
	void RegisterToGroup(FGameplayTag GroupTag, FGameplayTag LayerTag, TSubclassOf<UCommonActivatableWidget> WidgetClass);

	UFUNCTION(BlueprintCallable, Category = "Kaus|UI|Group")
	void UnregisterFromGroup(FGameplayTag GroupTag, TSubclassOf<UCommonActivatableWidget> WidgetClass);

	UFUNCTION(BlueprintCallable, Category = "Kaus|UI|Group")
	void ShowGroup(FGameplayTag GroupTag);

	UFUNCTION(BlueprintCallable, Category = "Kaus|UI|Group")
	void HideGroup(FGameplayTag GroupTag);

	UFUNCTION(BlueprintCallable, Category = "Kaus|UI|Group")
	void ClearGroup(FGameplayTag GroupTag);

	UFUNCTION(BlueprintPure, Category = "Kaus|UI|Group")
	bool IsGroupVisible(FGameplayTag GroupTag) const;

	UFUNCTION(BlueprintCallable, Category = "Kaus|UI|Widget", meta = (DeterminesOutputType = "WidgetClass"))
	UCommonActivatableWidget* PushWidget(FGameplayTag UILayerTag, TSubclassOf<UCommonActivatableWidget> WidgetClass);

	UFUNCTION(BlueprintCallable, Category = "Kaus|UI|Widget")
	void RemoveWidget(TSubclassOf<UCommonActivatableWidget> WidgetClass);

	UFUNCTION(BlueprintCallable, Category = "Kaus|UI|Widget")
	void RemoveWidgetInstance(UCommonActivatableWidget* WidgetInstance);

	UFUNCTION(BlueprintCallable, Category = "Kaus|UI")
	void ClearAll();

	UFUNCTION(BlueprintPure, Category = "Kaus|UI")
	UCommonActivatableWidget* FindActiveWidget(TSubclassOf<UCommonActivatableWidget> WidgetClass) const;

	UFUNCTION(BlueprintPure, Category = "Kaus|UI")
	bool IsWidgetActive(TSubclassOf<UCommonActivatableWidget> WidgetClass) const;

private:
	UPrimaryGameLayout* GetPrimaryLayout() const;

	/** 그룹 관리 항목 (캐싱된 인스턴스 포함) */
	UPROPERTY(Transient)
	TArray<FKausUIGroupEntry> GroupEntries;

	/** 현재 표시 중인 그룹 태그 집합 */
	UPROPERTY(Transient)
	FGameplayTagContainer VisibleGroups;

	/** 개별 Push로 관리되는 일회성 위젯 */
	UPROPERTY(Transient)
	TArray<FKausManagedWidgetEntry> ManagedWidgets;

	/** 무효화된 ManagedWidgets 항목 정리 */
	void CleanupStaleManagedEntries();
};
