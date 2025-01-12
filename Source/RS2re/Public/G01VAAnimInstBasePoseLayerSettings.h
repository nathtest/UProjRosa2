#pragma once
#include "CoreMinimal.h"
#include "EG01VABasePoseAnimLayerType.h"
#include "G01VAAnimInstBasePoseData.h"
#include "G01VAAnimInstBasePoseLayerSettings.generated.h"

USTRUCT(BlueprintType)
struct FG01VAAnimInstBasePoseLayerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EG01VABasePoseAnimLayerType, FG01VAAnimInstBasePoseData> BasePoseDataMap;
    
    RS2RE_API FG01VAAnimInstBasePoseLayerSettings();
};

