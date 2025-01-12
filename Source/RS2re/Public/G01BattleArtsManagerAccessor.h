#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
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
#include "G01BattleArtsManagerAccessor.generated.h"

class AActor;
class AG01SequenceControllerBase;
class UG01ArtsScriptBase;
class ULevelSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleArtsManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01BattleArtsManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterResourceDisplace(FName InRowNameFrom);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAllResourceDisplace();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseOnBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    void RegisterResourceDisplace(FName InRowNameFrom, FName InRowNameTo);
    
    UFUNCTION(BlueprintCallable)
    AG01SequenceControllerBase* PriorityLoadArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& OutRequested);
    
    UFUNCTION(BlueprintCallable)
    void MakeSpellArtsLearnList(AActor* InSource, FName InArtsName, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList);
    
    UFUNCTION(BlueprintCallable)
    void MakeSkillArtsLearnList(AActor* InSource, FName InArtsName, FName InWeaponId, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList);
    
    UFUNCTION(BlueprintCallable)
    void MakeFathomArtsLearnUnit(AActor* InSource, FName InArtsName, bool& ReSuccess, FG01BattleArtsLearnUnit& ReLearn);
    
    UFUNCTION(BlueprintCallable)
    void MakeCounterArtsLearnUnit(AActor* InSource, FName InArtsName, FName InWeaponId, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList);
    
    UFUNCTION(BlueprintCallable)
    void MakeArtsOriginTransform(EG01BattleArtsOrigin InOriginType, AActor* InSourceActor, const TArray<AActor*>& InTargetActorList, FTransform& ReTransform);
    
    UFUNCTION(BlueprintCallable)
    void MakeArtsLinkTextIdList(const TArray<FName>& InArtsNameList, TArray<FText>& ReList);
    
    UFUNCTION(BlueprintCallable)
    void LookupWeaponArtsData(FName InArtsID, bool& OutIsExist, FG01BattleWeaponArtsTableRow& OutWeaponArts);
    
    UFUNCTION(BlueprintCallable)
    void LookupArtsLearnData(FName InArtsID, bool& OutIsExist, FG01BattleArtsLearnTableRow& OutLearn);
    
    UFUNCTION(BlueprintCallable)
    void LookupArtsDataByFathomName(FName InFathomName, bool& ReIsExist, FG01BattleArtsTableRow& ReArts);
    
    UFUNCTION(BlueprintCallable)
    void LookupArtsData(FName InArtsName, bool& ReIsExist, FG01BattleArtsTableRow& ReArts);
    
    UFUNCTION(BlueprintCallable)
    void LookupArmorArtsData(FName InItemID, bool& OutIsExist, FG01BattleArmorArtsTableRow& OutArmorArts);
    
    UFUNCTION(BlueprintCallable)
    AG01SequenceControllerBase* LoadArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& ReRequested);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsLoadedArtsResource(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsExcludeAtConfuse(FName InArtsID, bool& OutIsExclude);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsAllyTeamSelection(FName InArtsID, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWeaponCategoryForArtsType(EG01BattleArtsType InArtsType, FName& ReWeaponCategory);
    
    UFUNCTION(BlueprintCallable)
    bool GetUseNewAttr();
    
    UFUNCTION(BlueprintCallable)
    void GetRankedArtsId(const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, FName InBaseArtsId, FName& ReRankedArtsId, int32& ReArtsRank);
    
    UFUNCTION(BlueprintCallable)
    void GetNormalAttackArts(FName InWeaponId, FName& ReArtsId);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnSequence(FName InArtsID, AActor* InSourceActor, AG01SequenceControllerBase*& ReSequenceCtrl);
    
    UFUNCTION(BlueprintCallable)
    void GetFathomLearnSequence(AG01SequenceControllerBase*& ReSequenceCtrl);
    
    UFUNCTION(BlueprintCallable)
    void GetFathomArtsId(FName InArtsName, bool& ReIsExist, FName& ReFathomArtsId);
    
    UFUNCTION(BlueprintCallable)
    void GetCounterLearnSequence(FName InArtsID, AActor* InSourceActor, AG01SequenceControllerBase*& OutSequenceCtrl);
    
    UFUNCTION(BlueprintCallable)
    void GetBaseRankArtsId(FName InArtsID, bool& OutIsExist, FName& OutBaseArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArtsTypeForWeaponCategory(FName InWeaponCategory, EG01BattleArtsType& OutArtsType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArtsType(FName InArtsName, EG01BattleArtsType& ReArtsType);
    
    UFUNCTION(BlueprintCallable)
    void GetArtsTagList(FName InArtsID, TArray<FG01BattleArtsTagKeyStruct>& OutTagList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArtsBpCost(FName InArtsName, int32& ReBpCost);
    
    UFUNCTION(BlueprintCallable)
    void GetArtsAttrList(FName InArtsName, TArray<EG01BattleArtsAttribute>& ReAttrList);
    
    UFUNCTION(BlueprintCallable)
    void GetArtsActionType(FName InArtsName, EG01AttackActionType& ReActionType);
    
    UFUNCTION(BlueprintCallable)
    void GetAllWeaponArtsId(TArray<FName>& OutWeaponArtsList);
    
    UFUNCTION(BlueprintCallable)
    void GetAllFathomLearnSequence(AG01SequenceControllerBase*& ReSequenceCtrl);
    
    UFUNCTION(BlueprintCallable)
    void GetAllArtsData(TMap<FName, FG01BattleArtsTableRow>& OutArtsList);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsTrainingLearnStatus(FName InArtsID, bool& OutFound, FG01BattleArtsLearnStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsTrainingAutoPriority(FName InArtsID, bool& OutFound, int32& OutPriority);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsResourceByTarget(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, AG01SequenceControllerBase*& ReSeqCont, FG01BattleArtsSequenceSetting& ReSeqSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& ReFound, AG01SequenceControllerBase*& ReSeqCont, FG01BattleArtsSequenceSetting& ReSeqSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsLinkSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsID, bool& OutFound, FG01BattleArtsLinkSetting& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsLearnList(FName InArtsID, bool& OutFound, TArray<FName>& OutLearn);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsInspirationLearnStatus(FName InArtsID, bool& OutFound, FG01BattleArtsLearnStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsHitSlomoSetting(EG01BattleCommandSource InSourceType, FName InSourceVisualId, FName InTargetVisualId, FName InArtsID, bool& OutFound, FG01BattleArtsHitSlomoSetting& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsEffectSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, FG01BattleArtsEffectSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsCounterSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, FG01BattleCounterArtsSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsCastVFXClass(AActor* InSource, FName InArtsName, bool InIsAssistArts, int32 InArtsRank, TSoftClassPtr<UObject>& ReVFXClass);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsCastFxClass(AActor* InSource, FName InArtsName, TSoftClassPtr<UObject>& ReEffectClass, TArray<FG01FXPointInfo>& ReBasePointInfo, TArray<FG01FXPointInfo>& ReTargetPointInfo);
    
    UFUNCTION(BlueprintCallable)
    void FilterUsableSkillList(FName InWeaponId, UPARAM(Ref) TArray<FName>& InArts, TArray<FName>& ReFilteredArts);
    
    UFUNCTION(BlueprintCallable)
    void CreateArtsScript(FName InArtsID, UG01ArtsScriptBase*& OutArtsScript);
    
    UFUNCTION(BlueprintCallable)
    void ConvertItemIDToArtsID(FName InItemName, bool& ReIsExist, FName& ReArtsId);
    
    UFUNCTION(BlueprintCallable)
    void ConvertArtsToLinkTextId(const TArray<FName>& InArtsIdList, TArray<FText>& OutStartNameIdList, TArray<FText>& OutEndNameIdList);
    
    UFUNCTION(BlueprintCallable)
    void ConvertArtsIDToItemID(FName ReArtsId, bool& ReIsExist, FName& InItemName);
    
    UFUNCTION(BlueprintCallable)
    void CollectArtsSequenceAsset(EG01BattleCommandSource InSourceType, FName InSourceVisualId, FName InTargetVisualId, FName InArtsID, TArray<TSoftObjectPtr<ULevelSequence>>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckLoadedArtsResource(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReIsLoaded);
    
    UFUNCTION(BlueprintCallable)
    void CheckFathomHasTalent(FName InFathomId, int32 InInspirationId, bool& OutHasTalent);
    
    UFUNCTION(BlueprintCallable)
    void CheckArtsHasTalent(FName InArtsID, int32 InInspirationId, bool& OutHasTalent);
    
    UFUNCTION(BlueprintCallable)
    void CheckArtsHasTag(FName InArtsID, const FG01BattleArtsTagKeyStruct InTag, bool& OutHasTag);
    
    UFUNCTION(BlueprintCallable)
    void CheckArtsCanTrainingLearn(FName InArtsID, const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, bool& OutCanLearn);
    
    UFUNCTION(BlueprintCallable)
    void CheckArtsCanInspirationLearn(FName InArtsID, const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, bool& OutCanLearn);
    
    UFUNCTION(BlueprintCallable)
    void CheckActivateShield(const FG01BattleArtsTableRow& InArts, const FG01ItemShieldDataStruct& InShield, bool& OutActivate);
    
    UFUNCTION(BlueprintCallable)
    void CalcFathomArtsLearnRate(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01BattleArtsLearnUnit& InLearnUnit, int32 InLearnLv, float& RePercent);
    
    UFUNCTION(BlueprintCallable)
    void CalcCounterArtsLearnRate(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01BattleArtsLearnUnit& InLearnUnit, int32 InLearnLv, float& RePercent);
    
    UFUNCTION(BlueprintCallable)
    void CalcArtsLearnRate(AActor* InSource, UPARAM(Ref) FG01BattleArtsLearnUnit& InLearnUnit, int32 InLearnLv, float& RePercent);
    
};

