#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSoundInfo.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    SQEXSEAD_API FSQEXSEADSoundInfo();
};

