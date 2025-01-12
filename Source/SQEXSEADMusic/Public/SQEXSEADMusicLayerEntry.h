#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADMusicLayerEntry.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEADMUSIC_API FSQEXSEADMusicLayerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayerName;
    
    FSQEXSEADMusicLayerEntry();
};

