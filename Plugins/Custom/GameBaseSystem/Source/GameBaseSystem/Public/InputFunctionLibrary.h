#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "InputFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetupInputMappings(bool InForce);
    
};

