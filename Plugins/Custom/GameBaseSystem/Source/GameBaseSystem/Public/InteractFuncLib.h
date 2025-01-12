#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGenInitVisibility.h"
#include "GenerateConditions.h"
#include "GeneratorConditionCache.h"
#include "InteractFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UInteractFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInteractFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static bool Func_InitGenerateConditions(const UObject* InWorldContextObject, UPARAM(Ref) FGenerateConditions& InOutConditions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Func_HasAnyConditions(const FGenerateConditions& InConditions);
    
    UFUNCTION(BlueprintCallable)
    static EGenInitVisibility Func_GetReverseVisibility(EGenInitVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static EGenInitVisibility Func_CheckGenerateConditions(const UObject* InWorldContextObject, const FGenerateConditions& InConditions, FGeneratorConditionCache& OutCache);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static bool Func_CheckConditionSection(const UObject* InWorldContextObject, const FGenerateConditions& InConditions);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static bool Func_CheckConditionFlag(const UObject* InWorldContextObject, const FGenerateConditions& InConditions);
    
};

