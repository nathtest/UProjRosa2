#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADEffectPresetEntry.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADEffectPresetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PresetName;
    
    SQEXSEAD_API FSQEXSEADEffectPresetEntry();
};

