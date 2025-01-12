#pragma once
#include "CoreMinimal.h"
#include "RangeCurvesParam.generated.h"

USTRUCT(BlueprintType)
struct FRangeCurvesParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMaxRange;
    
    GAMEBASESYSTEM_API FRangeCurvesParam();
};

