#pragma once
#include "CoreMinimal.h"
#include "MoveToBaseBTTask_StandardAISystem.h"
#include "TurnToBTTask_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UTurnToBTTask_StandardAISystem : public UMoveToBaseBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleTolerance;
    
    UTurnToBTTask_StandardAISystem();

};

