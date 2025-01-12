#pragma once
#include "CoreMinimal.h"
#include "SeqGateRangeArray.h"
#include "SeqGateData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqGateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqGateRangeArray> RangePerRow;
    
    FSeqGateData();
};

