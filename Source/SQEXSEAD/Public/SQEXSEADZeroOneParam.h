#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADZeroOneParam.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADZeroOneParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    SQEXSEAD_API FSQEXSEADZeroOneParam();
};

