#pragma once
#include "CoreMinimal.h"
#include "EG01AddedPotentCureTimingEnum.h"
#include "G01AddedPotentAilmentCureStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentAilmentCureStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01AddedPotentCureTimingEnum Timing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CureResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinuationTurnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CureImmediately;
    
    RS2RE_API FG01AddedPotentAilmentCureStruct();
};

