#pragma once
#include "CoreMinimal.h"
#include "G01TextTag.h"
#include "G01TextTagArray.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01TextTagArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01TextTag> Array;
    
    FG01TextTagArray();
};

