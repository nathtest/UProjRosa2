#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EffectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EffectID -FallbackName=EffectID
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "VFXID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXID -FallbackName=VFXID
#include "EG01BattleArtsAttribute.h"
#include "EG01BattleArtsLearnType.h"
#include "EG01BattleArtsType.h"
#include "EG01BattleCommandSource.h"
#include "G01AddedPotentObserverInf.h"
#include "G01ArtsBehaviourTableRow.h"
#include "G01BattleArtsEffectSetting.h"
#include "G01BattleArtsHitSlomoSetting.h"
#include "G01BattleArtsLearnRate.h"
#include "G01BattleArtsLearnStatus.h"
#include "G01BattleArtsLearnUnit.h"
#include "G01BattleArtsLinkSetting.h"
#include "G01BattleArtsManagerInf.h"
#include "G01BattleArtsResourceMaster.h"
#include "G01BattleArtsResourceTableRow.h"
#include "G01BattleArtsSequenceSetting.h"
#include "G01BattleArtsTableRow.h"
#include "G01BattleArtsTagKeyStruct.h"
#include "G01BattleCharacterObserverInf.h"
#include "G01BattleCounterArtsSetting.h"
#include "G01BattleManagerObserverInf.h"
#include "G01BattleSkillLearn.h"
#include "G01BattleSpellLearn.h"
#include "G01ItemShieldDataStruct.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "G01BattleArtsManager.generated.h"

class AActor;
class AG01SequenceControllerBase;
class UDataTable;
class UG01BattleArtsDataAsset;
class UG01FXManagerAccessor;
class UG01ItemManagerAccessor;
class UG01VFXManagerAccessor;
class ULevelSequence;
class USequencerManagerAccessCompo;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleArtsManager : public AManagerBase, public IG01BattleArtsManagerInf, public IG01BattleManagerObserverInf, public IG01AddedPotentObserverInf, public IG01BattleCharacterObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USequencerManagerAccessCompo* MSequencerManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01ItemManagerAccessor* MItemManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01FXManagerAccessor* MFXManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01VFXManagerAccessor* MVFXManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleArtsDataAsset* MArtsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> ResourceDisplaceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleArtsResourceTableRow> DisplacedRowMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleArtsResourceMaster ArtsResourceMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> ArtsScriptClassMap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, AG01SequenceControllerBase*> MSequenceCtrlMap;
    
public:
    AG01BattleArtsManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetupDataTable();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpellLearnMaster(UDataTable* InDataTable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSkillLearnMaster(UDataTable* InDataTable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCounterSkillLearnMaster(UDataTable* InDataTable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterArtsResourceMaster(int32 InTableNo, UDataTable* InDataTable);
    
    UFUNCTION(BlueprintCallable)
    AG01SequenceControllerBase* PriorityLoadArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& OutRequested);
    
    UFUNCTION(BlueprintCallable)
    void MakeSpellArtsLearnList(AActor* InSource, FName InArtsName, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList);
    
    UFUNCTION(BlueprintCallable)
    void MakeSkillArtsLearnList(AActor* InSource, FName InArtsName, FName InWeaponId, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList);
    
    UFUNCTION(BlueprintCallable)
    void MakeInclusionBox(const TArray<AActor*>& InActor, bool& ReSuccess, FBox& ReBox);
    
    UFUNCTION(BlueprintCallable)
    void MakeFathomArtsLearnUnit(AActor* InSource, FName InArtsName, bool& ReSuccess, FG01BattleArtsLearnUnit& ReLearn);
    
    UFUNCTION(BlueprintCallable)
    void MakeCounterArtsLearnUnit(AActor* InSource, FName InArtsName, FName InWeaponId, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList);
    
    UFUNCTION(BlueprintCallable)
    void MakeArtsLinkTextIdList(const TArray<FName>& InArtsNameList, TArray<FText>& ReList);
    
    UFUNCTION(BlueprintCallable)
    void MakeArtsLearnRate(UDataTable* InDataTable, FG01BattleArtsLearnRate& ReLearnRate);
    
    UFUNCTION(BlueprintCallable)
    void MakeArtsAttrList(const FG01BattleArtsTableRow& InArts, TArray<EG01BattleArtsAttribute>& ReAttrList);
    
    UFUNCTION(BlueprintCallable)
    void LookupArtsDataByFathomName(FName InFathomName, bool& ReIsFound, FG01BattleArtsTableRow& ReArts);
    
    UFUNCTION(BlueprintCallable)
    void LookupArtsData(FName InArtsName, bool& ReIsFound, FG01BattleArtsTableRow& ReArts);
    
    UFUNCTION(BlueprintCallable)
    void LookupArtsBehaviour(FName InBehaviourName, bool& ReIsFound, FG01ArtsBehaviourTableRow& ReBehaviour);
    
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
    void GetRankedArtsId(const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, FName InBaseArtsId, FName& OutRankedArtsId, int32& OutArtsRank);
    
    UFUNCTION(BlueprintCallable)
    void GetNormalAttackArts(FName InWeaponId, FName& ReArtsId);
    
    UFUNCTION(BlueprintCallable)
    void GetBaseRankArtsId(FName InArtsID, bool& OutIsExist, FName& OutBaseArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArtsTypeForWeaponCategory(FName InWeaponCategory, EG01BattleArtsType& OutArtsType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArtsType(FName InArtsName, EG01BattleArtsType& ReArtsType);
    
    UFUNCTION(BlueprintCallable)
    void GetArtsTagList(FName InArtsID, TArray<FG01BattleArtsTagKeyStruct>& OutTagList);
    
    UFUNCTION(BlueprintCallable)
    void GetArtsLearnRate(EG01BattleArtsLearnType InType, int32 InKey, bool InHasTalent, float& RePercent);
    
    UFUNCTION(BlueprintCallable)
    void FindSpellArtsLearnData(FName InArtsID, bool& OutFound, FG01BattleSpellLearn& OutLearn);
    
    UFUNCTION(BlueprintCallable)
    void FindSkillArtsLearnData(FName InArtsID, bool& OutFound, FG01BattleSkillLearn& OutLearn);
    
    UFUNCTION(BlueprintCallable)
    void FindCounterArtsLearnData(FName InArtsID, bool& OutFound, FG01BattleSkillLearn& OutLearn);
    
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
    void FindArtsInspirationLearnStatus(FName InArtsID, bool& OutFound, FG01BattleArtsLearnStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsHitSlomoSetting(EG01BattleCommandSource InSourceType, FName InSourceVisualId, FName InTargetVisualId, FName InArtsID, bool& OutFound, FG01BattleArtsHitSlomoSetting& OutSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsEffectSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, FG01BattleArtsEffectSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsCounterSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, FG01BattleCounterArtsSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsCastVFXClass(EG01BattleCommandSource InSourceType, FName InArtsName, bool InIsAssist, int32 InRank, FVFXID& ReVFXID, TSoftClassPtr<UObject>& ReVFXClass);
    
    UFUNCTION(BlueprintCallable)
    void FindArtsCastFxClass(EG01BattleCommandSource InSourceType, FName InArtsName, FEffectID& ReEffectID, TSoftClassPtr<UObject>& ReEffectClass);
    
    UFUNCTION(BlueprintCallable)
    void FilterUsableSkillList(FName InWeaponId, UPARAM(Ref) TArray<FName>& InArts, TArray<FName>& ReFilteredArts);
    
    UFUNCTION(BlueprintCallable)
    void ConvertArtsToLinkTextId(const TArray<FName>& InArtsIdList, TArray<FText>& OutStartNameIdList, TArray<FText>& OutEndNameIdList);
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcCenterOfBox(const FBox& InBox, FVector& ReCenter);
    

    // Fix for true pure virtual functions not being implemented
};

