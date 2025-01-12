#pragma once
#include "CoreMinimal.h"
#include "G01LipsyncPlayArgs.h"
#include "G01GeneralLipsyncPresetPlayArgs.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01GeneralLipsyncPresetPlayArgs : public FG01LipsyncPlayArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaySeconds;
    
    FG01GeneralLipsyncPresetPlayArgs();
};

