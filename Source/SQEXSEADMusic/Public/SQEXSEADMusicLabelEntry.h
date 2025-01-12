#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADMusicLabelEntry.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEADMUSIC_API FSQEXSEADMusicLabelEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LabelName;
    
    FSQEXSEADMusicLabelEntry();
};

