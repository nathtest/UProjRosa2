#pragma once
#include "CoreMinimal.h"
#include "CustomRigUnit_VectorOp.h"
#include "CustomRigUnit_MaxCompoVector.generated.h"

USTRUCT(BlueprintType)
struct FCustomRigUnit_MaxCompoVector : public FCustomRigUnit_VectorOp {
    GENERATED_BODY()
public:
    RS2RE_API FCustomRigUnit_MaxCompoVector();
};

