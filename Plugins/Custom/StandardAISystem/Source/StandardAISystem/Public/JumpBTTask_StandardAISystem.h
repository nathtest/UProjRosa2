#pragma once
#include "CoreMinimal.h"
#include "MoveToBaseBTTask_StandardAISystem.h"
#include "JumpBTTask_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UJumpBTTask_StandardAISystem : public UMoveToBaseBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleThreshold;
    
    UJumpBTTask_StandardAISystem();

};

