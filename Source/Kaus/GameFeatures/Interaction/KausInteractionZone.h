#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "KausInteractionZone.generated.h"

class UShapeComponent;
class UCapsuleComponent;
class UBoxComponent;
class USphereComponent;

/**
 * 존 콜리전 형태.
 */
UENUM(BlueprintType)
enum class EKausZoneShapeType : uint8
{
    Capsule,
    Box,
    Sphere
};

/**
 * UKausInteractionZone
 *
 * 캐릭터 위의 상호작용 영역 하나를 정의합니다.
 * 캐릭터 BP에서 소켓에 부착하고, ZoneTag와 형태를 설정하면 끝입니다.
 *
 * 워크플로우:
 *   1. 캐릭터 BP의 SkeletalMesh 아래에 이 컴포넌트를 추가
 *   2. Parent Socket을 원하는 본 소켓으로 설정 (head, hand_r 등)
 *   3. Details에서 ZoneTag, ShapeType, ShapeExtent를 설정
 *   4. 에디터 뷰포트에서 디버그 셰이프로 영역 확인
 *
 * 런타임:
 *   - BeginPlay에서 UShapeComponent를 자식으로 생성
 *   - 전용 트레이스 채널에만 응답 (다른 게임플레이 콜리전과 간섭 없음)
 *   - 히트 시 GetAttachParent()로 이 컴포넌트를 찾아 ZoneTag를 읽음
 */
UCLASS(ClassGroup = (Kaus), meta = (BlueprintSpawnableComponent),
    HideCategories = (Mobility, LOD, Cooking))
class KAUS_API UKausInteractionZone : public USceneComponent
{
    GENERATED_BODY()

public:
    UKausInteractionZone(const FObjectInitializer& ObjectInitializer);

    // === 존 정의 ===

    /** 이 영역의 의미론적 태그 (예: Interaction.Zone.Head) */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Zone",
        meta = (Categories = "Interaction.Zone"))
    FGameplayTag ZoneTag;

    /** 콜리전 형태 */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Zone")
    EKausZoneShapeType ShapeType = EKausZoneShapeType::Capsule;

    /**
     * 형태 크기.
     * Capsule: X=Radius, Y=HalfHeight (Z 무시)
     * Box:     X=HalfExtentX, Y=HalfExtentY, Z=HalfExtentZ
     * Sphere:  X=Radius (Y,Z 무시)
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Zone")
    FVector ShapeExtent = FVector(10.0f, 20.0f, 10.0f);

    /** true이면 셰이프를 직접 생성하지 않고, 부착된 본의 Physics Asset 바디를 활용합니다. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Zone|Advanced")
    bool bUseBonePhysicsBody = false;

    // === 에디터 ===

    /** 에디터에서 존 영역을 와이어프레임으로 표시 */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Zone|Debug")
    bool bDrawDebugShape = true;

    /** 디버그 색상 (빈 값이면 ZoneTag 해시 기반 자동 색상) */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Zone|Debug")
    FColor DebugColor = FColor::Transparent;

    // === 런타임 접근 ===

    /** 히트 테스트 후 이 컴포넌트에서 직접 존 태그를 읽습니다. */
    UFUNCTION(BlueprintPure, Category = "Kaus|Zone")
    FGameplayTag GetZoneTag() const { return ZoneTag; }

    /** 생성된 콜리전 셰이프를 반환합니다. */
    UFUNCTION(BlueprintPure, Category = "Kaus|Zone")
    UShapeComponent* GetShapeComponent() const { return SpawnedShape; }

    /** 히트 컴포넌트로부터 소유 InteractionZone을 찾습니다. */
    UFUNCTION(BlueprintPure, Category = "Kaus|Zone")
    static UKausInteractionZone* FindZoneFromHitComponent(UPrimitiveComponent* HitComponent);

protected:
    virtual void BeginPlay() override;

    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    
#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

    virtual void OnRegister() override;

private:
    void CreateShapeCollision();
    void ConfigureShapeChannel(UShapeComponent* Shape);
    FColor ResolveDebugColor() const;

    UPROPERTY(Transient)
    TObjectPtr<UShapeComponent> SpawnedShape;

#if WITH_EDITORONLY_DATA
    void UpdateEditorVisualization();
#endif
};
