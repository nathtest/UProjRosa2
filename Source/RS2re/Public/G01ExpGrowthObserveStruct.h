#pragma once
#include "CoreMinimal.h"
#include "G01ExpGrowthObserveStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ExpGrowthObserveStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeedExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrowthParam;
    
    FG01ExpGrowthObserveStruct();
};

