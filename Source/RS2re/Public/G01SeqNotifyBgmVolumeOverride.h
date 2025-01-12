#pragma once
#include "CoreMinimal.h"
#include "G01SeqNotifyBgmVolumeParams.h"
#include "G01SeqNotifyBgmVolumePresetTableRow.h"
#include "G01SeqNotifyBgmVolumeOverride.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SeqNotifyBgmVolumeOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqNotifyBgmVolumeParams Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqNotifyBgmVolumePresetTableRow Preset;
    
    FG01SeqNotifyBgmVolumeOverride();
};

