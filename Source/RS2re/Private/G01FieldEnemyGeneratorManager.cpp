#include "G01FieldEnemyGeneratorManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01FieldEnemyGeneratorManager::AG01FieldEnemyGeneratorManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_ENEMY;
    this->IsEnableEnemyEncount = true;
    this->PlayerFieldAttackTarget = NULL;
    this->IsEnableTickAll = true;
    this->IsMimicBattle = false;
    this->MEncountEnemyActor = NULL;
    this->MEnemySizeDataTable = NULL;
    this->MRespawnDataTable = NULL;
    this->MCrowdEncountTable = NULL;
    this->MSightDataTable = NULL;
    this->MHearingDataTable = NULL;
}

void AG01FieldEnemyGeneratorManager::ToggleEnableEnemyEncount() {
}

void AG01FieldEnemyGeneratorManager::StopSenseEnemy(TArray<FRoomID> InRoomIDList) {
}

void AG01FieldEnemyGeneratorManager::SetReturnPositionEnemy() {
}

void AG01FieldEnemyGeneratorManager::SetPlayerFieldAttackTarget(AActor* InActor) {
}

void AG01FieldEnemyGeneratorManager::SetEncountEnemyActor(AG01FieldEnemyBase* InEnemyActor) {
}

void AG01FieldEnemyGeneratorManager::SetEnableTick(bool InEnable) {
}

void AG01FieldEnemyGeneratorManager::SetAIStateAllEnemy(EAIState InAiState) {
}

void AG01FieldEnemyGeneratorManager::ResetFollowMoveEnemy() {
}

bool AG01FieldEnemyGeneratorManager::IsLoadingTypeSynopsis() {
    return false;
}

TArray<AG01FieldEnemyBase*> AG01FieldEnemyGeneratorManager::GetEnemyListByRoomID(FRoomID InRoomId) {
    return TArray<AG01FieldEnemyBase*>();
}

TArray<AG01FieldEnemyBase*> AG01FieldEnemyGeneratorManager::GetEnemyList() {
    return TArray<AG01FieldEnemyBase*>();
}

void AG01FieldEnemyGeneratorManager::EnableTickEnemyByRoomID(UG01RoomManagerAccessor* InRoomManagerAccessor, bool InIsDisp) {
}

void AG01FieldEnemyGeneratorManager::EnableTickAllEnemyGenerator() {
}

void AG01FieldEnemyGeneratorManager::EnableTickAllCrowdActionDirector() {
}

void AG01FieldEnemyGeneratorManager::EnableEnemyEncount() {
}

void AG01FieldEnemyGeneratorManager::DisableTickAllEnemy(bool InIsHide) {
}

void AG01FieldEnemyGeneratorManager::DisableTickAllCrowdActionDirector() {
}

void AG01FieldEnemyGeneratorManager::DisableEnemyEncount() {
}

void AG01FieldEnemyGeneratorManager::DisableEnemyEncounCommand() {
}

void AG01FieldEnemyGeneratorManager::DeleteEncountEnemyActor() {
}

void AG01FieldEnemyGeneratorManager::DeleteCrowdEncountList() {
}

bool AG01FieldEnemyGeneratorManager::CheckEnableEnemyEncount() const {
    return false;
}

void AG01FieldEnemyGeneratorManager::BroadcastEnemyDefeat(const FG01EnemyDefeatNotifyParam& InParam) {
}


