#pragma once
#include "CoreMinimal.h"
#include "AIMoveSplinePathInfo.generated.h"

class ARotateTargetBase_StandardAISystem;

USTRUCT(BlueprintType)
struct FAIMoveSplinePathInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MPathIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARotateTargetBase_StandardAISystem> MRotateTargetActor;
    
    STANDARDAISYSTEM_API FAIMoveSplinePathInfo();
};

