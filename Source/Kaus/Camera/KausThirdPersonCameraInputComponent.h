#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KausThirdPersonCameraInputComponent.generated.h"

class UKausInputConfig;
class UInputAction;
class UInputMappingContext;
class UKausInputComponent;

/**
 * KausThirdPersonCameraInputComponent
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class KAUS_API UKausThirdPersonCameraInputComponent : public UActorComponent
{
    GENERATED_BODY()

public:    
    UKausThirdPersonCameraInputComponent();

    // ActorComponent 인터페이스: 입력 바인딩을 위해 초기화 시점 활용
    virtual void InitializeComponent() override;
    
    // Pawn의 SetupPlayerInputComponent에서 호출하거나, 스스로 바인딩 시도
    UFUNCTION(BlueprintCallable, Category = "Kaus|Input")
    void SetupInputBindings(class UKausInputComponent* PlayerInputComponent);

protected:
    void Input_Look(const struct FInputActionValue& Value);

protected:
    // --- [Settings] ---
    UPROPERTY(EditDefaultsOnly, Category = "ThirdPerson|Input")
    const UKausInputConfig* InputConfig;

private:
    // 헬퍼: 현재 Owner의 CameraMode_ThirdPerson 인스턴스를 찾음
    class UKausCameraMode_ThirdPerson* GetTargetCameraMode() const;
};