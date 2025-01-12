#pragma once
#include "CoreMinimal.h"
#include "G01ArtsDelayHitNotify.h"
#include "G01ArtsDelayHitRequest.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ArtsDelayHitRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultiIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelaySec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSequenceExtend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ArtsDelayHitNotify HitNotify;
    
    FG01ArtsDelayHitRequest();
};

