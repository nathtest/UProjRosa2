#pragma once
#include "CoreMinimal.h"
#include "SeqMarkedFrameRange.h"
#include "SeqMarkedFramePlayRate.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqMarkedFramePlayRate : public FSeqMarkedFrameRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    FSeqMarkedFramePlayRate();
};

