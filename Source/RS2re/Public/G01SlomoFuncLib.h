#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01SlomoFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class RS2RE_API UG01SlomoFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01SlomoFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void Func_SetSlomo(const UObject* InWorldContextObject, FName InTag, float InSlomo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void Func_RemoveSlomo(const UObject* InWorldContextObject, FName InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static void Func_GetCurrentSlomo(const UObject* InWorldContextObject, float& OutSlomo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void Func_FindSlomo(const UObject* InWorldContextObject, FName InTag, bool& OutFound, float& OutSlomo);
    
};

