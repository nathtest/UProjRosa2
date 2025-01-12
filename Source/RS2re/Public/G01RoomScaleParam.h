#pragma once
#include "CoreMinimal.h"
#include "G01RoomScaleParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01RoomScaleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    FG01RoomScaleParam();
};

