#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EAISpeed.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAISpeed -FallbackName=EAISpeed
#include "G01AIControllerBase.h"
#include "Perception/AIPerceptionComponent.h"
#include "G01EnemyAIControllerBase.generated.h"

class AActor;
class UAIPerceptionComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01EnemyAIControllerBase : public AG01AIControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* AIPerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingHight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoseSightTime;
    
    AG01EnemyAIControllerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetUpEnemyBB(float InSearchRadius, float InSearchHight, float InMinWaitTime, float InMaxWaitTime, float InSearchTime, float InIntimidateTime, float InFieldAttackRange);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSightSense(float InSightRadius, float InLoseSightRadius, float InAngleDegrees);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeed(EAISpeed InMoveType);
    
    UFUNCTION(BlueprintCallable)
    void SetHearingSense(float InHearingRange);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PerceptionUpdate(const TArray<AActor*> InActorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHeadLocation(FVector& OutLocation, FRotator& OutRotation) const;
    
};

