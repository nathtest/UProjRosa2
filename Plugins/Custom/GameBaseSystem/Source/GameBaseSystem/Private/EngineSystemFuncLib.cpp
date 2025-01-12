#include "EngineSystemFuncLib.h"
#include "Templates/SubclassOf.h"

UEngineSystemFuncLib::UEngineSystemFuncLib() {
}

ECustomWorldType UEngineSystemFuncLib::FuncGetWorldType(const UObject* InWorldContextObject) {
    return ECustomWorldType::CUSTOM_WORLD_TYPE_NONE;
}

void UEngineSystemFuncLib::Func_UseSoftwareMouseCursor(const UObject* InWorldContextObject, APlayerController* InPlayerController, bool InIsUse) {
}

void UEngineSystemFuncLib::Func_SetPlatformMediaSourceList(UPlatformMediaSource* InMedia, const FString& InKey, UMediaSource* InMediaSource) {
}

void UEngineSystemFuncLib::Func_SetGameLocalizationPreviewCulture(const UObject* InWorldContextObject, const FString& InCulture) {
}

void UEngineSystemFuncLib::Func_OpenAsset(UObject* InAsset) {
}

void UEngineSystemFuncLib::Func_ObjectModify(UObject* InObject) {
}

bool UEngineSystemFuncLib::Func_IsTrial(const UObject* InWorldContextObject) {
    return false;
}

void UEngineSystemFuncLib::Func_IsPlayFromHere(const UObject* InWorldContextObject, bool& ReIsOk) {
}

void UEngineSystemFuncLib::Func_IsGameLocalizationPreviewEnable(const UObject* InWorldContextObject, bool& ReIsEnable) {
}

bool UEngineSystemFuncLib::Func_IsEnableDebug(const UObject* InWorldContextObject) {
    return false;
}

bool UEngineSystemFuncLib::Func_IsConsoleCommandStatActive(const UObject* InWorldContextObject, const FString& InConsoleName) {
    return false;
}

void UEngineSystemFuncLib::Func_GetWorldType(const UObject* InWorldContextObject, ECustomWorldType& ReWorldType) {
}

ERegionType UEngineSystemFuncLib::Func_GetRegionType(const UObject* InWorldContextObject) {
    return ERegionType::JP;
}

void UEngineSystemFuncLib::Func_GetPlayFromHereData(const UObject* InWorldContextObject, FTransform& RespawnData) {
}

EPlatformType UEngineSystemFuncLib::Func_GetPlatformType(const UObject* InWorldContextObject) {
    return EPlatformType::PLATFORM_TYPE_WINDOWS;
}

TMap<FString, UMediaSource*> UEngineSystemFuncLib::Func_GetPlatformMediaSourceList(UPlatformMediaSource* InMedia) {
    return TMap<FString, UMediaSource*>();
}

EConfigurationType UEngineSystemFuncLib::Func_GetConfigurationType(const UObject* InWorldContextObject) {
    return EConfigurationType::DEBUG;
}

void UEngineSystemFuncLib::Func_FixupRedirector(const TArray<UObject*>& InRedirectorList) {
}

void UEngineSystemFuncLib::Func_EnableGameLocalizationPreview(const UObject* InWorldContextObject) {
}

void UEngineSystemFuncLib::Func_DisableGameLocalizationPreview(const UObject* InWorldContextObject) {
}

void UEngineSystemFuncLib::Func_DataTableReimport(UDataTable* InDataTable) {
}

void UEngineSystemFuncLib::Func_CreateAssetByActor(const FString& InAssetName, const FString& InPackagePath, TSubclassOf<AActor> InParentClass, UObject*& ReCreateObject) {
}

void UEngineSystemFuncLib::Func_ConvertBlueprintToObject(UObject* InBlueprint, UObject*& ReObject) {
}

void UEngineSystemFuncLib::Func_CallFunction(UObject* InObject, FName InFunctionName) {
}


