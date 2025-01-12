#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagAccessParam -FallbackName=FlagAccessParam
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "FlagSystemObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemObserverInf -FallbackName=FlagSystemObserverInf
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "QuestManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestManagerObserverInf -FallbackName=QuestManagerObserverInf
#include "G01AbilityAchievementInfo.h"
#include "G01AbilityCharaStatusEffect.h"
#include "G01AbilityManagerInf.h"
#include "G01AbilityPerCharacter.h"
#include "G01AbilityPerClass.h"
#include "G01AbilityScriptOwnerInf.h"
#include "G01AddedPotentObserverInf.h"
#include "G01BattleCharacterObserverInf.h"
#include "G01BattleCommandManagerObserverInf.h"
#include "G01BattleManagerObserverInf.h"
#include "G01CharacterID.h"
#include "G01InventorManagerObserverInf.h"
#include "G01PartyManagerObserverInf.h"
#include "G01AbilityManager.generated.h"

class AG01QuestObjectBase;
class UG01AbilityLearnUnit;
class UG01AbilityManagerDataAsset;
class UG01AbilitySettingDataAsset;

UCLASS(Blueprintable)
class RS2RE_API AG01AbilityManager : public AManagerBase, public IG01AbilityManagerInf, public IG01AbilityScriptOwnerInf, public IG01BattleManagerObserverInf, public IG01BattleCharacterObserverInf, public IG01PartyManagerObserverInf, public IG01InventorManagerObserverInf, public IG01AddedPotentObserverInf, public IQuestManagerObserverInf, public IFlagSystemObserverInf, public IG01BattleCommandManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01AbilityManagerDataAsset* ManagerDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01AbilitySettingDataAsset* SettingDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DBG_ForceAllOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DBG_ForceAllLearn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DBG_ForceAllMastery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DBG_ForceAllActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OpenLevelQuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LearnQuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct OpenMasteryFlagId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UG01AbilityLearnUnit*> AbilityLearnUnitMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01CharacterID, FG01AbilityPerCharacter> AbilityPerCharacterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01CharacterID, FG01AbilityCharaStatusEffect> AbilityAddedEffectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01CharacterID> SimulateCharacterIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01AbilityPerClass> AbilityPerClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityPerClass AbilityForAnyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> ClassIdToTagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FFlagIDListViewStruct, FName> FlagIdToAbilityIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FFlagIDListViewStruct, FFlagAccessParam> FlagIdToAccessParamMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, UClass*> AbilityScriptClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentOpenLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01QuestObjectBase* OpenLevelQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> LearnItemIdToAbilityIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MasteryItemIdToAbilityIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndSetupAllAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndQuestRestore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityAchievementInfo AchievementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInBattle;
    
public:
    AG01AbilityManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAbilityMasteryInBattle(FName InAbilityItemId);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityLearnInBattle(FName InAbilityItemId);
    

    // Fix for true pure virtual functions not being implemented
};

