#pragma once
#include "CoreMinimal.h"
#include "CalcVelocityJumpBTTask_StandardAISystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=StandardAISystem -ObjectName=CalcVelocityJumpBTTask_StandardAISystem -FallbackName=CalcVelocityJumpBTTask_StandardAISystem
#include "G01CalcVelocityJumpToBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01CalcVelocityJumpToBTTask : public UCalcVelocityJumpBTTask_StandardAISystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverwriteJump;
    
public:
    UG01CalcVelocityJumpToBTTask();

};

