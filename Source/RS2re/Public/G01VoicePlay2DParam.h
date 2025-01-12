#pragma once
#include "CoreMinimal.h"
#include "SQEXSEAD2DSoundParameters.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEAD2DSoundParameters -FallbackName=SQEXSEAD2DSoundParameters
#include "G01VoicePlay2DParam.generated.h"

USTRUCT(BlueprintType)
struct FG01VoicePlay2DParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEAD2DSoundParameters Params;
    
    RS2RE_API FG01VoicePlay2DParam();
};

