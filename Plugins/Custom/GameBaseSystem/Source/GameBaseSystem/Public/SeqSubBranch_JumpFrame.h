#pragma once
#include "CoreMinimal.h"
#include "SeqSubBranch_Common.h"
#include "SeqSubBranch_JumpFrame.generated.h"

USTRUCT(BlueprintType)
struct FSeqSubBranch_JumpFrame : public FSeqSubBranch_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MJumpFrame;
    
    GAMEBASESYSTEM_API FSeqSubBranch_JumpFrame();
};

