#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "SQEXSEADAutoSeComponentAssetTableNonSurface.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeComponentAssetTableNonSurface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SoundAssetPaths[18];
    
    FSQEXSEADAutoSeComponentAssetTableNonSurface();
};

