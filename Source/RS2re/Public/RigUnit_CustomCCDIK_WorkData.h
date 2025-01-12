#pragma once
#include "CoreMinimal.h"
#include "CCDIK.h" //CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=CCDIKChainLink -FallbackName=CCDIKChainLink
#include "CustomCachedRigElement.h"
#include "RigUnit_CustomCCDIK_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_CustomCCDIK_WorkData {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCCDIKChainLink> Chain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomCachedRigElement> CachedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RotationLimitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RotationLimitsPerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomCachedRigElement CachedEffector;
    
    RS2RE_API FRigUnit_CustomCCDIK_WorkData();
};

