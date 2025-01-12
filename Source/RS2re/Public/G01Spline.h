#pragma once
#include "CoreMinimal.h"
#include "SplineBase_StandardAISystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=StandardAISystem -ObjectName=SplineBase_StandardAISystem -FallbackName=SplineBase_StandardAISystem
#include "G01Spline.generated.h"

class AGeneratorBase;

UCLASS(Blueprintable)
class RS2RE_API AG01Spline : public ASplineBase_StandardAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AGeneratorBase>> ReferredGenerators;
    
public:
    AG01Spline(const FObjectInitializer& ObjectInitializer);

};

