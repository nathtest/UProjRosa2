#pragma once
#include "CoreMinimal.h"
#include "G01VAParamFingerJoint.h"
#include "G01VAParamFinger.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01VAParamFinger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAParamFingerJoint FirstJoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAParamFingerJoint SecondJoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAParamFingerJoint ThirdJoint;
    
    FG01VAParamFinger();
};

