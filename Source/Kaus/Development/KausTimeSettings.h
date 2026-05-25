// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "KausTimeSettings.generated.h"

class UKausCalendarSchedule;
class UKausDayCycleDefinition;

/**
 * Kaus 시간 시스템의 프로젝트 설정.
 *
 * Project Settings → Kaus → Time 섹션에 노출.
 * GameMode가 어떤 Schedule/Definition 자산을 사용할지 여기서 결정한다.
 *
 * 의도:
 *   - GameMode가 자산 경로를 직접 알지 않게 한다.
 *   - 디자이너가 코드 변경 없이 자산을 교체할 수 있다.
 *   - 새 게임 모드를 추가해도 시간 자산 셋업이 자동으로 일관된다.
 *
 * 설계 메모:
 *   - TSoftObjectPtr를 사용해 Settings 객체 자체는 자산을 메모리에 끌고 오지 않는다.
 *     GameMode가 LoadSynchronous로 명시적 로드.
 *   - StartDate / StartCycleTag는 여기 두지 않는다 — 그것들은 SaveData 또는
 *     게임 모드별 정책에 의존하며 "프로젝트 기본값"이라는 의미가 약하다.
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Kaus Time"))
class KAUS_API UKausTimeSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    /**
     * 기본 캘린더 일정 자산.
     * 날짜 범위, 주말/휴일 규칙, 시드 메타를 정의.
     */
    UPROPERTY(EditAnywhere, Config, Category = "Time",
        meta = (AllowedClasses = "/Script/Kaus.KausCalendarSchedule",
                DisplayName = "Default Calendar Schedule"))
    TSoftObjectPtr<UKausCalendarSchedule> DefaultSchedule;

    /**
     * 기본 일과 정의 자산.
     * 하루의 Cycle 시퀀스 (Morning → Afternoon → Night1 → Night2).
     */
    UPROPERTY(EditAnywhere, Config, Category = "Time",
        meta = (AllowedClasses = "/Script/Kaus.KausDayCycleDefinition",
                DisplayName = "Default Day Cycle Definition"))
    TSoftObjectPtr<UKausDayCycleDefinition> DefaultDefinition;

    // ─── UDeveloperSettings ────────────────────────────────────────────

    virtual FName GetCategoryName() const override { return TEXT("Kaus"); }

#if WITH_EDITOR
    virtual FText GetSectionText() const override;
    virtual FText GetSectionDescription() const override;
#endif
};
