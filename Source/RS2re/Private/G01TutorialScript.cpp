#include "G01TutorialScript.h"

UG01TutorialScript::UG01TutorialScript() {
    this->RequestTutorialIDs.AddDefaulted(1);
    this->bIsRequested = false;
}

void UG01TutorialScript::OnEndPlay_Implementation() {
}

void UG01TutorialScript::OnBeginPlay_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_UniversityExam_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_ThroneTopMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_ThroneAbdicationMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_StatusMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_SpellInstituteMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_SkillSpellMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_ShopMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_SequenceChoice_OnOpened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_SearchTeacher_StampFinished_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_QuestMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_PeriodJump_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_PartyMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_Notify_Opened_Implementation(EG01HudInformatioCategoryEnum InCategory, EG01HudInformationNoticeTypeEnum InNoticeType) {
}

void UG01TutorialScript::Cmd_TN_UI_MusicMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_LibraryMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_InventoryMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_ImperialMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_HeroesMemory_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_GameOver_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_FormationMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_FacilityDevelopment_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_EquipmentMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_EmperorSuccession_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_DojoMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_BlackSmithMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_BattleSealed_OnOpened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_BattleResult_OnOpened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_UI_BattleCommand_Opened_Implementation(const FG01BattleCommandUnit& InCommand, const FG01CharacterID& InCharacterId, const FG01CharaClassID& InClassId, const FVisualActorID& InVisualActorID) {
}

void UG01TutorialScript::Cmd_TN_UI_AbilityMenu_Opened_Implementation() {
}

void UG01TutorialScript::Cmd_TN_Tutorial_OnOpened_Implementation(const FG01TutorialID& InTutorialId) {
}

void UG01TutorialScript::Cmd_TN_Tutorial_OnClosed_Implementation(const FG01TutorialID& InTutorialId) {
}

void UG01TutorialScript::Cmd_TN_Sequence_OnFinished_Implementation(const FSequencePlayFinishParam& InParams) {
}

void UG01TutorialScript::Cmd_TN_SavePoint_OnBeginOverlap_Implementation() {
}

void UG01TutorialScript::Cmd_TN_RecoveryPoint_OnBeginOverlap_Implementation() {
}

void UG01TutorialScript::Cmd_TN_Quest_OnPreSectionChanged_Implementation(const FQuestReceiveParamQuestSectionChanged& InParams) {
}

void UG01TutorialScript::Cmd_TN_Quest_OnPostSectionChanged_Implementation(const FQuestReceiveParamQuestSectionChanged& InParams) {
}

void UG01TutorialScript::Cmd_TN_Player_OnFieldPlayable_Implementation() {
}

void UG01TutorialScript::Cmd_TN_Period_OnPeriodJump_Implementation(int32 InPeriodNum) {
}

void UG01TutorialScript::Cmd_TN_Period_OnGenerationChanged_Implementation(int32 InPrevGeneration, int32 InNextGeneration) {
}

void UG01TutorialScript::Cmd_TN_Inventory_OnEquipmentItem_Implementation(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType) {
}

void UG01TutorialScript::Cmd_TN_Inventory_OnAddItem_Implementation(EG01InventoryItemNotifyType InNotifyType, FName ItemId) {
}

void UG01TutorialScript::Cmd_TN_Flag_OnChanged_Implementation(const FFlagIDListViewStruct& InFlagID, bool InOldValue, bool InCurrentValue) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnStartPlaybackTask_Implementation(UG01BattleTask* InTask) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnStart_Implementation(EBattleStartType InType) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnMissed_Implementation(AActor* InSource, AActor* InTarget, const FG01AttackResultInfo& InResult) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnInspirationSpell_Implementation(const FG01BattleTutorialNotifySpellArts& InData) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnInspirationSkill_Implementation(const FG01BattleTutorialNotifySkillArts& InData) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnInspirationFathom_Implementation(const FG01BattleTutorialNotifyFathom& InData) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnInspirationCounter_Implementation(const FG01BattleTutorialNotifyCounterArts& InData) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnFinishArts_Implementation(AActor* InSource, const TArray<AActor*>& InTargetList, UG01BattleTask* InTask) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnEntryMapAspect_Implementation(EG01MapAspectType InType, bool InIsFirst, bool InIsSecond) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnEntryDangerIcon_Implementation() {
}

void UG01TutorialScript::Cmd_TN_Battle_OnEnd_Implementation(const FG01BattleEndNotifyData& InEndData) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnDamaged_Implementation(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnChangeMainPhase_Implementation(EG01BattleMainPhaseType InCurrentPhase, EG01BattleMainPhaseType InOldPhase) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnChangeCameraPhase_Implementation(EG01BattleCameraPhaseType InCurrentPhase, EG01BattleCameraPhaseType InNextPhase) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnAddExternal_Implementation(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent) {
}

void UG01TutorialScript::Cmd_TN_Battle_OnAddAilment_Implementation(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InPotent) {
}

void UG01TutorialScript::Cmd_TN_Arts_OnLearnArts_Implementation(const FG01PartyLearnArtsStruct InLearnArts, const EG01BattleArtsLearnType InArtsType) {
}

void UG01TutorialScript::Cmd_TA_Sequence_IsPlayingAny(bool& OutIsPlaying) {
}

void UG01TutorialScript::Cmd_TA_Sequence_IsPlaying(bool& OutIsPlaying, TSoftObjectPtr<ULevelSequence> InSequence) {
}

void UG01TutorialScript::Cmd_TA_RequestTutorial(bool InIsForceListIn) {
}

void UG01TutorialScript::Cmd_TA_Quest_CheckQuestSectionRange(bool& OutIsMeet, TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID, const FName& InBeginSectionName, EQuestSectionEvalOp InBeginEvalOp, const FName& InEndSectionName, EQuestSectionEvalOp InEndEvalOp) {
}

void UG01TutorialScript::Cmd_TA_Quest_CheckQuestSection(bool& OutIsMeet, TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID, FQuestSectionNameView InSectionName, EQuestSectionEvalOp InEvalOp) {
}

void UG01TutorialScript::Cmd_TA_Party_GetPartyStatus(TArray<FG01CharaVariableStatus>& OutStatusList) {
}

void UG01TutorialScript::Cmd_TA_Inventory_GetEquipment(FG01InventoryItemStruct& OutEquipment, const FG01CharacterID& InCharacterId, EG01InventoryItemEquiomentType InEquipmentType) const {
}

void UG01TutorialScript::Cmd_TA_Flag_SetFlagValue(bool& OutIsSuccess, FFlagIDListViewStruct InFlagID, bool InValue) {
}

void UG01TutorialScript::Cmd_TA_Flag_GetFlagValue(bool& OutValue, FFlagIDListViewStruct InFlagID) const {
}

void UG01TutorialScript::Cmd_TA_Battle_IsLinkable(bool& OutIsLinkable, AActor* InSourceActor) const {
}

void UG01TutorialScript::Cmd_TA_Battle_GetTotalBattleCountWin(int32& OutBattleCount) const {
}

void UG01TutorialScript::Cmd_TA_Battle_GetTotalBattleCountLose(int32& OutBattleCount) const {
}

void UG01TutorialScript::Cmd_TA_Battle_GetTotalBattleCountEscape(int32& OutBattleCount) const {
}

void UG01TutorialScript::Cmd_TA_Battle_GetTotalBattleCount(int32& OutBattleCount) const {
}

void UG01TutorialScript::Cmd_TA_Battle_GetSpellList(TArray<FName>& OutWeaponIdList, TArray<FG01BattleCharacterSpellUnitStruct>& OutSpellList, AActor* InSourceActor) {
}

void UG01TutorialScript::Cmd_TA_Battle_GetSkillList(TArray<FName>& OutWeaponIdList, TArray<FG01BattleCharacterSkillUnitStruct>& OutSkillList, AActor* InSourceActor) {
}

void UG01TutorialScript::Cmd_TA_Battle_GetPartyCharacters(TArray<AAppActor*>& OutCharacters) const {
}

void UG01TutorialScript::Cmd_TA_Battle_GetOverDriveGaugeMax(int32& OutOverDriveGaugeMax) const {
}

void UG01TutorialScript::Cmd_TA_Battle_GetOverDriveGauge(int32& OutOverDriveGauge) const {
}

void UG01TutorialScript::Cmd_TA_Battle_GetEnemyCharacters(TArray<AAppActor*>& OutCharacters) const {
}

void UG01TutorialScript::Cmd_TA_Battle_FindArtsData(bool& OutIsExist, FG01BattleArtsTableRow& OutArtsData, FName InArtsID) const {
}


