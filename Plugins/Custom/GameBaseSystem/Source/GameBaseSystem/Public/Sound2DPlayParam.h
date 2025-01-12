#pragma once
#include "CoreMinimal.h"
#include "SoundPlayParamCommon.h"
#include "Sound2DPlayParam.generated.h"

USTRUCT(BlueprintType)
struct FSound2DPlayParam : public FSoundPlayParamCommon {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FSound2DPlayParam();
};

