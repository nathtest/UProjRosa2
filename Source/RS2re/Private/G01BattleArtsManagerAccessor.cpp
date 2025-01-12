#include "G01BattleArtsManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01BattleArtsManagerAccessor::UG01BattleArtsManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_BATTLEARTS;
}

void UG01BattleArtsManagerAccessor::UnregisterResourceDisplace(FName InRowNameFrom) {
}

void UG01BattleArtsManagerAccessor::UnregisterAllResourceDisplace() {
}

void UG01BattleArtsManagerAccessor::ReleaseOnBattleEnd() {
}

void UG01BattleArtsManagerAccessor::RegisterResourceDisplace(FName InRowNameFrom, FName InRowNameTo) {
}

AG01SequenceControllerBase* UG01BattleArtsManagerAccessor::PriorityLoadArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& OutRequested) {
    return NULL;
}

void UG01BattleArtsManagerAccessor::MakeSpellArtsLearnList(AActor* InSource, FName InArtsName, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList) {
}

void UG01BattleArtsManagerAccessor::MakeSkillArtsLearnList(AActor* InSource, FName InArtsName, FName InWeaponId, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList) {
}

void UG01BattleArtsManagerAccessor::MakeFathomArtsLearnUnit(AActor* InSource, FName InArtsName, bool& ReSuccess, FG01BattleArtsLearnUnit& ReLearn) {
}

void UG01BattleArtsManagerAccessor::MakeCounterArtsLearnUnit(AActor* InSource, FName InArtsName, FName InWeaponId, bool InBypassStatusTerms, TArray<FG01BattleArtsLearnUnit>& ReLearnList) {
}

void UG01BattleArtsManagerAccessor::MakeArtsOriginTransform(EG01BattleArtsOrigin InOriginType, AActor* InSourceActor, const TArray<AActor*>& InTargetActorList, FTransform& ReTransform) {
}

void UG01BattleArtsManagerAccessor::MakeArtsLinkTextIdList(const TArray<FName>& InArtsNameList, TArray<FText>& ReList) {
}

void UG01BattleArtsManagerAccessor::LookupWeaponArtsData(FName InArtsID, bool& OutIsExist, FG01BattleWeaponArtsTableRow& OutWeaponArts) {
}

void UG01BattleArtsManagerAccessor::LookupArtsLearnData(FName InArtsID, bool& OutIsExist, FG01BattleArtsLearnTableRow& OutLearn) {
}

void UG01BattleArtsManagerAccessor::LookupArtsDataByFathomName(FName InFathomName, bool& ReIsExist, FG01BattleArtsTableRow& ReArts) {
}

void UG01BattleArtsManagerAccessor::LookupArtsData(FName InArtsName, bool& ReIsExist, FG01BattleArtsTableRow& ReArts) {
}

void UG01BattleArtsManagerAccessor::LookupArmorArtsData(FName InItemID, bool& OutIsExist, FG01BattleArmorArtsTableRow& OutArmorArts) {
}

AG01SequenceControllerBase* UG01BattleArtsManagerAccessor::LoadArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& ReRequested) {
    return NULL;
}

void UG01BattleArtsManagerAccessor::IsLoadedArtsResource(bool& Re) {
}

void UG01BattleArtsManagerAccessor::IsExcludeAtConfuse(FName InArtsID, bool& OutIsExclude) {
}

void UG01BattleArtsManagerAccessor::IsAllyTeamSelection(FName InArtsID, bool& Re) {
}

void UG01BattleArtsManagerAccessor::GetWeaponCategoryForArtsType(EG01BattleArtsType InArtsType, FName& ReWeaponCategory) {
}

bool UG01BattleArtsManagerAccessor::GetUseNewAttr() {
    return false;
}

void UG01BattleArtsManagerAccessor::GetRankedArtsId(const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, FName InBaseArtsId, FName& ReRankedArtsId, int32& ReArtsRank) {
}

void UG01BattleArtsManagerAccessor::GetNormalAttackArts(FName InWeaponId, FName& ReArtsId) {
}

void UG01BattleArtsManagerAccessor::GetLearnSequence(FName InArtsID, AActor* InSourceActor, AG01SequenceControllerBase*& ReSequenceCtrl) {
}

void UG01BattleArtsManagerAccessor::GetFathomLearnSequence(AG01SequenceControllerBase*& ReSequenceCtrl) {
}

void UG01BattleArtsManagerAccessor::GetFathomArtsId(FName InArtsName, bool& ReIsExist, FName& ReFathomArtsId) {
}

void UG01BattleArtsManagerAccessor::GetCounterLearnSequence(FName InArtsID, AActor* InSourceActor, AG01SequenceControllerBase*& OutSequenceCtrl) {
}

void UG01BattleArtsManagerAccessor::GetBaseRankArtsId(FName InArtsID, bool& OutIsExist, FName& OutBaseArtsId) {
}

void UG01BattleArtsManagerAccessor::GetArtsTypeForWeaponCategory(FName InWeaponCategory, EG01BattleArtsType& OutArtsType) {
}

void UG01BattleArtsManagerAccessor::GetArtsType(FName InArtsName, EG01BattleArtsType& ReArtsType) {
}

void UG01BattleArtsManagerAccessor::GetArtsTagList(FName InArtsID, TArray<FG01BattleArtsTagKeyStruct>& OutTagList) {
}

void UG01BattleArtsManagerAccessor::GetArtsBpCost(FName InArtsName, int32& ReBpCost) {
}

void UG01BattleArtsManagerAccessor::GetArtsAttrList(FName InArtsName, TArray<EG01BattleArtsAttribute>& ReAttrList) {
}

void UG01BattleArtsManagerAccessor::GetArtsActionType(FName InArtsName, EG01AttackActionType& ReActionType) {
}

void UG01BattleArtsManagerAccessor::GetAllWeaponArtsId(TArray<FName>& OutWeaponArtsList) {
}

void UG01BattleArtsManagerAccessor::GetAllFathomLearnSequence(AG01SequenceControllerBase*& ReSequenceCtrl) {
}

void UG01BattleArtsManagerAccessor::GetAllArtsData(TMap<FName, FG01BattleArtsTableRow>& OutArtsList) {
}

void UG01BattleArtsManagerAccessor::FindArtsTrainingLearnStatus(FName InArtsID, bool& OutFound, FG01BattleArtsLearnStatus& OutStatus) {
}

void UG01BattleArtsManagerAccessor::FindArtsTrainingAutoPriority(FName InArtsID, bool& OutFound, int32& OutPriority) {
}

void UG01BattleArtsManagerAccessor::FindArtsResourceByTarget(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, AG01SequenceControllerBase*& ReSeqCont, FG01BattleArtsSequenceSetting& ReSeqSetting) {
}

void UG01BattleArtsManagerAccessor::FindArtsResource(EG01BattleCommandSource InSourceType, FName InCharacterId, FName InArtsName, bool& ReFound, AG01SequenceControllerBase*& ReSeqCont, FG01BattleArtsSequenceSetting& ReSeqSetting) {
}

void UG01BattleArtsManagerAccessor::FindArtsLinkSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsID, bool& OutFound, FG01BattleArtsLinkSetting& OutSetting) {
}

void UG01BattleArtsManagerAccessor::FindArtsLearnList(FName InArtsID, bool& OutFound, TArray<FName>& OutLearn) {
}

void UG01BattleArtsManagerAccessor::FindArtsInspirationLearnStatus(FName InArtsID, bool& OutFound, FG01BattleArtsLearnStatus& OutStatus) {
}

void UG01BattleArtsManagerAccessor::FindArtsHitSlomoSetting(EG01BattleCommandSource InSourceType, FName InSourceVisualId, FName InTargetVisualId, FName InArtsID, bool& OutFound, FG01BattleArtsHitSlomoSetting& OutSetting) {
}

void UG01BattleArtsManagerAccessor::FindArtsEffectSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, FG01BattleArtsEffectSetting& ReSetting) {
}

void UG01BattleArtsManagerAccessor::FindArtsCounterSetting(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReFound, FG01BattleCounterArtsSetting& ReSetting) {
}

void UG01BattleArtsManagerAccessor::FindArtsCastVFXClass(AActor* InSource, FName InArtsName, bool InIsAssistArts, int32 InArtsRank, TSoftClassPtr<UObject>& ReVFXClass) {
}

void UG01BattleArtsManagerAccessor::FindArtsCastFxClass(AActor* InSource, FName InArtsName, TSoftClassPtr<UObject>& ReEffectClass, TArray<FG01FXPointInfo>& ReBasePointInfo, TArray<FG01FXPointInfo>& ReTargetPointInfo) {
}

void UG01BattleArtsManagerAccessor::FilterUsableSkillList(FName InWeaponId, TArray<FName>& InArts, TArray<FName>& ReFilteredArts) {
}

void UG01BattleArtsManagerAccessor::CreateArtsScript(FName InArtsID, UG01ArtsScriptBase*& OutArtsScript) {
}

void UG01BattleArtsManagerAccessor::ConvertItemIDToArtsID(FName InItemName, bool& ReIsExist, FName& ReArtsId) {
}

void UG01BattleArtsManagerAccessor::ConvertArtsToLinkTextId(const TArray<FName>& InArtsIdList, TArray<FText>& OutStartNameIdList, TArray<FText>& OutEndNameIdList) {
}

void UG01BattleArtsManagerAccessor::ConvertArtsIDToItemID(FName ReArtsId, bool& ReIsExist, FName& InItemName) {
}

void UG01BattleArtsManagerAccessor::CollectArtsSequenceAsset(EG01BattleCommandSource InSourceType, FName InSourceVisualId, FName InTargetVisualId, FName InArtsID, TArray<TSoftObjectPtr<ULevelSequence>>& OutList) {
}

void UG01BattleArtsManagerAccessor::CheckLoadedArtsResource(EG01BattleCommandSource InSourceType, FName InSourceCharacterId, FName InTargetCharacterId, FName InArtsName, bool& ReIsLoaded) {
}

void UG01BattleArtsManagerAccessor::CheckFathomHasTalent(FName InFathomId, int32 InInspirationId, bool& OutHasTalent) {
}

void UG01BattleArtsManagerAccessor::CheckArtsHasTalent(FName InArtsID, int32 InInspirationId, bool& OutHasTalent) {
}

void UG01BattleArtsManagerAccessor::CheckArtsHasTag(FName InArtsID, const FG01BattleArtsTagKeyStruct InTag, bool& OutHasTag) {
}

void UG01BattleArtsManagerAccessor::CheckArtsCanTrainingLearn(FName InArtsID, const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, bool& OutCanLearn) {
}

void UG01BattleArtsManagerAccessor::CheckArtsCanInspirationLearn(FName InArtsID, const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, bool& OutCanLearn) {
}

void UG01BattleArtsManagerAccessor::CheckActivateShield(const FG01BattleArtsTableRow& InArts, const FG01ItemShieldDataStruct& InShield, bool& OutActivate) {
}

void UG01BattleArtsManagerAccessor::CalcFathomArtsLearnRate(AActor* InSource, AActor* InTarget, FG01BattleArtsLearnUnit& InLearnUnit, int32 InLearnLv, float& RePercent) {
}

void UG01BattleArtsManagerAccessor::CalcCounterArtsLearnRate(AActor* InSource, AActor* InTarget, FG01BattleArtsLearnUnit& InLearnUnit, int32 InLearnLv, float& RePercent) {
}

void UG01BattleArtsManagerAccessor::CalcArtsLearnRate(AActor* InSource, FG01BattleArtsLearnUnit& InLearnUnit, int32 InLearnLv, float& RePercent) {
}


