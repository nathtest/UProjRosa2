#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADTimingInfo.h"
#include "SQEXSEADMarkerPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADMarkerPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarkerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarkerPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADTimingInfo Timing;
    
    SQEXSEAD_API FSQEXSEADMarkerPointInfo();
};

