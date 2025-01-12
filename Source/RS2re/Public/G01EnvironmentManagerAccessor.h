#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01EnvPresetDataAssetID.h"
#include "G01EnvironmentManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01EnvironmentManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01EnvironmentManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateEnvironment();
    
    UFUNCTION(BlueprintCallable)
    void SetupEnvironmentBySetting(const FString& InEnvSettingName);
    
    UFUNCTION(BlueprintCallable)
    void SetupEnvironmentByEnvPresetDataAsset(FG01EnvPresetDataAssetID InEnvPresetDataAssetID);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvSetting();
    
    UFUNCTION(BlueprintCallable)
    void SetBrightness(float inBrightness);
    
    UFUNCTION(BlueprintCallable)
    void RevertEnvironmentPreset();
    
    UFUNCTION(BlueprintCallable)
    void RegistOverrideEnvPresetDataAsset(FG01EnvPresetDataAssetID InEnvPresetDataAssetID);
    
    UFUNCTION(BlueprintCallable)
    bool IsSetEnvSetting();
    
    UFUNCTION(BlueprintCallable)
    bool IsCompleteSetupEnvironment();
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentEnvPresetDataAsset(FG01EnvPresetDataAssetID& InEnvPresetDataAssetID);
    
    UFUNCTION(BlueprintCallable)
    bool CompareEnvPresetDataAsset(FG01EnvPresetDataAssetID InEnvPresetDataAssetID);
    
    UFUNCTION(BlueprintCallable)
    void ClearEnvSetting();
    
    UFUNCTION(BlueprintCallable)
    void BackupEnvironmentPreset();
    
};

