#pragma once
#include "CoreMinimal.h"
#include "G01VAAnimInstBasePoseData.h"
#include "G01VAAnimInstBasePoseLyaerInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01VAAnimInstBasePoseLyaerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01VAAnimInstBasePoseData CurrentPoseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01VAAnimInstBasePoseData PrevPoseData;
    
    RS2RE_API FG01VAAnimInstBasePoseLyaerInfo();
};

