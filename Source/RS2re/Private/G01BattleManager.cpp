#include "G01BattleManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequencerManagerAccessCompo -FallbackName=SequencerManagerAccessCompo

AG01BattleManager::AG01BattleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_BATTLE;
    this->MSequencerManagerAccessor = CreateDefaultSubobject<USequencerManagerAccessCompo>(TEXT("SequencerManagerAccessor"));
    this->MBattleCommonDataAsset = NULL;
    this->BattleHitSlomoDataAsset = NULL;
    this->BattleHitForceFeedbackDataAsset = NULL;
    this->MMainPhase = EG01BattleMainPhaseType::Inactive;
    this->ManagerHandle = NULL;
}





























void AG01BattleManager::SetupEnemyPartAttach() {
}

void AG01BattleManager::ResetObserverObject() {
}

void AG01BattleManager::ResetAbilityStat() {
}




void AG01BattleManager::OnNotifyChangedPartyFormation() {
}

void AG01BattleManager::NotifySettingToDirector(AG01BattleDirectorController* InDirector, const FG01BattleSetupData& InStartData, const FG01BattlePresetTableRow& InPresetData, const FG01BattleData& InData, const FG01BattleSaveInfo& InSaveInfo) {
}

void AG01BattleManager::MakeBattleRetry(const FG01BattleData& InBattleData, FG01BattleRetryData& OutRetryData) {
}

void AG01BattleManager::IsPlayInEditor(bool& Out) const {
}

void AG01BattleManager::IsInDevelopmentLevel(bool& Out) const {
}

void AG01BattleManager::IsEmptyEnemyFormationNo(int32 InFormationNo, bool& OutIsEmpty) {
}

void AG01BattleManager::IsAvailableDebugSetupData(bool& Out) const {
}


void AG01BattleManager::GetObserverCallList(TArray<UObject*>& OutList) {
}





void AG01BattleManager::GetEmptyEnemyFormationNo(TArray<int32>& OutFormationNoList) {
}


void AG01BattleManager::ForceChangeMainPhase(EG01BattleMainPhaseType InMainPhase, bool& ReSuccess) {
}

void AG01BattleManager::FindBattlePreset(FName InRowName, bool& ReFound, FG01BattlePresetTableRow& ReRow) {
}

void AG01BattleManager::FindBattleFieldParam(FName InBattleFieldId, bool& OutFound, FG01BattleFieldParamTableRow& OutRow) {
}

void AG01BattleManager::FindArtsResource(FName InArtsID, AActor* InSourceActor, AActor* InTargetActor, bool& OutFound, AG01SequenceControllerBase*& OutSequenceCtrl, FG01BattleArtsSequenceSetting& OutSequenceSetting) {
}





void AG01BattleManager::DBG_SendInspiLogFathom(FName InArtsID, float InRate, float InLottery, bool InIsLearn) {
}

void AG01BattleManager::DBG_SendInspiLogCounter(FName InArtsID, float InRate, float InLottery, bool InIsLearn) {
}

void AG01BattleManager::DBG_SendInspiLogArts(FName InArtsID, float InRate, float InLottery, bool InIsLearn) {
}

void AG01BattleManager::DBG_InspiLogEnd() {
}

void AG01BattleManager::DBG_InspiLogBegin(FName InTag, FName InBaseArtsId) {
}

void AG01BattleManager::ClearDebugSetupData() {
}

bool AG01BattleManager::CheckQuestSectionEvaluate(const FQuestSectionNameView& InQuest, EQuestSectionEvalOp InOp) {
    return false;
}


void AG01BattleManager::ChangeMainPhase(EG01BattleMainPhaseType InMainPhase, bool& ReSuccess) {
}

void AG01BattleManager::ChangeEnemyFormationNo(int32 InSrcFormationNo, int32 InDstFormationNo, bool& ReSuccess) {
}

void AG01BattleManager::AvailableProductLevelDebug(bool& Out) const {
}

void AG01BattleManager::ApplyDebugSetupData(FG01BattleData& InBattleData) {
}

void AG01BattleManager::ApplyBattlePreset(FG01BattleData& InBattleData, const FG01BattlePresetTableRow& InBattlePresetData) {
}

void AG01BattleManager::ApplicateAbilityStat() {
}

void AG01BattleManager::AddObserverObjectList(EG01BattleManagerObserverGroup InGroup, const TArray<UObject*>& InObjects) {
}

void AG01BattleManager::AddObserverObject(EG01BattleManagerObserverGroup InGroup, UObject* InObject) {
}

void AG01BattleManager::AddAbilityStat(EG01AbilityConditionType InType, int32 InCount, AActor* InCharacter) {
}


