#pragma once
#include "CoreMinimal.h"
#include "EG01BattleVoiceCategory.h"
#include "EG01BattleVoiceTriggerType.h"
#include "G01AddedPotentObserverInf.h"
#include "G01BattleCharacterObserverInf.h"
#include "G01BattleCommandManagerObserverInf.h"
#include "G01BattleManagerObserverInf.h"
#include "G01BattleSystemController.h"
#include "G01BattleVoiceFloatConstKeyStruct.h"
#include "G01BattleVoiceIntConstKeyStruct.h"
#include "G01BattleVoiceTriggerTableRow.h"
#include "G01LipSyncLoadedRessources.h"
#include "G01VoiceLoadInfo.h"
#include "G01BattleVoiceController.generated.h"

class AActor;
class AG01BattleVoiceController;
class UDataTable;
class UG01BattleArtsManagerAccessor;
class UG01BattleCommandManagerAccessor;
class UG01BattleManagerAccessor;
class UG01BattleVoicePlayerComponent;
class UG01LipSyncManagerAccessor;
class UG01VoiceManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleVoiceController : public AG01BattleSystemController, public IG01BattleManagerObserverInf, public IG01BattleCommandManagerObserverInf, public IG01BattleCharacterObserverInf, public IG01AddedPotentObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleManagerAccessor* BattleManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleCommandManagerAccessor* BattleCommandManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleArtsManagerAccessor* BattleArtsManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01VoiceManagerAccessor* VoiceManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01LipSyncManagerAccessor* LipSyncManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BattleVoiceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BattleVoiceTriggerTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* IntConstTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FloatConstTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AG01BattleVoiceController* VoiceCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EG01BattleVoiceTriggerType, FG01BattleVoiceTriggerTableRow> TriggerRowMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, EG01BattleVoiceTriggerType> AnimEventKeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UG01BattleVoicePlayerComponent*> PartyVoicePlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UG01BattleVoicePlayerComponent*> EnemyVoicePlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UG01BattleVoicePlayerComponent*> PartyVoicePlayerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UG01BattleVoicePlayerComponent*> EnemyVoicePlayerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool VoiceLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01VoiceLoadInfo VoiceLoadInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LipSyncLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01LipSyncLoadedRessources LipSyncResources;
    
public:
    AG01BattleVoiceController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadVoiceData();
    
    UFUNCTION(BlueprintCallable)
    void SetupVoicePlayer();
    
    UFUNCTION(BlueprintCallable)
    void Release();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessAnimKey(FName InKey, UG01BattleVoicePlayerComponent* InVoicePlayer, bool& OutIsProcess, bool& OutIsPlay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCompleteVoiceLoad(const FG01VoiceLoadInfo& InLoadInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteLipSyncLoad(const FG01LipSyncLoadedRessources& InResources);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadVoiceData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsLoadingVoiceData(bool& OutIsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnableDebugLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTriggerPriority(EG01BattleVoiceTriggerType InTrigger, int32& OutPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTriggerNeedsLipSync(EG01BattleVoiceTriggerType InTrigger, bool& OutNeeds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTriggerGroupID(EG01BattleVoiceTriggerType InTrigger, FName& OutGroupId);
    
    UFUNCTION(BlueprintCallable)
    void GetTriggerCategory(EG01BattleVoiceTriggerType InTrigger, EG01BattleVoiceCategory& OutCategory);
    
    UFUNCTION(BlueprintCallable)
    void GetPartyVoicePlayerList(TArray<UG01BattleVoicePlayerComponent*>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartyVoicePlayer(AActor* InChara, UG01BattleVoicePlayerComponent*& OutVoicePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIntConst(FG01BattleVoiceIntConstKeyStruct InKey, int32& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFloatConst(FG01BattleVoiceFloatConstKeyStruct InKey, float& OutValue);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyVoicePlayerList(TArray<UG01BattleVoicePlayerComponent*>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEnemyVoicePlayer(AActor* InChara, UG01BattleVoicePlayerComponent*& OutVoicePlayer);
    
    UFUNCTION(BlueprintCallable)
    void GetCharaVoicePlayerList(TArray<UG01BattleVoicePlayerComponent*>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharaVoicePlayer(AActor* InChara, UG01BattleVoicePlayerComponent*& OutVoicePlayer);
    
    UFUNCTION(BlueprintCallable)
    void FindTriggerFromAnimKey(FName InKey, bool& OutFound, EG01BattleVoiceTriggerType& OutTrigger);
    

    // Fix for true pure virtual functions not being implemented
};

