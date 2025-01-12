#pragma once
#include "CoreMinimal.h"
#include "SplineMoveBTTask_StandardAISystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=StandardAISystem -ObjectName=SplineMoveBTTask_StandardAISystem -FallbackName=SplineMoveBTTask_StandardAISystem
#include "G01SplineMoveBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01SplineMoveBTTask : public USplineMoveBTTask_StandardAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsFly;
    
public:
    UG01SplineMoveBTTask();

};

