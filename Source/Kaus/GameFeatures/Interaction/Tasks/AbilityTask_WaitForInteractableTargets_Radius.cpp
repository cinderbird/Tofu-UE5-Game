#include "AbilityTask_WaitForInteractableTargets_Radius.h"
#include "Interaction/InteractionStatics.h"
#include "Interaction/IInteractableTarget.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"

UAbilityTask_WaitForInteractableTargets_Radius::UAbilityTask_WaitForInteractableTargets_Radius(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UAbilityTask_WaitForInteractableTargets_Radius* UAbilityTask_WaitForInteractableTargets_Radius::WaitForInteractableTargets_Radius(
	UGameplayAbility* OwningAbility, 
	FInteractionQuery InteractionQuery, 
	FCollisionProfileName TraceProfile, 
	float InteractionScanRange, 
	float InteractionScanRate, 
	bool bSortByDistance,
	bool bShowDebug)
{
	UAbilityTask_WaitForInteractableTargets_Radius* MyObj = NewAbilityTask<UAbilityTask_WaitForInteractableTargets_Radius>(OwningAbility);
	MyObj->InteractionQuery = InteractionQuery;
	MyObj->TraceProfile = TraceProfile;
	MyObj->InteractionScanRange = InteractionScanRange;
	MyObj->InteractionScanRate = InteractionScanRate;
	MyObj->bSortByDistance = bSortByDistance;
	MyObj->bShowDebug = bShowDebug;

	return MyObj;
}

void UAbilityTask_WaitForInteractableTargets_Radius::Activate()
{
	SetWaitingOnAvatar();

	UWorld* World = GetWorld();
	if (World)
	{
		World->GetTimerManager().SetTimer(TimerHandle, this, &ThisClass::PerformOverlap, InteractionScanRate, true);
	}
}

void UAbilityTask_WaitForInteractableTargets_Radius::OnDestroy(bool AbilityEnded)
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(TimerHandle);
	}

	Super::OnDestroy(AbilityEnded);
}

void UAbilityTask_WaitForInteractableTargets_Radius::PerformOverlap()
{
    AActor* AvatarActor = Ability->GetCurrentActorInfo()->AvatarActor.Get();
    if (!AvatarActor) return;

    // Z+50 오프셋으로 바닥 충돌 방지
    FVector ViewLoc = AvatarActor->GetActorLocation() + FVector(0.f, 0.f, 50.f); 
    FVector ViewDir = AvatarActor->GetActorForwardVector();

    UWorld* World = GetWorld();
    
    // 매번 메모리를 할당하지 않고 기존 배열을 초기화하여 재사용
    OverlapResults.Reset();
    Candidates.Reset();

    FCollisionShape SphereShape = FCollisionShape::MakeSphere(InteractionScanRange);
    FCollisionQueryParams Params(SCENE_QUERY_STAT(UAbilityTask_WaitForInteractableTargets_Radius), false);
    Params.AddIgnoredActor(AvatarActor);

    World->OverlapMultiByProfile(OverlapResults, ViewLoc, FQuat::Identity, TraceProfile.Name, SphereShape, Params);

    const float SurroundingRadius = InteractionRadiusScandRange;
    const float SurroundingRadiusSq = SurroundingRadius * SurroundingRadius;
    const float MinimumViewAngle = 0.2f;

    // 1단계: 선형 필터링 및 점수 계산
    for (const FOverlapResult& Overlap : OverlapResults)
    {
        AActor* HitActor = Overlap.GetActor();
        if(!HitActor) continue;

        FVector TargetLoc = HitActor->GetActorLocation();
        FVector ToTarget = (TargetLoc - ViewLoc).GetSafeNormal();
        float Dot = FVector::DotProduct(ViewDir, ToTarget);
        float DistSquared = FVector::DistSquared(ViewLoc, TargetLoc);

        bool bInViewCone = (Dot >= MinimumViewAngle);
        bool bInSurroundingRadius = (DistSquared <= SurroundingRadiusSq);

        if (!bInViewCone && !bInSurroundingRadius) continue;

        UActorComponent* InteractableComponent = HitActor->FindComponentByInterface(UInteractableTarget::StaticClass());
        bool bHasInteractable = HitActor->Implements<UInteractableTarget>() || InteractableComponent != nullptr;
        
        if (!bHasInteractable) continue;

        UObject* TargetObject = HitActor->Implements<UInteractableTarget>() ? Cast<UObject>(HitActor) : Cast<UObject>(InteractableComponent);
        
        float Score = (Dot * 0.7f) - ((DistSquared / (InteractionScanRange * InteractionScanRange)) * 0.3f);
        
        Candidates.Add({ TScriptInterface<IInteractableTarget>(TargetObject), HitActor, Score });
    }

    // 2단계: 점수 순으로 정렬
    if (Candidates.Num() > 1)
    {
        Candidates.Sort();
    }

    TArray<TScriptInterface<IInteractableTarget>> FinalTargets;

    // 3단계: 정렬된 상위 타겟부터 오클루전(LineTrace) 검사 수행
    FCollisionQueryParams OcclusionParams;
    OcclusionParams.AddIgnoredActor(AvatarActor);

    for (const FKausInteractCandidate& Candidate : Candidates)
    {
        OcclusionParams.AddIgnoredActor(Candidate.TargetActor);

        FHitResult Hit;
        bool bIsOccluded = World->LineTraceSingleByChannel(Hit, ViewLoc, Candidate.TargetActor->GetActorLocation(), ECC_Visibility, OcclusionParams);
        
        OcclusionParams.ClearIgnoredSourceObjects(); 
        OcclusionParams.AddIgnoredActor(AvatarActor);

        if (!bIsOccluded)
        {
            FinalTargets.Add(Candidate.TargetInterface);
        }
    }

    //UE_LOG(LogTemp, Warning, TEXT("[RadiusInteractScan] 후보 타겟 수: %d | 최종 타겟 수: %d"), Candidates.Num(), FinalTargets.Num());

    //Update
    UpdateInteractableOptions(InteractionQuery, FinalTargets);

    // Debug
#if ENABLE_DRAW_DEBUG
    if (bShowDebug)
    {
        UE_LOG(LogTemp, Warning, TEXT("[RadiusInteractScan] 사용 중인 TraceProfile: %s | 유효 타겟 수: %d"), *TraceProfile.Name.ToString(), FinalTargets.Num());

        // 1. 최대 스캔 영역 시각화 (청록색)
        DrawDebugSphere(World, ViewLoc, InteractionScanRange, 32, FColor::Cyan, false, InteractionScanRate, 0, 0.5f);

        // 2. 근접(주변) 검색 반경 시각화 (자홍색)
        DrawDebugSphere(World, ViewLoc, SurroundingRadius, 16, FColor::Magenta, false, InteractionScanRate, 0, 1.0f);

        // 3. 전방 시야각 시각화 (노란색 원뿔)
        float ConeHalfAngleRadian = FMath::Acos(0.2f); 
        DrawDebugCone(World, ViewLoc, ViewDir, InteractionScanRange, ConeHalfAngleRadian, ConeHalfAngleRadian, 16, FColor::Yellow, false, InteractionScanRate, 0, 0.5f);

        for (int32 i = 0; i < FinalTargets.Num(); i++)
        {
            AActor* TargetActor = Cast<AActor>(FinalTargets[i].GetObject());
            if (TargetActor)
            {
                FColor LineColor = (i == 0) ? FColor::Green : FColor::Orange;
                float LineThickness = (i == 0) ? 2.0f : 0.5f;

                DrawDebugLine(World, ViewLoc, TargetActor->GetActorLocation(), LineColor, false, InteractionScanRate, 0, LineThickness);
                
                DrawDebugPoint(World, TargetActor->GetActorLocation(), 10.0f, LineColor, false, InteractionScanRate);
            }
        }
    }
#endif
}