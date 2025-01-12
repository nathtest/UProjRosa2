#pragma once
#include "CoreMinimal.h"
#include "HRangeUpDownParam.generated.h"

USTRUCT(BlueprintType)
struct FHRangeUpDownParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsLimitSignRandom;
    
    GAMEBASESYSTEM_API FHRangeUpDownParam();
};

