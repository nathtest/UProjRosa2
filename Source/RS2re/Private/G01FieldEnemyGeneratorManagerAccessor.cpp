#include "G01FieldEnemyGeneratorManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01FieldEnemyGeneratorManagerAccessor::UG01FieldEnemyGeneratorManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_ENEMY;
}

void UG01FieldEnemyGeneratorManagerAccessor::ToggleEnableEnemyEncount() {
}

void UG01FieldEnemyGeneratorManagerAccessor::SetReturnPositionEnemy() {
}

void UG01FieldEnemyGeneratorManagerAccessor::SetInterlockGimmick(const FString& InLevelObjectFullID, AGimmickObjectBase* InInterlockGimmick) {
}

void UG01FieldEnemyGeneratorManagerAccessor::SetEncountEnemyActor(AG01FieldEnemyBase* InEnemyActor) {
}

void UG01FieldEnemyGeneratorManagerAccessor::SetEnableTickAllEnemy(bool InEnable) {
}

void UG01FieldEnemyGeneratorManagerAccessor::SetDebugEnableEncount(bool InEnable) {
}

void UG01FieldEnemyGeneratorManagerAccessor::SetAIStateByFullID(const FString& InLevelObjectFullID, EAIState InCurrentAIState, EAIState InChangeAIState) {
}

void UG01FieldEnemyGeneratorManagerAccessor::SetAIStateAllEnemy(EAIState InAiState) {
}

void UG01FieldEnemyGeneratorManagerAccessor::SetAIState(const FLevelObjectID& InLevelObjectID, EAIState InCurrentAIState, EAIState InChangeAIState) {
}

void UG01FieldEnemyGeneratorManagerAccessor::RemoveFollowMoveEnemy(AG01FieldEnemyBase* InEnemyActor) {
}

void UG01FieldEnemyGeneratorManagerAccessor::NotifyDefeatEnemy(const AG01FieldEnemyBase* InDefeatEnemy) {
}

void UG01FieldEnemyGeneratorManagerAccessor::MimicBattle() {
}

void UG01FieldEnemyGeneratorManagerAccessor::LoseSightPlayer(USceneComponent* InPositionComponent, AActor* InEnemyActor) {
}

TArray<AG01FieldEnemyBase*> UG01FieldEnemyGeneratorManagerAccessor::GetEnemyListByRoomID(FRoomID InRoomId) {
    return TArray<AG01FieldEnemyBase*>();
}

TArray<AG01FieldEnemyBase*> UG01FieldEnemyGeneratorManagerAccessor::GetEnemyList() {
    return TArray<AG01FieldEnemyBase*>();
}

int32 UG01FieldEnemyGeneratorManagerAccessor::GetEnableTickCount() const {
    return 0;
}

void UG01FieldEnemyGeneratorManagerAccessor::FindEnemyCharaInfoByClass(const TSoftClassPtr<AG01FieldEnemyBase>& InEnemyClass, bool& ReIsFound, FG01EnemyCharaInfoTableRow& ReResult) {
}

void UG01FieldEnemyGeneratorManagerAccessor::FindEnemyCharaInfo(const FG01CharacterID& InCharaID, bool& ReIsFound, FG01EnemyCharaInfoTableRow& ReResult) {
}

void UG01FieldEnemyGeneratorManagerAccessor::EnableTickAllEnemyGenerator() {
}

void UG01FieldEnemyGeneratorManagerAccessor::EnableEnemyEncount() {
}

void UG01FieldEnemyGeneratorManagerAccessor::DiscoverPlayer(USceneComponent* InPositionComponent, AActor* InEnemyActor) {
}

void UG01FieldEnemyGeneratorManagerAccessor::DisableTickAllEnemyGenerator() {
}

void UG01FieldEnemyGeneratorManagerAccessor::DisableEnemyEncount() {
}

void UG01FieldEnemyGeneratorManagerAccessor::DeleteEncountEnemyActor() {
}

void UG01FieldEnemyGeneratorManagerAccessor::CheckEnableEnemyEncount(bool& OutIsEnableEnemyEncount) const {
}

void UG01FieldEnemyGeneratorManagerAccessor::CheckDebugEnableEnemyEncount(bool& OutIsEnable) const {
}

void UG01FieldEnemyGeneratorManagerAccessor::AddFollowMoveEnemy(AG01FieldEnemyBase* InEnemyActor) {
}


