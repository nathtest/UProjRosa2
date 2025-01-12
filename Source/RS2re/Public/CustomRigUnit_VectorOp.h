#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h" //CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit -FallbackName=RigUnit
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CustomRigUnit_VectorOp.generated.h"

USTRUCT(BlueprintType)
struct FCustomRigUnit_VectorOp : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Argument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Result;
    
    RS2RE_API FCustomRigUnit_VectorOp();
};

