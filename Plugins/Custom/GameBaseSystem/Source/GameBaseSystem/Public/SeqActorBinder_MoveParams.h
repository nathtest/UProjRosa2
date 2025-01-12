#pragma once
#include "CoreMinimal.h"
#include "SeqActorBinder_MoveParams.generated.h"

USTRUCT(BlueprintType)
struct FSeqActorBinder_MoveParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool MIsEnableFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MFootIKMultiplier;
    
    GAMEBASESYSTEM_API FSeqActorBinder_MoveParams();
};

