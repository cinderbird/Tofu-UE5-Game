// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPath.h"
#include "KausGameDate.h"
#include "KausDayCycleTypes.generated.h"

/**
 * FKausDayCyclePoint
 *
 * 시간축 상의 단일 좌표. (어느 날짜의, 어느 Cycle인지)
 *
 * 의도:
 *  - DayCycleSubsystem의 모든 조회/진행 결과는 이 좌표로 표현.
 *  - "지금 시점"의 단일 진리원이 이 구조체.
 *  - WorldState/EventScheduler가 "언제 일어났는가"를 기록할 때도 이 좌표.
 *
 * 비교:
 *  - operator==는 Date AND CycleTag 모두 일치할 때만 true.
 *  - 시간 순 비교(<)는 DayCycleSubsystem이 Definition을 알아야 가능 —
 *    여기서는 제공하지 않음. CountCyclesBetween을 사용할 것.
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausDayCyclePoint
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|DayCycle")
    FKausGameDate Date;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|DayCycle",
        meta = (Categories = "Calendar.Cycle"))
    FGameplayTag CycleTag;

    FKausDayCyclePoint() = default;

    FKausDayCyclePoint(const FKausGameDate& InDate, const FGameplayTag& InCycleTag)
        : Date(InDate), CycleTag(InCycleTag) {}

        
    /** CycleTag가 valid이면 true. (Date는 검사하지 않음 — 초기값 (1,1,1)도 그레고리력에서 유효한 날짜이므로.) */
    bool IsValid() const
    {
        return CycleTag.IsValid();
    }

    bool operator==(const FKausDayCyclePoint& Other) const
    {
        return Date == Other.Date && CycleTag.MatchesTagExact(Other.CycleTag);
    }

    bool operator!=(const FKausDayCyclePoint& Other) const { return !(*this == Other); }

    FString ToString() const
    {
        return FString::Printf(TEXT("%s@%s"),
            *Date.ToString(),
            CycleTag.IsValid() ? *CycleTag.ToString() : TEXT("None"));
    }

    friend uint32 GetTypeHash(const FKausDayCyclePoint& P)
    {
        return HashCombine(GetTypeHash(P.Date), GetTypeHash(P.CycleTag));
    }
};

// =============================================================================
//  FKausDayCycleSaveData — 직렬화 가능한 상태
// =============================================================================

/**
 * FKausDayCycleSaveData
 *
 * UKausDayCycleSubsystem의 직렬화 가능한 상태.
 *
 * 보관:
 *  - DefinitionAssetPath: 어떤 Definition을 사용 중이었는지 (복원 시 검증)
 *  - Current: 현재 시점 좌표
 *
 * 미보관:
 *  - Cycle 순서 정보 → Definition이 보유. SaveData 복원 시 동일 Definition인지 검증.
 *
 * 주의: SaveData에 기록된 Definition과 복원 시점의 Definition이 다르면
 *       (Cycle이 추가/제거되었으면) RestoreFromSaveData가 실패할 수 있다.
 *       이 경우 별도 마이그레이션 정책이 필요하지만, 현재는 미지원 (출시 전 패치 정책 미정).
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausDayCycleSaveData
{
    GENERATED_BODY()

    UPROPERTY()
    FSoftObjectPath DefinitionAssetPath;

    UPROPERTY()
    FKausDayCyclePoint Current;
};

// =============================================================================
//  델리게이트
// =============================================================================

/**
 * Cycle 변경 알림.
 *
 * 발행 시점:
 *  - InitializeWith 성공 시 — 1회 (PreviousPoint가 invalid일 수 있음)
 *  - AdvanceCycle 성공
 *  - AdvanceBy의 매 step (bBroadcastEachStep=true) 또는 마지막 1회 (false)
 *  - JumpTo 성공 (현재 좌표가 변경된 경우만)
 *  - RestoreFromSaveData 성공 (내부적으로 InitializeWith를 호출하므로)
 *
 * 미발행 시점:
 *  - AdvanceBy(0, 0) 등 no-op
 *  - JumpTo가 동일 좌표를 가리키는 경우
 *  - 재초기화에서 동일 좌표가 들어오는 경우
 *
 * 구독자 계약:
 *  - NewPoint는 항상 valid (CycleTag.IsValid()=true).
 *  - PreviousPoint.CycleTag는 invalid일 수 있음 — 첫 초기화 시점.
 *    이 경우 "처음으로 시간축이 켜졌다"로 해석.
 *  - NewPoint와 PreviousPoint는 항상 다르다 (== 검사로 발행 여부 결정).
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKausDayCycleChangedDelegate,
    const FKausDayCyclePoint&, NewPoint,
    const FKausDayCyclePoint&, PreviousPoint);

/**
 * Date 경계 통과 알림.
 *
 * 발행 시점:
 *  - 진행 중 Date가 변경된 경우만 (Cycle만 바뀌고 Date가 같으면 미발행).
 *  - OnCycleChanged가 먼저 발행되고, 그 다음에 OnDateChanged가 발행됨.
 *
 * 의도:
 *  - "하루가 끝났다 / 새 날이 시작됐다"에만 반응하는 시스템(일일 정산, 일자별 UI 등)을 위함.
 *  - Cycle 단위까지 따라가지 않는 가벼운 구독자가 사용.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKausDayCycleDateChangedDelegate,
    const FKausGameDate&, NewDate,
    const FKausGameDate&, PreviousDate);
