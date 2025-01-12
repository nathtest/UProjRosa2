#pragma once
#include "CoreMinimal.h"
#include "G01AddedPotentAilmentGrowthStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentAilmentGrowthStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotGrowthAtResult;
    
    RS2RE_API FG01AddedPotentAilmentGrowthStruct();
};

