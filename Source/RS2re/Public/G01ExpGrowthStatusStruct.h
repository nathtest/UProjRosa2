#pragma once
#include "CoreMinimal.h"
#include "G01ExpGrowthStatusStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ExpGrowthStatusStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeedExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrowthParam;
    
    FG01ExpGrowthStatusStruct();
};

