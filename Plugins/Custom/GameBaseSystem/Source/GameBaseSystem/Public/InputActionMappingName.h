#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "InputActionMappingName.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FInputActionMappingName : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FInputActionMappingName();
};

