#pragma once
#include "CoreMinimal.h"
#include "SeqSubBranch_Common.h"
#include "SeqSubBranch_FrameJumpByChoice.generated.h"

USTRUCT(BlueprintType)
struct FSeqSubBranch_FrameJumpByChoice : public FSeqSubBranch_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MJumpFrameList;
    
    GAMEBASESYSTEM_API FSeqSubBranch_FrameJumpByChoice();
};

