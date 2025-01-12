#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VAPartsKey -FallbackName=VAPartsKey
#include "VAPartsKey.h"
#include "G01CameraOffsetSettings.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01CameraOffsetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVAPartsKey HeadKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsUseAbsolute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange MOffsetRangeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MBaseHeadHeight;
    
    FG01CameraOffsetSettings();
};

