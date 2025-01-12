#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01UniqueSenseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01UniqueSenseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UG01UniqueSenseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDefalutSightSense(float InSightHight, float InSightRadius, float InLoseSightRadius, float InVisionAngleDegrees);
    
    UFUNCTION(BlueprintCallable)
    void SetDefalutHearingSense(float InHearingHight, float InHearingRange);
    
};

