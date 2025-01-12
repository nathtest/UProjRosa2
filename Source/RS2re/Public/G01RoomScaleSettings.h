#pragma once
#include "CoreMinimal.h"
#include "G01RoomScaleType.h"
#include "G01RoomScaleSettings.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01RoomScaleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01RoomScaleType ScaleType;
    
    FG01RoomScaleSettings();
};

