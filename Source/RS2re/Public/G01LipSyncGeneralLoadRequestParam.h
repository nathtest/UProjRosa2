#pragma once
#include "CoreMinimal.h"
#include "G01GeneralLipPresetID.h"
#include "G01LipSyncGeneralLoadRequestParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01LipSyncGeneralLoadRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01GeneralLipPresetID> PresetIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAsyncLoad;
    
    FG01LipSyncGeneralLoadRequestParam();
};

