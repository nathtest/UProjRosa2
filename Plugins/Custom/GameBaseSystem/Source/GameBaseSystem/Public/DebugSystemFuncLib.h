#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EDebugSystemLogType.h"
#include "DebugSystemFuncLib.generated.h"

class ULevelStreaming;
class UObject;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UDebugSystemFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugSystemFuncLib();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void Func_SetEnablePlayFromHere(const UObject* InWorldContextObject, const bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool Func_IsShowGameplayDebugger(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static void Func_IsPlayFromHere(const UObject* InWorldContextObject, bool& OutIsPlayFromHere);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static void Func_IsEnablePlayFromHere(const UObject* InWorldContextObject, bool& OutEnable);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static TArray<ULevelStreaming*> Func_GetAllLevelStreamings(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void Func_AddGameLogData(const UObject* InWorldContextObject, EDebugSystemLogType InLogType, const FString& InLog, float InDuration, const FString& InHeader, bool InIsPrintToGame, bool InIsPrintToScreen, bool InIsPrintToLog, FLinearColor InColor);
    
};

