#pragma once

#include "KausTabListWidgetBase.h"
#include "UI/Foundation/KausButtonBase.h"
#include "KausTabButtonBase.generated.h"

class UCommonLazyImage;
class UObject;
struct FFrame;
struct FSlateBrush;

UCLASS(Abstract, Blueprintable, meta = (DisableNativeTick))
class KAUS_API UKausTabButtonBase : public UKausButtonBase, public IKausTabButtonInterface
{
	GENERATED_BODY()

public:
	void SetIconFromLazyObject(TSoftObjectPtr<UObject> LazyObject);
	void SetIconBrush(const FSlateBrush& Brush);

protected:
	UFUNCTION()
	virtual void SetTabLabelInfo_Implementation(const FKausTabDescriptor& TabLabelInfo) override;

private:
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UCommonLazyImage> LazyImage_Icon;
	
};
