#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UEActorUtilityFuncLib.generated.h"

class AActor;
class ULevel;
class UWorld;

UCLASS(Blueprintable)
class UNREALENGINEHELPER_API UUEActorUtilityFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUEActorUtilityFuncLib();

    UFUNCTION(BlueprintCallable)
    static void Func_GetActorSubLevel(const AActor* InActor, bool& OutIsValid, UWorld*& OutSubLevel);
    
    UFUNCTION(BlueprintCallable)
    static void Func_GetActorLevel(const AActor* InActor, bool& OutIsValid, ULevel*& OutLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void Func_GetActorHiddenInGame(const AActor* InActor, bool& OutIsHidden);
    
};

