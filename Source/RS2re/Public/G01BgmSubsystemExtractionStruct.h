#pragma once
#include "CoreMinimal.h"
#include "G01BgmLogExtractionStruct.h"
#include "G01BgmVolumeExtractionStruct.h"
#include "G01BgmSubsystemExtractionStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01BgmSubsystemExtractionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BgmVolumeExtractionStruct volumeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BgmLogExtractionStruct BgmLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUseRemakeBGM;
    
    RS2RE_API FG01BgmSubsystemExtractionStruct();
};

