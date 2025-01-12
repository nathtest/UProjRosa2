#pragma once
#include "CoreMinimal.h"
#include "SeqMainBranch_Common.h"
#include "SeqMainBranch_NextTrackIndexParam.generated.h"

USTRUCT(BlueprintType)
struct FSeqMainBranch_NextTrackIndexParam : public FSeqMainBranch_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MNextTrackIndex;
    
    GAMEBASESYSTEM_API FSeqMainBranch_NextTrackIndexParam();
};

