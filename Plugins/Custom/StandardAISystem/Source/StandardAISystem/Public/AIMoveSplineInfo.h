#pragma once
#include "CoreMinimal.h"
#include "AIMoveSplinePathInfo.h"
#include "AIMoveSplineInfo.generated.h"

class ASplineBase_StandardAISystem;

USTRUCT(BlueprintType)
struct FAIMoveSplineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASplineBase_StandardAISystem> MSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIMoveSplinePathInfo> MPathInfo;
    
    STANDARDAISYSTEM_API FAIMoveSplineInfo();
};

