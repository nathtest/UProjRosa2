#pragma once
#include "CoreMinimal.h"
#include "EnvironmentManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EnvironmentManagerBase -FallbackName=EnvironmentManagerBase
#include "G01EnvironmentManagerInterface.h"
#include "G01EnvironmentManagerObserverInf.h"
#include "G01EnvironmentManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01EnvironmentManager : public AEnvironmentManagerBase, public IG01EnvironmentManagerInterface, public IG01EnvironmentManagerObserverInf {
    GENERATED_BODY()
public:
    AG01EnvironmentManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupEnvPreset(UClass* InEnvPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnvSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RevertEnv();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSetEnvSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearEnvSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BackupEnv();
    

    // Fix for true pure virtual functions not being implemented
};

