#pragma once
#include "CoreMinimal.h"
#include "G01VAAnimInstPoseBlendSettings.generated.h"

USTRUCT(BlueprintType)
struct FG01VAAnimInstPoseBlendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableLipSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableLookControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableFacial;
    
    RS2RE_API FG01VAAnimInstPoseBlendSettings();
};

