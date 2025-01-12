#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "InputAxisMappingName.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FInputAxisMappingName : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FInputAxisMappingName();
};

