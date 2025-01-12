#pragma once
#include "CoreMinimal.h"
#include "CustomMoveToBTTask_StandardAISystem.h"
#include "CustomJumpBTTask_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UCustomJumpBTTask_StandardAISystem : public UCustomMoveToBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleThreshold;
    
    UCustomJumpBTTask_StandardAISystem();

};

