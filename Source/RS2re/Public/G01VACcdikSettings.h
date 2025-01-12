#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CustomCCDIK_RotationLimitInfo.h"
#include "G01VACcdikSettings.generated.h"

USTRUCT(BlueprintType)
struct FG01VACcdikSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseRotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_CustomCCDIK_RotationLimitInfo RotationLimitInfo;
    
    RS2RE_API FG01VACcdikSettings();
};

