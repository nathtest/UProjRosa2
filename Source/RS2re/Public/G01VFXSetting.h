#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "G01VFXBaseSetting.h"
#include "G01VFXBaseToTargetSetting.h"
#include "G01VFXSetting.generated.h"

USTRUCT(BlueprintType)
struct FG01VFXSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VFXBaseSetting VFXBaseSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VFXBaseToTargetSetting VFXBaseToTargetSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VFXPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VFXRotationOffset;
    
    RS2RE_API FG01VFXSetting();
};

