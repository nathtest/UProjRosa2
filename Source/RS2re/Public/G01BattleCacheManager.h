#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01BattleCacheLoadObjectArg.h"
#include "G01BattleCacheLoadRequestArg.h"
#include "G01BattleCacheLoadUnit.h"
#include "G01BattleCacheOnLoadedEventDelegate.h"
#include "G01BattleVoiceTableRow.h"
#include "Templates/SubclassOf.h"
#include "G01BattleCacheManager.generated.h"

class AActor;
class AG01BattleCharacterBase;
class AG01CharacterVisualActor;
class UActorComponent;
class UObject;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleCacheManager : public AManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleCacheLoadObjectArg> LoadRequestObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleCacheLoadUnit> AsyncLoadUnitList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableBlockLoad;
    
public:
    AG01BattleCacheManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestAsyncLoad(const FG01BattleCacheLoadRequestArg& InLoadRequest, FG01BattleCacheOnLoadedEvent InLoadedCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlayInEditor(bool& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetVoiceIDs(FG01BattleVoiceTableRow InRow) const;
    
    UFUNCTION(BlueprintCallable)
    void GetVADefaultObject(TSubclassOf<AG01CharacterVisualActor> InObject, AG01CharacterVisualActor*& OutDefault);
    
    UFUNCTION(BlueprintCallable)
    void GetDefaultObject(UClass* InObject, UObject*& OutDefault);
    
    UFUNCTION(BlueprintCallable)
    void GetBCDefaultObject(TSubclassOf<AG01BattleCharacterBase> InObject, AG01BattleCharacterBase*& OutDefault);
    
    UFUNCTION(BlueprintCallable)
    void FindComponents(AActor*& OutTemplate, TArray<UActorComponent*>& OutComponents, TSubclassOf<AActor> InActorClass, TSubclassOf<UActorComponent> InComponentClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddInitializeAsyncSoftObjects(const TArray<TSoftObjectPtr<UObject>>& InObjects);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAsyncLoadObject(const FG01BattleCacheLoadObjectArg& InLoadObject);
    
};

