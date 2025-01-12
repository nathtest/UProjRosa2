#pragma once
#include "CoreMinimal.h"
#include "SeqSequenceData.h"
#include "SeqSubSequenceData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqSubSequenceData : public FSeqSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MDepth;
    
    FSeqSubSequenceData();
};

