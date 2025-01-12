#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSoundBaseParameters.h"
#include "SQEXSEAD2DSoundParameters.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEAD2DSoundParameters : public FSQEXSEADSoundBaseParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LRPan;
    
    SQEXSEAD_API FSQEXSEAD2DSoundParameters();
};

