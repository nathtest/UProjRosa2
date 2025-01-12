#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEADMusic -ObjectName=SQEXSEADMusicLabelEntry -FallbackName=SQEXSEADMusicLabelEntry
#include "ESQEXSEADMusicControlKey.h"
#include "SQEXSEADMusicLayerControlPayload.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADMusicLayerControlPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEXSEADMusicControlKey CotrolKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADMusicLabelEntry MusicLabel;
    
    SQEXSEADMUSICSEQUENCERTRACKS_API FSQEXSEADMusicLayerControlPayload();
};

