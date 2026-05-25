// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "KausGameDate.h"
#include "KausCalendarTypes.h"
#include "KausCalendarSaveData.h"
#include "KausCalendarSubsystem.generated.h"

class UKausCalendarSchedule;
class UKausCalendarSystem;

/**
 * Calendar 메타 변경 알림.
 *
 * 발행 시점:
 *  - AddRuntimeTag / RemoveRuntimeTag / SetRuntimeDisplayName / ClearRuntimeOverrides
 *  - 런타임 오버라이드가 변경된 모든 경우
 *
 * NewMeta는 시드 + 오버라이드가 병합된 최종 상태.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKausCalendarMetaChangedDelegate,
    const FKausGameDate&, ChangedDate,
    const FKausDayMeta&, NewMeta);

/**
 * Calendar 전체 재빌드 알림.
 *
 * 발행 시점:
 *  - InitializeWithSchedule 성공 시
 *  - SwitchSchedule (있을 경우)
 *
 * 모든 구독자가 ResolvedDays를 다시 조회해야 함.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKausCalendarRebuiltDelegate);

/**
 * UKausCalendarSubsystem
 *
 * Calendar 시스템의 런타임 매니저.
 *
 * 책임:
 *  1) Schedule을 받아 ResolvedDays 빌드 (시드 + 자동 채움)
 *  2) 런타임 오버라이드 보관 (AddRuntimeTag / RemoveRuntimeTag 등)
 *  3) 메타 조회 API 제공 (TryGetDayMeta, FindNextDayWithTag 등)
 *  4) 변경 시 OnDayMetaChanged 발행
 *  5) SaveGame을 위한 Capture/Restore
 *
 * 책임 아님:
 *  - 현재 날짜 / 하루 진행 → 별도 DayProgressionSubsystem(추후)
 *  - 메타의 의미 해석 → 외부 시스템(Token, UI, BGM 등)
 *
 * 모든 mutation API는 게임 스레드에서만 호출되어야 함 (디버그 빌드에서 check).
 */
UCLASS()
class KAUS_API UKausCalendarSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    //~USubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    //~End of USubsystem

    // ─────────────────────────────────────────────────────────────────
    //  초기화
    // ─────────────────────────────────────────────────────────────────

    /**
     * Schedule을 부착하고 ResolvedDays를 빌드한다.
     *
     * 게임 시작 시 1회 호출이 일반적이지만, 챕터 전환 등으로 재호출 가능.
     * 재호출 시: 기존 RuntimeOverrides는 모두 비워지고 OnCalendarRebuilt가 발행됨.
     *
     * @return Schedule이 유효하고 빌드에 성공하면 true.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Calendar")
    bool InitializeWithSchedule(UKausCalendarSchedule* Schedule);

    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    bool IsInitialized() const { return CurrentSchedule != nullptr && ResolvedDays.Num() > 0; }

    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    UKausCalendarSchedule* GetSchedule() const { return CurrentSchedule; }

    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    UKausCalendarSystem* GetCalendarSystem() const;

    // ─────────────────────────────────────────────────────────────────
    //  범위 쿼리
    // ─────────────────────────────────────────────────────────────────

    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    FKausGameDate GetStartDate() const;

    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    FKausGameDate GetEndDate() const;

    /** ResolvedDays 항목 수와 동일. */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    int32 GetTotalDayCount() const;

    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    bool IsDateInRange(const FKausGameDate& Date) const;

    /**
     * Date → 1-based DayIndex.
     * StartDate=1, EndDate=GetTotalDayCount.
     * 범위 밖이면 INDEX_NONE.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    int32 DateToIndex(const FKausGameDate& Date) const;

    /**
     * 1-based Index → Date.
     * [1, GetTotalDayCount] 범위 밖이면 invalid Date(기본 생성).
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    FKausGameDate IndexToDate(int32 OneBasedIndex) const;

    // ─────────────────────────────────────────────────────────────────
    //  메타 조회
    // ─────────────────────────────────────────────────────────────────

    /**
     * 시드 + 자동 채움 + 런타임 오버라이드를 모두 병합한 최종 메타를 반환.
     *
     * @return 범위 안의 날짜이면 true.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    bool TryGetDayMeta(const FKausGameDate& Date, FKausDayMeta& OutMeta) const;

    /**
     * 모든 날짜 메타의 read-only 스냅샷 (오버라이드 적용된 최종 상태).
     * UI 캘린더 위젯 등에서 사용.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    TArray<FKausDayMeta> GetAllDayMetas() const;

    // ─────────────────────────────────────────────────────────────────
    //  메타 검색
    // ─────────────────────────────────────────────────────────────────

    /**
     * From 날짜 다음(포함하지 않음)부터 Tag가 부착된 첫 날짜를 찾는다.
     *
     * @param From  검색 시작점. From 자체는 검사하지 않음.
     * @param Tag   찾을 태그. 계층적 매치(MatchesTag).
     * @param OutDate 발견된 날짜.
     * @return 발견하면 true.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    bool FindNextDayWithTag(const FKausGameDate& From, FGameplayTag Tag, FKausGameDate& OutDate) const;

    /** Tag가 부착된 모든 날짜 목록. */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    TArray<FKausGameDate> FindAllDaysWithTag(FGameplayTag Tag) const;

    // ─────────────────────────────────────────────────────────────────
    //  런타임 메타 변경 (게임 스레드 전용)
    // ─────────────────────────────────────────────────────────────────

    /**
     * 특정 날짜에 태그 추가.
     * 같은 태그가 ExclusionTags에 있으면 자동 제거 (Add/Remove 충돌 방지).
     * 이미 시드/자동 부착으로 같은 태그가 있어도 무해 (FGameplayTagContainer가 중복 방지).
     *
     * @return 범위 안의 유효한 태그면 true.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Calendar")
    bool AddRuntimeTag(const FKausGameDate& Date, FGameplayTag Tag);

    /**
     * 특정 날짜에서 태그 제거.
     * 시드/자동 부착으로 부여된 태그도 제거 가능.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Calendar")
    bool RemoveRuntimeTag(const FKausGameDate& Date, FGameplayTag Tag);

    /** 표시 이름을 런타임에 덮어쓰기. NewName이 비면 오버라이드 해제. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Calendar")
    bool SetRuntimeDisplayName(const FKausGameDate& Date, const FText& NewName);

    /** 특정 날짜의 모든 런타임 변경을 제거 (시드 상태로 복원). */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Calendar")
    bool ClearRuntimeOverrides(const FKausGameDate& Date);

    /** 모든 날짜의 런타임 변경 제거. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Calendar")
    void ClearAllRuntimeOverrides();

    // ─────────────────────────────────────────────────────────────────
    //  영속화
    // ─────────────────────────────────────────────────────────────────

    UFUNCTION(BlueprintCallable, Category = "Kaus|Calendar")
    FKausCalendarSaveData CaptureSaveData() const;

    /**
     * SaveData로 복원.
     * ScheduleAssetPath가 가리키는 Schedule을 동기 로드 후 InitializeWithSchedule 수행,
     * 그 다음 RuntimeOverrides를 복원하고 각 날짜에 대해 OnDayMetaChanged 발행.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Calendar")
    bool RestoreFromSaveData(const FKausCalendarSaveData& Data);

    // ─────────────────────────────────────────────────────────────────
    //  델리게이트
    // ─────────────────────────────────────────────────────────────────

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Calendar")
    FKausCalendarMetaChangedDelegate OnDayMetaChanged;

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Calendar")
    FKausCalendarRebuiltDelegate OnCalendarRebuilt;

protected:
    /** 현재 부착된 Schedule. nullptr이면 미초기화. */
    UPROPERTY(Transient)
    TObjectPtr<UKausCalendarSchedule> CurrentSchedule;

    /**
     * 시드 + 자동 채움 결과.
     * 인덱스 = (Date - StartDate)일 수.
     * 런타임 오버라이드는 적용되어 있지 않음 — 조회 시점에 BuildEffectiveMeta가 병합.
     */
    UPROPERTY(Transient)
    TArray<FKausDayMeta> ResolvedDays;

    /** 런타임에 추가된 메타 변경. ResolvedDays 위에 덮어씀. */
    UPROPERTY(Transient)
    TMap<FKausGameDate, FKausDayRuntimeOverride> RuntimeOverrides;

private:
    /** ResolvedDays를 Schedule에서 처음부터 빌드. */
    void RebuildResolvedDays();

    /** Date → ResolvedDays 인덱스. 범위 밖이면 INDEX_NONE. */
    int32 DateToResolvedIndex(const FKausGameDate& Date) const;

    /** 시드 + 런타임 오버라이드를 병합한 최종 메타. */
    bool BuildEffectiveMeta(const FKausGameDate& Date, FKausDayMeta& OutMeta) const;

    /**
     * Mutator를 호출해 RuntimeOverrides[Date]를 변경하고 OnDayMetaChanged를 발행.
     * Mutator 호출 후 Override가 IsEmpty면 맵에서 제거.
     */
    bool ApplyRuntimeOverride(const FKausGameDate& Date,
        TFunctionRef<void(FKausDayRuntimeOverride&)> Mutator);

    /** 효과를 계산해 OnDayMetaChanged 브로드캐스트. */
    void BroadcastMetaChanged(const FKausGameDate& Date);
};
