#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h"
#include "SeqSubBranch_Common.h"
#include "SeqSubBranch_FrameJumpByFlag.generated.h"

USTRUCT(BlueprintType)
struct FSeqSubBranch_FrameJumpByFlag : public FSeqSubBranch_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct MFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MTrueJumpFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MFalseJumpFrame;
    
    GAMEBASESYSTEM_API FSeqSubBranch_FrameJumpByFlag();
};

