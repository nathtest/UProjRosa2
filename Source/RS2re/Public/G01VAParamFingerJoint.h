#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "G01VAParamFingerJoint.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01VAParamFingerJoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Rotation;
    
    FG01VAParamFingerJoint();
};

