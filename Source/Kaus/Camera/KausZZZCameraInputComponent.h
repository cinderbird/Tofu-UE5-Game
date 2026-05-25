#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KausZZZCameraInputComponent.generated.h"

class UKausInputConfig;
class UInputAction;
class UInputMappingContext;
class UKausInputComponent;

/**
 * UKausZZZCameraInputComponent
 * 어떤 Actor든 이 컴포넌트를 부착하면 ZZZ 스타일의 카메라 조작 기능을 가질 수 있습니다.
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KAUS_API UKausZZZCameraInputComponent : public UActorComponent
{
    GENERATED_BODY()

public:    
    UKausZZZCameraInputComponent();

    // ActorComponent 인터페이스: 입력 바인딩을 위해 초기화 시점 활용
    virtual void InitializeComponent() override;
    
    // Pawn의 SetupPlayerInputComponent에서 호출하거나, 스스로 바인딩 시도
    UFUNCTION(BlueprintCallable, Category = "Kaus|Input")
    void SetupInputBindings(class UKausInputComponent* PlayerInputComponent);

protected:
    void Input_MoveXY(const struct FInputActionValue& Value);
    void Input_Zoom(const struct FInputActionValue& Value);
    void Input_Look(const struct FInputActionValue& Value);
    void Input_RotateSnap(const struct FInputActionValue& Value);
    void Input_Reset(const struct FInputActionValue& Value);
    void Input_Cinematic(const struct FInputActionValue& Value);
    void Input_SwitchCamera(const struct FInputActionValue& Value);

protected:
    // --- [Settings] ---
    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Input")
    const UKausInputConfig* InputConfig;

private:
    // 헬퍼: 현재 Owner의 CameraMode_ZZZ 인스턴스를 찾음
    class UKausCameraMode_ZZZ* GetTargetCameraMode() const;
};