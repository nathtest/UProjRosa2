#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "InputMappingName.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FInputMappingName : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FInputMappingName();
};

