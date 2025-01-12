#pragma once
#include "CoreMinimal.h"
#include "Rigs/RigHierarchyDefines.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigElementKeyCollection -FallbackName=RigElementKeyCollection
#include "Units/HighLevel/RigUnit_HighlevelBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_HighlevelBaseMutable -FallbackName=RigUnit_HighlevelBaseMutable
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_CustomCCDIK_RotationLimitInfo.h"
#include "RigUnit_CustomCCDIK_WorkData.h"
#include "RigUnit_CustomCCDIKPerItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_CustomCCDIKPerItem : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform EffectorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartFromTail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseRotationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_CustomCCDIK_RotationLimitInfo RotationLimitInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_CustomCCDIK_WorkData WorkData;
    
    RS2RE_API FRigUnit_CustomCCDIKPerItem();
};

