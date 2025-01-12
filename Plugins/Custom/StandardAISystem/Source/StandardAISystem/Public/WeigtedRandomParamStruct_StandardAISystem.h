#pragma once
#include "CoreMinimal.h"
#include "WeigtedRandomParamStruct_StandardAISystem.generated.h"

USTRUCT(BlueprintType)
struct FWeigtedRandomParamStruct_StandardAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomRate;
    
    STANDARDAISYSTEM_API FWeigtedRandomParamStruct_StandardAISystem();
};

