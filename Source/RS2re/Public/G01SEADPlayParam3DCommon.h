#pragma once
#include "CoreMinimal.h"
#include "SQEXSEAD3DSoundParameters.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEAD3DSoundParameters -FallbackName=SQEXSEAD3DSoundParameters
#include "G01SEADPlayParamCommon.h"
#include "G01SEADPlayParam3DCommon.generated.h"

USTRUCT(BlueprintType)
struct FG01SEADPlayParam3DCommon : public FG01SEADPlayParamCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEAD3DSoundParameters Params;
    
    RS2RE_API FG01SEADPlayParam3DCommon();
};

