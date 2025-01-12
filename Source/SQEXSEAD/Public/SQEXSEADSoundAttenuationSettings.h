#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSoundAttenuationSettings.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADSoundAttenuationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudibleRange;
    
    FSQEXSEADSoundAttenuationSettings();
};

