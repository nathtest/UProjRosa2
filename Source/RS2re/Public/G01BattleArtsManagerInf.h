#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EG01AttackActionType.h"
#include "EG01BattleArtsAttribute.h"
#include "EG01BattleArtsOrigin.h"
#include "EG01BattleArtsType.h"
#include "EG01BattleCommandSource.h"
#include "G01BattleArmorArtsTableRow.h"
#include "G01BattleArtsEffectSetting.h"
#include "G01BattleArtsHitSlomoSetting.h"
#include "G01BattleArtsLearnStatus.h"
#include "G01BattleArtsLearnTableRow.h"
#include "G01BattleArtsLearnUnit.h"
#include "G01BattleArtsLinkSetting.h"
#include "G01BattleArtsSequenceSetting.h"
#include "G01BattleArtsTableRow.h"
#include "G01BattleArtsTagKeyStruct.h"
#include "G01BattleCounterArtsSetting.h"
#include "G01BattleWeaponArtsTableRow.h"
#include "G01FXPointInfo.h"
#include "G01ItemShieldDataStruct.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "G01BattleArtsManagerInf.generated.h"

class AActor;
class AG01SequenceControllerBase;
class UG01ArtsBehaviourBase;
class UG01ArtsScriptBase;
class ULevelSequence;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleArtsManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleArtsManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_UnregisterResourceDisplace(FName InRowNameFrom);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_UnregisterAllResourceDisplace();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_ReleaseOnBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_RegisterResourceDisplace(FName InRowNameFrom, FName InRowNameTo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AG01SequenceControllerBase* Inf_G01BattleArtsManager_PriorityLoadArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& ReRequested);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_MakeSpellArtsLearnList(AActor* InSource, FName InArtsName, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_MakeSkillArtsLearnList(AActor* InSource, FName InArtsName, FName InWeaponId, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_MakeFathomArtsLearnUnit(AActor* InSource, FName InArtsName, bool& ReSuccess, FG01BattleArtsLearnUnit& ReLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_MakeCounterArtsLearnUnit(AActor* InSource, FName InArtsName, FName InWeaponId, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_MakeArtsOriginTransform(EG01BattleArtsOrigin InOriginType, AActor* InSourceActor, const TArray<AActor*>& InTargetActorList, FTransform& ReTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_MakeArtsLinkTextIdList(const TArray<FName>& InArtsNameList, TArray<FText>& ReList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_LookupWeaponArtsData(FName InArtsID, bool& OutIsExist, FG01BattleWeaponArtsTableRow& OutWeaponArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_LookupArtsLearnData(FName InArtsID, bool& OutIsExist, FG01BattleArtsLearnTableRow& OutLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_LookupArtsDataByFathomName(FName InFathomName, bool& ReIsExist, FG01BattleArtsTableRow& ReArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_LookupArtsData(FName InArtsName, bool& ReIsExist, FG01BattleArtsTableRow& ReArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_LookupArmorArtsData(FName InItemID, bool& OutIsExist, FG01BattleArmorArtsTableRow& OutArmorArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AG01SequenceControllerBase* Inf_G01BattleArtsManager_LoadArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& ReRequested);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_IsLoadedArtsResource(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_IsExcludeAtConfuse(FName InArtsID, bool& OutIsExclude);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_IsAllyTeamSelection(FName InArtsID, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetWeaponCategoryForArtsType(EG01BattleArtsType InArtsType, FName& ReWeaponCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleArtsManager_GetUseNewAttr();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetRankedArtsId(const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, FName InBaseArtsId, FName& ReRankedArtsId, int32& ReArtsRank);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetNormalAttackArts(FName InWeaponId, FName& ReArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetLearnSequence(FName InArtsID, AActor* InSourceActor, AG01SequenceControllerBase*& ReSequenceCtrl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetFathomLearnSequence(AG01SequenceControllerBase*& ReSequenceCtrl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetFathomArtsId(FName InArtsName, bool& ReIsExist, FName& ReFathomArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetCounterLearnSequence(FName InArtsID, AActor* InSourceActor, AG01SequenceControllerBase*& OutSequenceCtrl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetBaseRankArtsId(FName InArtsID, bool& OutIsExist, FName& OutBaseArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetArtsTypeForWeaponCategory(FName InWeaponCategory, EG01BattleArtsType& OutArtsType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetArtsType(FName InArtsName, EG01BattleArtsType& ReArtsType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetArtsTagList(FName InArtsID, TArray<FG01BattleArtsTagKeyStruct>& OutTagList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetArtsDisplayName(FName InArtsID, FText& ReDisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetArtsBpCost(FName InArtsName, int32& ReBpCost);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetArtsBehaviourPriority(FName InBehaviourName, int32& OutPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetArtsAttrList(FName InArtsName, TArray<EG01BattleArtsAttribute>& ReAttrList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetArtsActionType(FName InArtsName, EG01AttackActionType& ReActionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetAllWeaponArtsId(TArray<FName>& OutWeaponArtsList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetAllFathomLearnSequence(AG01SequenceControllerBase*& ReSequenceCtrl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_GetAllArtsData(TMap<FName, FG01BattleArtsTableRow>& OutArtsList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsTrainingLearnStatus(FName InArtsID, bool& OutFound, FG01BattleArtsLearnStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsTrainingAutoPriority(FName InArtsID, bool& OutFound, int32& OutPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsResourceByTarget(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, AG01SequenceControllerBase*& ReSeqCont, FG01BattleArtsSequenceSetting& ReSeqSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& ReFound, AG01SequenceControllerBase*& ReSeqCont, FG01BattleArtsSequenceSetting& ReSeqSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsLinkSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsID, bool& OutFound, FG01BattleArtsLinkSetting& OutSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsLearnList(FName InArtsID, bool& OutFound, TArray<FName>& OutLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsInspirationLearnStatus(FName InArtsID, bool& OutFound, FG01BattleArtsLearnStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsHitSlomoSetting(EG01BattleCommandSource InSourceType, FName InSourceVisualId, FName InTargetVisualId, FName InArtsID, bool& OutFound, FG01BattleArtsHitSlomoSetting& OutSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsEffectSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, FG01BattleArtsEffectSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsCounterSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, FG01BattleCounterArtsSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsCastVFXClass(AActor* InSource, FName InArtsName, bool InIsAssistArts, int32 InArtsRank, TSoftClassPtr<UObject>& ReVFXClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FindArtsCastFxClass(AActor* InSource, FName InArtsName, TSoftClassPtr<UObject>& ReEffectClass, TArray<FG01FXPointInfo>& ReBasePointInfo, TArray<FG01FXPointInfo>& ReTargetPointInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_FilterUsableSkillList(FName InWeaponId, UPARAM(Ref) TArray<FName>& InArts, TArray<FName>& ReFilteredArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CreateArtsScript(FName InArtsID, UG01ArtsScriptBase*& OutArtsScript);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CreateArtsBehaviour(FName InBehaviourName, FName InBehaviourParam, UG01ArtsBehaviourBase*& OutArtsBehaviour);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_ConvertItemIDToArtsID(FName InItemName, bool& ReIsExist, FName& ReArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_ConvertArtsToLinkTextId(const TArray<FName>& InArtsIdList, TArray<FText>& OutStartNameIdList, TArray<FText>& OutEndNameIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_ConvertArtsIDToItemID(FName InArtsID, bool& ReIsExist, FName& ReItemName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CollectArtsSequenceAsset(EG01BattleCommandSource InSourceType, FName InSourceVisualId, FName InTargetVisualId, FName InArtsID, TArray<TSoftObjectPtr<ULevelSequence>>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CheckLoadedArtsResource(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReIsLoaded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CheckFathomHasTalent(FName InFathomId, int32 InInspirationId, bool& OutHasTalent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CheckArtsHasTalent(FName InArtsID, int32 InInspirationId, bool& OutHasTalent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CheckArtsHasTag(FName InArtsID, const FG01BattleArtsTagKeyStruct InTag, bool& OutHasTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CheckArtsCanTrainingLearn(FName InArtsID, const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, bool& OutCanLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CheckArtsCanInspirationLearn(FName InArtsID, const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, bool& OutCanLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CheckActivateShield(const FG01BattleArtsTableRow& InArts, const FG01ItemShieldDataStruct& InShield, bool& OutActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CalcFathomArtsLearnRate(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01BattleArtsLearnUnit& InLearnUnit, int32 InLearnLv, float& RePercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CalcCounterArtsLearnRate(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01BattleArtsLearnUnit& InLearnUnit, int32 InLearnLv, float& RePercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsManager_CalcArtsLearnRate(AActor* InSource, UPARAM(Ref) FG01BattleArtsLearnUnit& InLearnUnit, int32 InLearnLv, float& RePercent);
    
};

