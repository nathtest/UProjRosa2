#pragma once
#include "CoreMinimal.h"
#include "CustomMoveToBTTask_StandardAISystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=StandardAISystem -ObjectName=CustomMoveToBTTask_StandardAISystem -FallbackName=CustomMoveToBTTask_StandardAISystem
#include "G01CustomMoveToBTTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01CustomMoveToBTTask : public UCustomMoveToBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFollow;
    
    UG01CustomMoveToBTTask();

};

