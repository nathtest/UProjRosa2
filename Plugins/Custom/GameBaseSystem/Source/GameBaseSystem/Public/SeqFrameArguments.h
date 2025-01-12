#pragma once
#include "CoreMinimal.h"
#include "SeqFrameArguments.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqFrameArguments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequenceStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequenceEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartFrameOffset;
    
    FSeqFrameArguments();
};

