#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADTimingInfo.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADTimingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Bar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Beat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sec;
    
    SQEXSEAD_API FSQEXSEADTimingInfo();
};

