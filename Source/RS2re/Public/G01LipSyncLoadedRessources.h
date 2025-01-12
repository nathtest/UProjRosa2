#pragma once
#include "CoreMinimal.h"
#include "G01GeneralLipPresetID.h"
#include "G01LipSyncResource.h"
#include "G01LipSyncLoadedRessources.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01LipSyncLoadedRessources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01LipSyncResource> MResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01GeneralLipPresetID, FG01LipSyncResource> GeneralLipResources;
    
    FG01LipSyncLoadedRessources();
};

