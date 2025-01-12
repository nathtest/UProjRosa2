#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EConfigurationType.h"
#include "ECustomWorldType.h"
#include "EPlatformType.h"
#include "ERegionType.h"
#include "Templates/SubclassOf.h"
#include "EngineSystemFuncLib.generated.h"

class AActor;
class APlayerController;
class UDataTable;
class UMediaSource;
class UObject;
class UPlatformMediaSource;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UEngineSystemFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEngineSystemFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static ECustomWorldType FuncGetWorldType(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void Func_UseSoftwareMouseCursor(const UObject* InWorldContextObject, APlayerController* InPlayerController, bool InIsUse);
    
    UFUNCTION(BlueprintCallable)
    static void Func_SetPlatformMediaSourceList(UPlatformMediaSource* InMedia, const FString& InKey, UMediaSource* InMediaSource);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void Func_SetGameLocalizationPreviewCulture(const UObject* InWorldContextObject, const FString& InCulture);
    
    UFUNCTION(BlueprintCallable)
    static void Func_OpenAsset(UObject* InAsset);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ObjectModify(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool Func_IsTrial(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static void Func_IsPlayFromHere(const UObject* InWorldContextObject, bool& ReIsOk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static void Func_IsGameLocalizationPreviewEnable(const UObject* InWorldContextObject, bool& ReIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool Func_IsEnableDebug(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool Func_IsConsoleCommandStatActive(const UObject* InWorldContextObject, const FString& InConsoleName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static void Func_GetWorldType(const UObject* InWorldContextObject, ECustomWorldType& ReWorldType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static ERegionType Func_GetRegionType(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static void Func_GetPlayFromHereData(const UObject* InWorldContextObject, FTransform& RespawnData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static EPlatformType Func_GetPlatformType(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, UMediaSource*> Func_GetPlatformMediaSourceList(UPlatformMediaSource* InMedia);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static EConfigurationType Func_GetConfigurationType(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Func_FixupRedirector(const TArray<UObject*>& InRedirectorList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void Func_EnableGameLocalizationPreview(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void Func_DisableGameLocalizationPreview(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Func_DataTableReimport(UDataTable* InDataTable);
    
    UFUNCTION(BlueprintCallable)
    static void Func_CreateAssetByActor(const FString& InAssetName, const FString& InPackagePath, TSubclassOf<AActor> InParentClass, UObject*& ReCreateObject);
    
    UFUNCTION(BlueprintCallable)
    static void Func_ConvertBlueprintToObject(UObject* InBlueprint, UObject*& ReObject);
    
    UFUNCTION(BlueprintCallable)
    static void Func_CallFunction(UObject* InObject, FName InFunctionName);
    
};

