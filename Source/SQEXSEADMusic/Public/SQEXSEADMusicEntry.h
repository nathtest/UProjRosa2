#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADMusicEntry.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEADMUSIC_API FSQEXSEADMusicEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LabelName;
    
    FSQEXSEADMusicEntry();
};

