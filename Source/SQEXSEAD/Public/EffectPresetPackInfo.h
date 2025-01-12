#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADEffectPresetEntry.h"
#include "EffectPresetPackInfo.generated.h"

USTRUCT(BlueprintType)
struct FEffectPresetPackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADEffectPresetEntry PresetEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    SQEXSEAD_API FEffectPresetPackInfo();
};

