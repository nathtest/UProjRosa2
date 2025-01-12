#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADMusicLayerCache.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADMusicLayerCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModeName;
    
    SQEXSEADMUSIC_API FSQEXSEADMusicLayerCache();
};

