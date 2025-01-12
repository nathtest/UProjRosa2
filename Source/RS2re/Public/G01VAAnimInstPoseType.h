#pragma once
#include "CoreMinimal.h"
#include "VATimerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VATimerBase -FallbackName=VATimerBase
#include "EG01VAPoseType.h"
#include "G01VAAnimInstPoseType.generated.h"

USTRUCT(BlueprintType)
struct FG01VAAnimInstPoseType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01VAPoseType PoseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVATimerBase BlendTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01VAPoseType PrevPoseType;
    
    RS2RE_API FG01VAAnimInstPoseType();
};

