#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Types/SlateEnums.h"
#include "UI/IndicatorSystem/IndicatorDescriptor.h"
#include "KausEmotionIndicatorDataAsset.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FKausEmotionIndicatorEntry
{
    GENERATED_BODY()

    /** 이 엔트리를 식별하는 감정 태그 (예: Emotion.Anger, Emotion.Sweat) */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (Categories = "Emotion"))
    FGameplayTag EmotionTag;

    /** 표시할 위젯 클래스 */
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSoftClassPtr<UUserWidget> WidgetClass;

    /** 부착할 본/소켓 이름 (예: "head", "hand_r"). NAME_None이면 컴포넌트 원점. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName SocketName = NAME_None;

    /** 소켓 기준 월드 오프셋 (예: 머리 위로 띄우기) */
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FVector WorldPositionOffset = FVector::ZeroVector;

    /** 스크린 스페이스 오프셋 */
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FVector2D ScreenSpaceOffset = FVector2D::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TEnumAsByte<EHorizontalAlignment> HAlignment = HAlign_Center;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TEnumAsByte<EVerticalAlignment> VAlignment = VAlign_Bottom;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    EActorCanvasProjectionMode ProjectionMode = EActorCanvasProjectionMode::ComponentPoint;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    bool bClampToScreen = false;

    /** 같은 캐릭터 위에서 여러 감정이 겹칠 때의 정렬 우선순위 (낮을수록 뒤) */
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int32 Priority = 0;
};

UCLASS(BlueprintType)
class KAUS_API UKausEmotionIndicatorDataAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (TitleProperty = "EmotionTag"))
    TArray<FKausEmotionIndicatorEntry> Emotions;

    /** 태그로 엔트리 조회 (없으면 nullptr) */
    const FKausEmotionIndicatorEntry* FindEntry(const FGameplayTag& Tag) const
    {
        for (const FKausEmotionIndicatorEntry& Entry : Emotions)
        {
            if (Entry.EmotionTag == Tag) return &Entry;
        }
        return nullptr;
    }
};
