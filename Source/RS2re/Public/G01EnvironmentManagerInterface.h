#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01EnvPresetDataAssetID.h"
#include "G01EnvironmentManagerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01EnvironmentManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01EnvironmentManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_SetupEnvPreset(UClass* InEnvPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_SetupEnvironmentBySetting(const FString& InEnvSettingName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_SetupEnvironmentByEnvPresetDataAsset(FG01EnvPresetDataAssetID InEnvPresetDataAssetID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_RevertEnvironmentPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_RevertEnv();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01FXManager_IsCompleteSetupEnvironment();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_GetCurrentEnvPresetDataAsset(FG01EnvPresetDataAssetID& InEnvPresetDataAssetID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01FXManager_CompareEnvPresetDataAsset(FG01EnvPresetDataAssetID InEnvPresetDataAssetID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_BackupEnvironmentPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FXManager_BackupEnv();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01EnvironmentManager_UpdateEnvironment();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01EnvironmentManager_SetEnvSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01EnvironmentManager_SetBrightness(float inBrightness);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01EnvironmentManager_RegistOverrideEnvPresetDataAsset(FG01EnvPresetDataAssetID InEnvPresetDataAssetID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01EnvironmentManager_IsSetEnvSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01EnvironmentManager_ClearEnvSetting();
    
};

