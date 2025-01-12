#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADMusicControlSectionOverrideParameter.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADMusicControlSectionOverrideParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideFadeInTime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideFadeOutTime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideFadeOutTime;
    
    SQEXSEADMUSICSEQUENCERTRACKS_API FSQEXSEADMusicControlSectionOverrideParameter();
};

