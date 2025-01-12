#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EG01BattlePreLoaderLifeTime.h"
#include "G01BattlePreLoaderCache.h"
#include "G01BattlePreLoaderRequestArg.h"
#include "G01BattlePreLoaderComponent.generated.h"

class AManagerBase;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattlePreLoaderComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableBlockLoad;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AManagerBase* BattleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EG01BattlePreLoaderLifeTime, FG01BattlePreLoaderCache> CachedObjectMap;
    
public:
    UG01BattlePreLoaderComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartAsyncLoad();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCacheFromLifeTime(EG01BattlePreLoaderLifeTime InLifeTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleCharacterSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlayInEditor(bool& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void IsLoading(bool& Out) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleManager(AManagerBase*& Out);
    
    UFUNCTION(BlueprintCallable)
    void AddAsyncLoadObjectList(const TArray<TSoftObjectPtr<UObject>>& InObjectList, const FG01BattlePreLoaderRequestArg& InArg);
    
    UFUNCTION(BlueprintCallable)
    void AddAsyncLoadClassList(const TArray<TSoftClassPtr<UObject>>& InClassList, const FG01BattlePreLoaderRequestArg& InArg);
    
};

