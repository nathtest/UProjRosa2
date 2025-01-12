#pragma once
#include "CoreMinimal.h"
#include "SeqGateRange.h"
#include "SeqGateRangeArray.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqGateRangeArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqGateRange> Array;
    
    FSeqGateRangeArray();
};

