#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KausNodeInteractionPayload.generated.h"

class UMounteaDialogueGraph;
class ALevelSequenceActor;

UENUM(BlueprintType)
enum class ENodeDialogueControlLevel : uint8
{
    Free UMETA(DisplayName = "Free"),
    Full UMETA(DisplayName = "Full")
};

UCLASS(Abstract, BlueprintType, EditInlineNew, DefaultToInstanced)
class KAUS_API UKausNodeInteractionPayload : public UObject
{
    GENERATED_BODY()
};

// 대화 전용 데이터 상자
UCLASS(BlueprintType, meta = (DisplayName = "Payload: Dialogue"))
class KAUS_API UKausPayload_Dialogue : public UKausNodeInteractionPayload
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Narrative")
    TSoftObjectPtr<UMounteaDialogueGraph> DialogueGraph;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Narrative")
    ENodeDialogueControlLevel ControlLevel = ENodeDialogueControlLevel::Free;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Narrative", meta = (EditCondition = "ControlLevel == ENodeDialogueControlLevel::Full", EditConditionHides))
    TSoftObjectPtr<ALevelSequenceActor> LevelSequenceActor;
};
