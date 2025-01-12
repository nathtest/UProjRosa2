#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "LevelTransitionKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FLevelTransitionKeyStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FLevelTransitionKeyStruct();
};

