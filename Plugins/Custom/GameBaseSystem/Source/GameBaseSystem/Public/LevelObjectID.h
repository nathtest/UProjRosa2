#pragma once
#include "CoreMinimal.h"
#include "LevelObjectIdCore.h"
#include "LevelObjectID.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FLevelObjectID : public FLevelObjectIdCore {
    GENERATED_BODY()
public:
    FLevelObjectID();
};
FORCEINLINE uint32 GetTypeHash(const FLevelObjectID) { return 0; }

