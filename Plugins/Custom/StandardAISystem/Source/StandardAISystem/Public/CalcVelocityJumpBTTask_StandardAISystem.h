#pragma once
#include "CoreMinimal.h"
#include "JumpBTTask_StandardAISystem.h"
#include "CalcVelocityJumpBTTask_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UCalcVelocityJumpBTTask_StandardAISystem : public UJumpBTTask_StandardAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Arc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsJumpLimit;
    
public:
    UCalcVelocityJumpBTTask_StandardAISystem();

};

