#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADModeInfo.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADModeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ModeIndex;
    
    SQEXSEAD_API FSQEXSEADModeInfo();
};

