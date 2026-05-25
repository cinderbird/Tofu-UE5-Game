#include "Interaction/KausInteractionZone.h"
#include "Components/CapsuleComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Physics/KausCollisionChannels.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausInteractionZone, Log, All);

UKausInteractionZone::UKausInteractionZone(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    PrimaryComponentTick.bCanEverTick = true;
    bTickInEditor = true; 
    
    bWantsOnUpdateTransform = false;

    // 에디터에서 보이되, 게임에서는 보이지 않음
    SetHiddenInGame(true);
#if WITH_EDITORONLY_DATA
    bVisualizeComponent = true;
#endif
}

void UKausInteractionZone::OnRegister()
{
    Super::OnRegister();

#if WITH_EDITORONLY_DATA
    UpdateEditorVisualization();
#endif
}

void UKausInteractionZone::BeginPlay()
{
    Super::BeginPlay();

    if (!bUseBonePhysicsBody)
    {
        CreateShapeCollision();
    }
    else
    {
        // Physics Asset 바디 활용 모드:
        // 부착된 SkeletalMesh의 Physics Asset에서 이 소켓의 본에 해당하는 바디가
        // Kaus_TraceChannel_Interaction_Zone에 응답하도록 설정합니다.
        // 바디 자체의 콜리전 응답은 SkeletalMeshComponent 레벨에서 관리됩니다.
        // 이 경우 히트 결과에서 BoneName이 반환되고,
        // FindZoneFromHitComponent는 본 이름과 소켓 매칭으로 이 존을 찾습니다.
        UE_LOG(LogKausInteractionZone, Log, TEXT("Zone [%s]: using bone physics body mode on socket [%s]"),
            *ZoneTag.ToString(), *GetAttachSocketName().ToString());
    }
}

void UKausInteractionZone::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

#if WITH_EDITOR
    // 에디터 환경(디자인 타임)이고, 디버그 드로우 옵션이 켜져 있으며, 본 콜리전 활용 모드가 아닐 때만 그립니다.
    if (bDrawDebugShape && !bUseBonePhysicsBody && GetWorld() && !GetWorld()->IsGameWorld())
    {
        FColor DrawColor = ResolveDebugColor();
        FTransform Transform = GetComponentTransform();
        FVector Loc = Transform.GetLocation();
        FQuat Rot = Transform.GetRotation();

        switch (ShapeType)
        {
        case EKausZoneShapeType::Capsule:
            // 캡슐은 Y가 HalfHeight, X가 Radius입니다.
            DrawDebugCapsule(GetWorld(), Loc, ShapeExtent.Y, ShapeExtent.X, Rot, DrawColor, false, -1.f, 0, 2.f);
            break;
        case EKausZoneShapeType::Box:
            DrawDebugBox(GetWorld(), Loc, ShapeExtent, Rot, DrawColor, false, -1.f, 0, 2.f);
            break;
        case EKausZoneShapeType::Sphere:
            // 구체는 X를 Radius로 사용합니다.
            DrawDebugSphere(GetWorld(), Loc, ShapeExtent.X, 32, DrawColor, false, -1.f, 0, 2.f);
            break;
        }
    }
#endif
}

// ============================================================================
// 런타임 셰이프 생성
// ============================================================================

void UKausInteractionZone::CreateShapeCollision()
{
    UShapeComponent* NewShape = nullptr;

    switch (ShapeType)
    {
    case EKausZoneShapeType::Capsule:
    {
        UCapsuleComponent* Capsule = NewObject<UCapsuleComponent>(GetOwner(),
            *FString::Printf(TEXT("ZoneShape_%s"), *ZoneTag.ToString()));
        Capsule->InitCapsuleSize(ShapeExtent.X, ShapeExtent.Y);
        NewShape = Capsule;
        break;
    }
    case EKausZoneShapeType::Box:
    {
        UBoxComponent* Box = NewObject<UBoxComponent>(GetOwner(),
            *FString::Printf(TEXT("ZoneShape_%s"), *ZoneTag.ToString()));
        Box->SetBoxExtent(ShapeExtent);
        NewShape = Box;
        break;
    }
    case EKausZoneShapeType::Sphere:
    {
        USphereComponent* Sphere = NewObject<USphereComponent>(GetOwner(),
            *FString::Printf(TEXT("ZoneShape_%s"), *ZoneTag.ToString()));
        Sphere->SetSphereRadius(ShapeExtent.X);
        NewShape = Sphere;
        break;
    }
    }

    if (NewShape)
    {
        // 이 InteractionZone 컴포넌트의 자식으로 부착
        // → 소켓 위치를 따라감
        NewShape->SetupAttachment(this);
        NewShape->RegisterComponent();

        // 콜리전 설정
        ConfigureShapeChannel(NewShape);

        // 게임에서 보이지 않음
        NewShape->SetHiddenInGame(true);
        NewShape->SetVisibility(false);

        SpawnedShape = NewShape;

        UE_LOG(LogKausInteractionZone, Log, TEXT("Zone [%s]: created %s shape (extent: %s)"),
            *ZoneTag.ToString(),
            *UEnum::GetValueAsString(ShapeType),
            *ShapeExtent.ToString());
    }
}

void UKausInteractionZone::ConfigureShapeChannel(UShapeComponent* Shape)
{
    if (!Shape) return;

    // QueryOnly — 물리 시뮬레이션 없이 트레이스만 응답
    Shape->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

    // 모든 채널 무시
    Shape->SetCollisionResponseToAllChannels(ECR_Ignore);

    // 메인 화면 상호작용 존 전용 채널에만 Block
    Shape->SetCollisionResponseToChannel(Kaus_TraceChannel_Interaction_Zone, ECR_Block);

    // 오브젝트 타입은 WorldDynamic
    Shape->SetCollisionObjectType(ECC_WorldDynamic);

    // 오버랩 이벤트 불필요
    Shape->SetGenerateOverlapEvents(false);
}

// ============================================================================
// 히트 결과에서 존 찾기 (static)
// ============================================================================

UKausInteractionZone* UKausInteractionZone::FindZoneFromHitComponent(UPrimitiveComponent* HitComponent)
{
    if (!HitComponent) return nullptr;

    // 경로 1: 셰이프 컴포넌트의 부모가 InteractionZone인 경우 (직접 생성 모드)
    if (USceneComponent* Parent = HitComponent->GetAttachParent())
    {
        if (UKausInteractionZone* Zone = Cast<UKausInteractionZone>(Parent))
        {
            return Zone;
        }
    }

    // 경로 2: Physics Asset 바디 모드 — SkeletalMeshComponent가 히트됨
    // 소유 액터의 모든 InteractionZone을 순회하여 본 이름/소켓 매칭
    AActor* Owner = HitComponent->GetOwner();
    if (!Owner) return nullptr;

    // 히트된 본 이름 획득 (Physics Asset 트레이스 시 설정됨)
    // 이 함수는 HitResult.BoneName이 아니라 컴포넌트에서 직접 소켓을 조회하므로,
    // 호출자가 HitResult.BoneName을 별도로 전달하는 오버로드도 제공
    return nullptr; // BoneName 없이는 매칭 불가 — 오버로드 사용
}

// ============================================================================
// 에디터 시각화
// ============================================================================

#if WITH_EDITORONLY_DATA
void UKausInteractionZone::UpdateEditorVisualization()
{
    // 에디터에서의 스프라이트 아이콘이나 커스텀 시각화는
    // UPrimitiveComponent가 아니므로 직접 드로잉은 제한적.
    // DrawDebugShape는 Tick 기반이라 여기서는 메타데이터만 설정.
    // 실제 디버그 드로잉은 ShowDebug 커맨드나 컴포넌트 비주얼라이저를 통해 수행.
}
#endif

#if WITH_EDITOR
void UKausInteractionZone::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

#if WITH_EDITORONLY_DATA
    UpdateEditorVisualization();
#endif
}
#endif

FColor UKausInteractionZone::ResolveDebugColor() const
{
    if (DebugColor != FColor::Transparent)
    {
        return DebugColor;
    }

    // ZoneTag 해시 기반 자동 색상
    if (ZoneTag.IsValid())
    {
        uint32 Hash = GetTypeHash(ZoneTag.GetTagName());
        return FColor(
            (Hash & 0xFF),
            ((Hash >> 8) & 0xFF),
            ((Hash >> 16) & 0xFF),
            255);
    }

    return FColor::Yellow;
}
