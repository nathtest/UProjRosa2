#pragma once
#include "CoreMinimal.h"
#include "SeqMainBranch_Common.h"
#include "SeqMainBranch_ChoiceBranchParam.generated.h"

USTRUCT(BlueprintType)
struct FSeqMainBranch_ChoiceBranchParam : public FSeqMainBranch_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MNextTrackIndexList;
    
    GAMEBASESYSTEM_API FSeqMainBranch_ChoiceBranchParam();
};

