#pragma once
#include "CoreMinimal.h"
#include "SeqSubBranch_Common.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqSubBranch_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsBlendAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAnimBlendTime;
    
    FSeqSubBranch_Common();
};

