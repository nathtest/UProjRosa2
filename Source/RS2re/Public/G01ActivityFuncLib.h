#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01ActivityID.h"
#include "G01ActivityFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class RS2RE_API UG01ActivityFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01ActivityFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_StartActivity(const UObject* InWorldContext, FG01ActivityID InActivityID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_SetActivityAvailability(const UObject* InWorldContext, FG01ActivityID InActivityID, const bool InIsEnable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_ResetActivity(const UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_RequestActivityTerminate(const UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_LaunchActivity(const UObject* InWorldContext, FG01ActivityID InActivityID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static bool Func_IsExistActivatedActivity(const UObject* InWorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_CompleteActivity(const UObject* InWorldContext, FG01ActivityID InActivityID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_CancelActivity(const UObject* InWorldContext, FG01ActivityID InActivityID);
    
};

