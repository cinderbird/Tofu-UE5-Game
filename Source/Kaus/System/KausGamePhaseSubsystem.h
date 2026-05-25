#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "KausGamePhaseSubsystem.generated.h"

/**
 * 페이즈가 변경될 때 호출될 다이내믹 멀티캐스트 델리게이트
 * 블루프린트 및 다른 C++ 클래스(Director 등)에서 리슨(Listen)할 수 있습니다.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKausPhaseChangedDelegate, const FGameplayTag&, NewPhase);

/**
 * UKausGamePhaseSubsystem
 * * 현재 월드(레벨)의 게임 진행 상태(Phase)를 관리하는 서브시스템입니다.
 * 하드코딩된 흐름 제어를 피하고, Tag 기반의 이벤트 주도형(Event-Driven) 전이를 제공합니다.
 */
UCLASS()
class KAUS_API UKausGamePhaseSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UKausGamePhaseSubsystem();

	//~USubsystem 인터페이스
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	//~End of USubsystem 인터페이스

	/**
	 * 새로운 페이즈로 전환을 요청합니다.
	 * @param NewPhase 전환할 새로운 페이즈 태그 (예: Phase.NewGame.Intro.PrologueCine.Start)
	 */
	UFUNCTION(BlueprintCallable, Category = "Kaus|Phase")
	void StartPhase(FGameplayTag NewPhase);

	/** 현재 활성화된 페이즈 태그를 반환합니다. */
	UFUNCTION(BlueprintPure, Category = "Kaus|Phase")
	FGameplayTag GetCurrentPhase() const { return CurrentPhaseTag; }

	/** 특정 페이즈가 현재 활성화되어 있는지(또는 하위 태그인지) 검사합니다. */
	UFUNCTION(BlueprintPure, Category = "Kaus|Phase")
	bool IsPhaseActive(FGameplayTag PhaseTagToCheck) const;

public:
	/** 페이즈가 변경되었을 때 방송(Broadcast)되는 델리게이트 */
	UPROPERTY(BlueprintAssignable, Category = "Kaus|Phase")
	FKausPhaseChangedDelegate OnPhaseChanged;

protected:
	/** 현재 진행 중인 페이즈를 나타내는 태그 */
	UPROPERTY(Transient)
	FGameplayTag CurrentPhaseTag;

	/** 이전 페이즈 태그 (디버깅 및 롤백용 캐싱) */
	UPROPERTY(Transient)
	FGameplayTag PreviousPhaseTag;
};