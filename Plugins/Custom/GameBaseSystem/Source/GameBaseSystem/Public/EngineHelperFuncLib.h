#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EngineHelperFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UEngineHelperFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEngineHelperFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UObject> Func_StringToSoftObjectPtr(const FString& InStr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoftObjectPath Func_StringToSoftObjectPath(const FString& InStr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<UObject> Func_StringToSoftClassPtr(const FString& InStr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<UObject> Func_SoftObjectPtrToSoftClassPtr(const TSoftObjectPtr<UObject> InSoftObjectPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static bool Func_IsStatEnabled(const UObject* InWorldContext, const FString& InStatName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void Func_CallUpdateCameraManager(const UObject* InWorldContext, int32 InPlayerIndex, float InDeltaTime);
    
};

