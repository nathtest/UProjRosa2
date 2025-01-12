#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ESaveDataSubsystemState.h"
#include "NotifyPostLoadParam.h"
#include "NotifyPostSaveParam.h"
#include "NotifyPostUnloadParam.h"
#include "NotifyPreLoadParam.h"
#include "NotifyPreSaveParam.h"
#include "NotifyPreUnloadParam.h"
#include "NotifySaveInitParam.h"
#include "NotifyUnloadParam.h"
#include "SaveDataSubsystemObserverInf.generated.h"

class USaveGameDataCore;

UINTERFACE(Blueprintable, MinimalAPI)
class USaveDataSubsystemObserverInf : public UInterface {
    GENERATED_BODY()
};

class ISaveDataSubsystemObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_SaveDataSubsystem_OnUpdateSaveData(USaveGameDataCore* InSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_SaveDataSubsystem_OnUnload(const FNotifyUnloadParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_SaveDataSubsystem_OnPreUnload(const FNotifyPreUnloadParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_SaveDataSubsystem_OnPreSave(const FNotifyPreSaveParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_SaveDataSubsystem_OnPreLoad(const FNotifyPreLoadParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_SaveDataSubsystem_OnPreChangeState(ESaveDataSubsystemState InCurrent, ESaveDataSubsystemState InNext);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_SaveDataSubsystem_OnPostUnload(const FNotifyPostUnloadParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_SaveDataSubsystem_OnPostSave(const FNotifyPostSaveParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_SaveDataSubsystem_OnPostLoad(const FNotifyPostLoadParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_SaveDataSubsystem_OnPostChangeState(ESaveDataSubsystemState InPrev, ESaveDataSubsystemState InCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_SaveDataSubsystem_OnInitialize(const FNotifySaveInitParam& InParam);
    
};

