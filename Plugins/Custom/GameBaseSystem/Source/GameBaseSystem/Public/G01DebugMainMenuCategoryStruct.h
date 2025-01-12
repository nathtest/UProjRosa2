#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "G01DebugMainMenuCategoryStruct.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FG01DebugMainMenuCategoryStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01DebugMainMenuCategoryStruct();
};

