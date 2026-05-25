#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "KausSequenceMessages.generated.h"


USTRUCT(BlueprintType)
struct KAUS_API FKausSequenceResumeMessage
{
    GENERATED_BODY()

    /**
     * 트리거를 발생시킨 액터 (캐릭터 클릭 등).
     * 없으면 nullptr (UI 버튼, 키 입력 등).
     */
    UPROPERTY(BlueprintReadWrite, Category = "Kaus|Sequence")
    TObjectPtr<AActor> SourceActor = nullptr;

    /** 디버그/로깅용 컨텍스트 설명. 런타임 동작에는 영향을 주지 않습니다. */
    UPROPERTY(BlueprintReadWrite, Category = "Kaus|Sequence")
    FText Context;
};

/**
 * FKausSequenceRestartMessage
 *
 * Kaus.Sequence.Restart 태그와 함께 브로드캐스트되는 메시지 페이로드.
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausSequenceRestartMessage
{
    GENERATED_BODY()

    /** 디버그/로깅용 컨텍스트 설명. */
    UPROPERTY(BlueprintReadWrite, Category = "Kaus|Sequence")
    FText Context;
};

/**
 * FKausSequenceStopMessage
 *
 * Kaus.Sequence.Stop 태그와 함께 브로드캐스트되는 메시지 페이로드.
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausSequenceStopMessage
{
    GENERATED_BODY()

    /** 디버그/로깅용 컨텍스트 설명. */
    UPROPERTY(BlueprintReadWrite, Category = "Kaus|Sequence")
    FText Context;
};
