#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSoundBaseParameters.h"
#include "SQEXSEAD3DSoundParameters.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEAD3DSoundParameters : public FSQEXSEADSoundBaseParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudibleRange;
    
    SQEXSEAD_API FSQEXSEAD3DSoundParameters();
};

