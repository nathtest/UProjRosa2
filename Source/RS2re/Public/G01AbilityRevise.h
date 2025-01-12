#pragma once
#include "CoreMinimal.h"
#include "G01AbilityRevise.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityRevise {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minimum;
    
    FG01AbilityRevise();
};

