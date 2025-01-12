#pragma once
#include "CoreMinimal.h"
#include "Rigs/RigHierarchyDefines.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigElementKey -FallbackName=RigElementKey
#include "RigUnit_CustomCCDIK_RotationLimitPerItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_CustomCCDIK_RotationLimitPerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Limit;
    
    RS2RE_API FRigUnit_CustomCCDIK_RotationLimitPerItem();
};

