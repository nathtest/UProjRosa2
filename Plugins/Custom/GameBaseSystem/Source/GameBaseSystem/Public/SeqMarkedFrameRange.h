#pragma once
#include "CoreMinimal.h"
#include "SeqMarkedFrameID.h"
#include "SeqMarkedFrameRange.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqMarkedFrameRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqMarkedFrameID BeginFrameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqMarkedFrameID EndFrameID;
    
    FSeqMarkedFrameRange();
};

