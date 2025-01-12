#pragma once
#include "CoreMinimal.h"
#include "RegisterArgsCommon.h"
#include "RegisterArgs2D.generated.h"

USTRUCT(BlueprintType)
struct FRegisterArgs2D : public FRegisterArgsCommon {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FRegisterArgs2D();
};

