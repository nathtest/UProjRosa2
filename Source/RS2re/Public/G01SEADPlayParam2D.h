#pragma once
#include "CoreMinimal.h"
#include "SQEXSEAD2DSoundParameters.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEAD2DSoundParameters -FallbackName=SQEXSEAD2DSoundParameters
#include "G01SEADPlayParamCommon.h"
#include "G01SEADPlayParam2D.generated.h"

USTRUCT(BlueprintType)
struct FG01SEADPlayParam2D : public FG01SEADPlayParamCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEAD2DSoundParameters Params;
    
    RS2RE_API FG01SEADPlayParam2D();
};

