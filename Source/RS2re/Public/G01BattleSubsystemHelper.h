#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSubsystemHelper.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameInstanceSubsystemHelper -FallbackName=GameInstanceSubsystemHelper
#include "SaveDataSubsystemObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataSubsystemObserverInf -FallbackName=SaveDataSubsystemObserverInf
#include "G01BattleManagerObserverInf.h"
#include "G01PartyManagerObserverInf.h"
#include "G01BattleSubsystemHelper.generated.h"

class AActor;
class UG01BattleCacheSettingDataAsset;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleSubsystemHelper : public UGameInstanceSubsystemHelper, public ISaveDataSubsystemObserverInf, public IG01PartyManagerObserverInf, public IG01BattleManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UG01BattleCacheSettingDataAsset*> SettingDataAssetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UG01BattleCacheSettingDataAsset* CurrentCacheSetting;
    
public:
    UG01BattleSubsystemHelper();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCurrentCacheSettingKey(FName& Out);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetCurrentCacheSetting(UG01BattleCacheSettingDataAsset*& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    void FilterArtsLoadResource(AActor* InSource, const TArray<FName> InArtsIdList, TArray<FName>& OutFilteredList);
    
    UFUNCTION(BlueprintCallable)
    void DecideCacheSetting();
    
    UFUNCTION(BlueprintCallable)
    void AddArtsHistory(AActor* InSource, FName InArtsID);
    

    // Fix for true pure virtual functions not being implemented
};

