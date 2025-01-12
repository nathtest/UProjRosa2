#pragma once
#include "CoreMinimal.h"
#include "G01BgmVolumeExtractionStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01BgmVolumeExtractionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> CategoryVolume;
    
    RS2RE_API FG01BgmVolumeExtractionStruct();
};

