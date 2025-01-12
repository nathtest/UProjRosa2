#pragma once
#include "CoreMinimal.h"
#include "SoundPlayParamCommon.generated.h"

USTRUCT(BlueprintType)
struct FSoundPlayParamCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MVolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MPitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MStartTime;
    
    GAMEBASESYSTEM_API FSoundPlayParamCommon();
};

