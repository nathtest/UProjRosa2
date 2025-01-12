#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h"
#include "SeqMainBranch_Common.h"
#include "SeqMainBranch_FlagBranchParam.generated.h"

USTRUCT(BlueprintType)
struct FSeqMainBranch_FlagBranchParam : public FSeqMainBranch_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct MFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MTrueNextTrackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MFalseNextTrackIndex;
    
    GAMEBASESYSTEM_API FSeqMainBranch_FlagBranchParam();
};

