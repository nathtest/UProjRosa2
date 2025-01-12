#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "SQEXSEADAutoSeComponentAssetTablePerSurface.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeComponentAssetTablePerSurface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SoundAssetPaths[10];
    
    FSQEXSEADAutoSeComponentAssetTablePerSurface();
};

