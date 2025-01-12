#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "InteractCategoryID.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FInteractCategoryID : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FInteractCategoryID();
};

