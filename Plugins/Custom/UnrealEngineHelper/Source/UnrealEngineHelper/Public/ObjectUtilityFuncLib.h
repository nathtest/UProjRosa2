#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ObjectUtilityFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNREALENGINEHELPER_API UObjectUtilityFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UObjectUtilityFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static FString Func_GetWorldName(const UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static FName Func_GetWorldFName(const UObject* InWorldContext);
    
};

