#include "G01BattleDirectorController.h"
#include "G01GamePlayDataManagerAccessor.h"
#include "G01TutorialManagerAccessor.h"

AG01BattleDirectorController::AG01BattleDirectorController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MTutorialManagerAccessor = CreateDefaultSubobject<UG01TutorialManagerAccessor>(TEXT("TutorialManagerAccessor"));
    this->GamePlayDataManagerAccessor = CreateDefaultSubobject<UG01GamePlayDataManagerAccessor>(TEXT("GamePlayDataManagerAccessor"));
    this->SequenceDataAssets = NULL;
}

void AG01BattleDirectorController::UpdateBattleAbort(bool& OutToEnd) {
}

void AG01BattleDirectorController::SetSequenceTransform_Implementation(FName InKey, const FTransform& InTransform) {
}

void AG01BattleDirectorController::SetSequenceSlotActor_Implementation(FName InKey, const TArray<AActor*>& InSourceList, const TArray<AActor*>& InTargetList) {
}

void AG01BattleDirectorController::SetReciveSequenceEvent_Implementation(FName InKey, AActor* InActor) {
}

void AG01BattleDirectorController::RequestPlaySequence_Implementation(FName InKey, bool IsForce) {
}

void AG01BattleDirectorController::OnBattleAbort() {
}

void AG01BattleDirectorController::IsSkipWinPhase(bool& OutSkip) {
}

void AG01BattleDirectorController::IsReadyToPlayback_Implementation(bool& ReIsReady) {
}

void AG01BattleDirectorController::IsReadyToBattle_Implementation(bool& ReIsReady) {
}

void AG01BattleDirectorController::IsEnableAbortPhase(bool& OutEnableAbort) {
}

void AG01BattleDirectorController::IsDisableSpellLearn(bool& OutDisable) {
}

void AG01BattleDirectorController::IsDisableSkillLearn(bool& OutDisable) {
}

void AG01BattleDirectorController::IsDisableFathomLearn(bool& OutDisable) {
}

void AG01BattleDirectorController::IsDisableCounterLearn(bool& OutDisable) {
}

void AG01BattleDirectorController::InitializeTurn_Implementation(int32& ReTurn) {
}

void AG01BattleDirectorController::GetStartTransitionType(EBtTransitionType& OutType) {
}

UG01BattleDirectorSequenceDataAsset* AG01BattleDirectorController::GetSequenceDataAsset() {
    return NULL;
}

TArray<FName> AG01BattleDirectorController::GetRequestedPlaySequence() {
    return TArray<FName>();
}

void AG01BattleDirectorController::GetNextTurn(int32& Re) const {
}

void AG01BattleDirectorController::GetCurrentTurn(int32& Re) const {
}

void AG01BattleDirectorController::GetBattlePreset(FG01BattlePresetTableRow& OutPreset) {
}

void AG01BattleDirectorController::GetAdditionalPartyList(TArray<FName>& OutIdList) {
}

void AG01BattleDirectorController::GetAdditionalEnemyList(TArray<FName>& OutIdList) {
}

void AG01BattleDirectorController::ElapseTurn_Implementation(int32& ReTurn) {
}

void AG01BattleDirectorController::DoJudgeCameraTransition_Implementation(UG01BattleCameraJudgeBase* InCameraJudge, bool& OutCanTransit) {
}

void AG01BattleDirectorController::Dir_WinCount(int32& Re) {
}

void AG01BattleDirectorController::Dir_PartyCount(int32& ReCount) {
}




void AG01BattleDirectorController::Dir_LoseCount(int32& Re) {
}

void AG01BattleDirectorController::Dir_LinkGauge(int32& ReGauge) {
}

void AG01BattleDirectorController::Dir_IsSurpriseAttack(bool& Re) {
}

void AG01BattleDirectorController::Dir_IsBackAttack(bool& Re) {
}

void AG01BattleDirectorController::Dir_FaintPartyCount(int32& ReCount) {
}

void AG01BattleDirectorController::Dir_EscapeCound(int32& Re) {
}

void AG01BattleDirectorController::Dir_DeadPartyCount(int32& ReCount) {
}

void AG01BattleDirectorController::Dir_CurrentTurn(int32& ReTurn) {
}

void AG01BattleDirectorController::Dir_CallTutorial(FName InTutorialId) {
}

void AG01BattleDirectorController::Dir_BattleCount(int32& Re) {
}

void AG01BattleDirectorController::Dir_AlivePartyCount(int32& ReCount) {
}




void AG01BattleDirectorController::Cmd_BD_ShowReinforceEnemy(int32 InFormationNo, bool& OutSuccess) {
}

void AG01BattleDirectorController::Cmd_BD_ScreenTransitionOut(float InSeconds) {
}

void AG01BattleDirectorController::Cmd_BD_ScreenTransitionIn(EScreenTransitionType InType, float InSeconds) {
}

void AG01BattleDirectorController::Cmd_BD_ReserveSubEnemy_Implementation(TArray<FG01BattleEnemyKeyStruct>& OutList) {
}

void AG01BattleDirectorController::Cmd_BD_ReinforceEnemy(FG01BattleEnemyKeyStruct InEnemy, int32 InFormationNo, bool& OutSuccess, AActor*& OutEnemy) {
}

void AG01BattleDirectorController::Cmd_BD_OverrideStartTransitionType_Implementation(EBtTransitionType& OutTransitionType) {
}

void AG01BattleDirectorController::Cmd_BD_OverrideSkipWinPhase_Implementation(bool& OutSkip) {
}

void AG01BattleDirectorController::Cmd_BD_OverrideCanNotEscape_Implementation(bool& OutCanNotEscape) {
}


void AG01BattleDirectorController::Cmd_BD_IsEnableAbortPhase_Implementation(bool& OutEnableAbort) {
}

void AG01BattleDirectorController::Cmd_BD_IsDisableSpellLearn_Implementation(bool& OutDisable) {
}

void AG01BattleDirectorController::Cmd_BD_IsDisableSkillLearn_Implementation(bool& OutDisable) {
}

void AG01BattleDirectorController::Cmd_BD_IsDisableFathomLearn_Implementation(bool& OutDisable) {
}

void AG01BattleDirectorController::Cmd_BD_IsDisableCounterLearn_Implementation(bool& OutDisable) {
}

void AG01BattleDirectorController::Cmd_BD_GetEmptyEnemyFormationNo(bool& OutExistEmpty, TArray<int32>& OutFormationNoList) {
}

void AG01BattleDirectorController::Cmd_BD_GetBattleEndTransition_Implementation(bool& OutIsOverride, EScreenTransitionType& OutType, float& OutSeconds) {
}

void AG01BattleDirectorController::Cmd_BD_CheckEmptyEnemyFormationNo(int32 InFormationNo, bool& OutIsEmpty) {
}

void AG01BattleDirectorController::Cmd_BD_ChangeEnemyFormationNo(int32 InSrcFormationNo, int32 InDstFormationNo, bool& OutSuccess) {
}

void AG01BattleDirectorController::CanNotEscape(bool& OutCanNotEscape) {
}


