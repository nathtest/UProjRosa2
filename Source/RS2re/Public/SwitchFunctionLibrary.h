#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SwitchFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class RS2RE_API USwitchFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwitchFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool Switch_EnableCpuBoostMode();
    
    UFUNCTION(BlueprintCallable)
    static bool Switch_EnableConsoleMode();
    
    UFUNCTION(BlueprintCallable)
    static bool Switch_DisableCpuBoostMode();
    
};

