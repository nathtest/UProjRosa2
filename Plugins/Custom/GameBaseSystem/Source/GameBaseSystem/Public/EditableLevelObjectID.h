#pragma once
#include "CoreMinimal.h"
#include "LevelObjectID.h"
#include "EditableLevelObjectID.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FEditableLevelObjectID : public FLevelObjectID {
    GENERATED_BODY()
public:
    FEditableLevelObjectID();
};

