#include "G01BattleArtsManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequencerManagerAccessCompo -FallbackName=SequencerManagerAccessCompo
#include "G01FXManagerAccessor.h"
#include "G01ItemManagerAccessor.h"
#include "G01VFXManagerAccessor.h"

AG01BattleArtsManager::AG01BattleArtsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_BATTLEARTS;
    this->MSequencerManagerAccessor = CreateDefaultSubobject<USequencerManagerAccessCompo>(TEXT("SequencerManagerAccessor"));
    this->MItemManagerAccessor = CreateDefaultSubobject<UG01ItemManagerAccessor>(TEXT("ItemManagerAccessor"));
    this->MFXManagerAccessor = CreateDefaultSubobject<UG01FXManagerAccessor>(TEXT("FXManagerAccessor"));
    this->MVFXManagerAccessor = CreateDefaultSubobject<UG01VFXManagerAccessor>(TEXT("VFXManagerAccessor"));
    this->MArtsDataAsset = NULL;
}

void AG01BattleArtsManager::SetupDataTable() {
}

void AG01BattleArtsManager::RegisterSpellLearnMaster(UDataTable* InDataTable) {
}

void AG01BattleArtsManager::RegisterSkillLearnMaster(UDataTable* InDataTable) {
}

void AG01BattleArtsManager::RegisterCounterSkillLearnMaster(UDataTable* InDataTable) {
}

void AG01BattleArtsManager::RegisterArtsResourceMaster(int32 InTableNo, UDataTable* InDataTable) {
}

AG01SequenceControllerBase* AG01BattleArtsManager::PriorityLoadArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& OutRequested) {
    return NULL;
}

void AG01BattleArtsManager::MakeSpellArtsLearnList(AActor* InSource, FName InArtsName, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList) {
}

void AG01BattleArtsManager::MakeSkillArtsLearnList(AActor* InSource, FName InArtsName, FName InWeaponId, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList) {
}

void AG01BattleArtsManager::MakeInclusionBox(const TArray<AActor*>& InActor, bool& ReSuccess, FBox& ReBox) {
}

void AG01BattleArtsManager::MakeFathomArtsLearnUnit(AActor* InSource, FName InArtsName, bool& ReSuccess, FG01BattleArtsLearnUnit& ReLearn) {
}

void AG01BattleArtsManager::MakeCounterArtsLearnUnit(AActor* InSource, FName InArtsName, FName InWeaponId, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList) {
}

void AG01BattleArtsManager::MakeArtsLinkTextIdList(const TArray<FName>& InArtsNameList, TArray<FText>& ReList) {
}

void AG01BattleArtsManager::MakeArtsLearnRate(UDataTable* InDataTable, FG01BattleArtsLearnRate& ReLearnRate) {
}

void AG01BattleArtsManager::MakeArtsAttrList(const FG01BattleArtsTableRow& InArts, TArray<EG01BattleArtsAttribute>& ReAttrList) {
}

void AG01BattleArtsManager::LookupArtsDataByFathomName(FName InFathomName, bool& ReIsFound, FG01BattleArtsTableRow& ReArts) {
}

void AG01BattleArtsManager::LookupArtsData(FName InArtsName, bool& ReIsFound, FG01BattleArtsTableRow& ReArts) {
}

void AG01BattleArtsManager::LookupArtsBehaviour(FName InBehaviourName, bool& ReIsFound, FG01ArtsBehaviourTableRow& ReBehaviour) {
}

AG01SequenceControllerBase* AG01BattleArtsManager::LoadArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& ReRequested) {
    return NULL;
}

void AG01BattleArtsManager::IsLoadedArtsResource(bool& Re) {
}

void AG01BattleArtsManager::IsExcludeAtConfuse(FName InArtsID, bool& OutIsExclude) {
}

void AG01BattleArtsManager::IsAllyTeamSelection(FName InArtsID, bool& Re) {
}

void AG01BattleArtsManager::GetWeaponCategoryForArtsType(EG01BattleArtsType InArtsType, FName& ReWeaponCategory) {
}

void AG01BattleArtsManager::GetRankedArtsId(const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, FName InBaseArtsId, FName& OutRankedArtsId, int32& OutArtsRank) {
}

void AG01BattleArtsManager::GetNormalAttackArts(FName InWeaponId, FName& ReArtsId) {
}

void AG01BattleArtsManager::GetBaseRankArtsId(FName InArtsID, bool& OutIsExist, FName& OutBaseArtsId) {
}

void AG01BattleArtsManager::GetArtsTypeForWeaponCategory(FName InWeaponCategory, EG01BattleArtsType& OutArtsType) {
}

void AG01BattleArtsManager::GetArtsType(FName InArtsName, EG01BattleArtsType& ReArtsType) {
}

void AG01BattleArtsManager::GetArtsTagList(FName InArtsID, TArray<FG01BattleArtsTagKeyStruct>& OutTagList) {
}

void AG01BattleArtsManager::GetArtsLearnRate(EG01BattleArtsLearnType InType, int32 InKey, bool InHasTalent, float& RePercent) {
}

void AG01BattleArtsManager::FindSpellArtsLearnData(FName InArtsID, bool& OutFound, FG01BattleSpellLearn& OutLearn) {
}

void AG01BattleArtsManager::FindSkillArtsLearnData(FName InArtsID, bool& OutFound, FG01BattleSkillLearn& OutLearn) {
}

void AG01BattleArtsManager::FindCounterArtsLearnData(FName InArtsID, bool& OutFound, FG01BattleSkillLearn& OutLearn) {
}

void AG01BattleArtsManager::FindArtsTrainingLearnStatus(FName InArtsID, bool& OutFound, FG01BattleArtsLearnStatus& OutStatus) {
}

void AG01BattleArtsManager::FindArtsTrainingAutoPriority(FName InArtsID, bool& OutFound, int32& OutPriority) {
}

void AG01BattleArtsManager::FindArtsResourceByTarget(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, AG01SequenceControllerBase*& ReSeqCont, FG01BattleArtsSequenceSetting& ReSeqSetting) {
}

void AG01BattleArtsManager::FindArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& ReFound, AG01SequenceControllerBase*& ReSeqCont, FG01BattleArtsSequenceSetting& ReSeqSetting) {
}

void AG01BattleArtsManager::FindArtsLinkSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsID, bool& OutFound, FG01BattleArtsLinkSetting& OutSetting) {
}

void AG01BattleArtsManager::FindArtsInspirationLearnStatus(FName InArtsID, bool& OutFound, FG01BattleArtsLearnStatus& OutStatus) {
}

void AG01BattleArtsManager::FindArtsHitSlomoSetting(EG01BattleCommandSource InSourceType, FName InSourceVisualId, FName InTargetVisualId, FName InArtsID, bool& OutFound, FG01BattleArtsHitSlomoSetting& OutSetting) {
}

void AG01BattleArtsManager::FindArtsEffectSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, FG01BattleArtsEffectSetting& ReSetting) {
}

void AG01BattleArtsManager::FindArtsCounterSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, FG01BattleCounterArtsSetting& ReSetting) {
}

void AG01BattleArtsManager::FindArtsCastVFXClass(EG01BattleCommandSource InSourceType, FName InArtsName, bool InIsAssist, int32 InRank, FVFXID& ReVFXID, TSoftClassPtr<UObject>& ReVFXClass) {
}

void AG01BattleArtsManager::FindArtsCastFxClass(EG01BattleCommandSource InSourceType, FName InArtsName, FEffectID& ReEffectID, TSoftClassPtr<UObject>& ReEffectClass) {
}

void AG01BattleArtsManager::FilterUsableSkillList(FName InWeaponId, TArray<FName>& InArts, TArray<FName>& ReFilteredArts) {
}

void AG01BattleArtsManager::ConvertArtsToLinkTextId(const TArray<FName>& InArtsIdList, TArray<FText>& OutStartNameIdList, TArray<FText>& OutEndNameIdList) {
}

void AG01BattleArtsManager::CollectArtsSequenceAsset(EG01BattleCommandSource InSourceType, FName InSourceVisualId, FName InTargetVisualId, FName InArtsID, TArray<TSoftObjectPtr<ULevelSequence>>& OutList) {
}

void AG01BattleArtsManager::CheckLoadedArtsResource(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReIsLoaded) {
}

void AG01BattleArtsManager::CheckFathomHasTalent(FName InFathomId, int32 InInspirationId, bool& OutHasTalent) {
}

void AG01BattleArtsManager::CheckArtsHasTalent(FName InArtsID, int32 InInspirationId, bool& OutHasTalent) {
}

void AG01BattleArtsManager::CheckArtsHasTag(FName InArtsID, const FG01BattleArtsTagKeyStruct InTag, bool& OutHasTag) {
}

void AG01BattleArtsManager::CheckArtsCanTrainingLearn(FName InArtsID, const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, bool& OutCanLearn) {
}

void AG01BattleArtsManager::CheckArtsCanInspirationLearn(FName InArtsID, const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, bool& OutCanLearn) {
}

void AG01BattleArtsManager::CheckActivateShield(const FG01BattleArtsTableRow& InArts, const FG01ItemShieldDataStruct& InShield, bool& OutActivate) {
}

void AG01BattleArtsManager::CalcCenterOfBox(const FBox& InBox, FVector& ReCenter) {
}


