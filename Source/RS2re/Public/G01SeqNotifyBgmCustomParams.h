#pragma once
#include "CoreMinimal.h"
#include "G01SeqNotifyBgmCustomParams.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqNotifyBgmCustomParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float VolumeMultiplier;
    
    RS2RE_API FG01SeqNotifyBgmCustomParams();
};

