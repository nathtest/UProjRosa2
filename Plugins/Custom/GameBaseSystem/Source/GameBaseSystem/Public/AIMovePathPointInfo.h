#pragma once
#include "CoreMinimal.h"
#include "AIMovePathPointInfo.generated.h"

class ATargetPointBase;

USTRUCT(BlueprintType)
struct FAIMovePathPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ATargetPointBase> MTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsRotation;
    
    GAMEBASESYSTEM_API FAIMovePathPointInfo();
};

