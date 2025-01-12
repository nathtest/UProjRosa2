#include "G01BattleMapAspectController.h"

AG01BattleMapAspectController::AG01BattleMapAspectController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlowTable = NULL;
    this->MProbabilityBonusTable = NULL;
    this->MAttackBonusTable = NULL;
    this->MRecoverRateTable = NULL;
    this->MEnabled = true;
    this->MTestModeEnabled = false;
}

void AG01BattleMapAspectController::UpdateDamageBonus() {
}

void AG01BattleMapAspectController::SetInitialMapAspectFlow(FG01MapAspectFlowKeyStruct InMapAspectFlow) {
}

void AG01BattleMapAspectController::SetInitialMapAspect(EG01MapAspectType InMapAspect) {
}

void AG01BattleMapAspectController::OnTurnElapsed(int32 InTurn) {
}

void AG01BattleMapAspectController::GetTypeUseCount(EG01MapAspectType InType, int32& OutCount) {
}

FG01MapAspectResult AG01BattleMapAspectController::GetResult() {
    return FG01MapAspectResult{};
}

void AG01BattleMapAspectController::GetRemainTurnToRevert(int32& OutTurn) {
}

float AG01BattleMapAspectController::GetRecoverRate(bool InIsPlayer, TArray<EG01MapAspectType> InPlayerMapAspectRecoverType) {
    return 0.0f;
}

void AG01BattleMapAspectController::GetCurrentMapAspectFlow(FG01MapAspectFlowTableRow& OutFlow) {
}

EG01MapAspectType AG01BattleMapAspectController::GetCurrentMapAspect() {
    return EG01MapAspectType::Invalid;
}

bool AG01BattleMapAspectController::GetAttackBonus(const FG01MapAspectAction& InAction, float& OutAttackBonus) {
    return false;
}

void AG01BattleMapAspectController::ExecuteOverride(const FG01MapAspectOverride& InOverride) {
}

void AG01BattleMapAspectController::ExecuteArts(bool InIsPlayer, EG01BattleArtsType InSourceArtsType) {
}

void AG01BattleMapAspectController::ExecuteAction(const FG01MapAspectAction& InAction) {
}

void AG01BattleMapAspectController::DBG_SendLogLottery(int32 InPercent, int32 InLottery, bool InIsChanged) {
}

void AG01BattleMapAspectController::DBG_SendLogInt(FName InName, int32 InValue) {
}

void AG01BattleMapAspectController::DBG_SendLogFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax) {
}

void AG01BattleMapAspectController::DBG_LogEnd() {
}

void AG01BattleMapAspectController::DBG_LogBegin() {
}


