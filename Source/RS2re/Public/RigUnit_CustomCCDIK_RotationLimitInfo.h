#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CustomCCDIK_RotationLimitPerItem.h"
#include "RigUnit_CustomCCDIK_RotationLimitInfo.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_CustomCCDIK_RotationLimitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigUnit_CustomCCDIK_RotationLimitPerItem> RotationLimits;
    
    RS2RE_API FRigUnit_CustomCCDIK_RotationLimitInfo();
};

