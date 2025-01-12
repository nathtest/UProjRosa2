#pragma once
#include "CoreMinimal.h"
#include "CustomJumpBTTask_StandardAISystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=StandardAISystem -ObjectName=CustomJumpBTTask_StandardAISystem -FallbackName=CustomJumpBTTask_StandardAISystem
#include "G01CustomJumpToBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01CustomJumpToBTTask : public UCustomJumpBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFollow;
    
    UG01CustomJumpToBTTask();

};

