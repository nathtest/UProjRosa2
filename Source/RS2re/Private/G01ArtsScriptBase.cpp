#include "G01ArtsScriptBase.h"

UG01ArtsScriptBase::UG01ArtsScriptBase() {
    this->ArtsManager = NULL;
    this->DelayHitComponent = NULL;
    this->Task = NULL;
    this->BehaviourHitNumberGuide_ = -1;
}

void UG01ArtsScriptBase::SetupInspirationSkill() {
}

void UG01ArtsScriptBase::SetupInspirationParryOrCounter() {
}

void UG01ArtsScriptBase::Setup() {
}

void UG01ArtsScriptBase::SetTaskOwner(UG01BattleTask* InTask) {
}

void UG01ArtsScriptBase::SetArtsOwner(AActor* InOwner) {
}

void UG01ArtsScriptBase::OnPrepareDamageArts(AActor* InSource, AActor* InTarget, FG01AttackResultInfo& InResult) {
}

void UG01ArtsScriptBase::OnHitArts(AActor* InSource, AActor* InTarget, FG01AttackResultInfo& InResult) {
}

void UG01ArtsScriptBase::OnDiscard() {
}

void UG01ArtsScriptBase::OnDecidedCommand() {
}

void UG01ArtsScriptBase::OnDecideDamagePrevious(AActor* InSource, AActor* InTarget, FG01AttackResultInfo& InResult) {
}

void UG01ArtsScriptBase::OnDamagedArts(AActor* InSource, AActor* InTarget, FG01AttackResultInfo& InResult) {
}

void UG01ArtsScriptBase::GetTaskTargetList(TArray<AActor*>& OutTargetList) {
}

void UG01ArtsScriptBase::GetTaskSource(AActor*& OutSource) {
}

void UG01ArtsScriptBase::GetTaskOwner(UG01BattleTask*& OutTask) {
}

void UG01ArtsScriptBase::Cmd_AS_SetBehaviourTarget(int32 InHitNumber) {
}

void UG01ArtsScriptBase::Cmd_AS_OnDecidedCommand_Implementation(bool& OutUnused) {
}

void UG01ArtsScriptBase::Cmd_AS_GetAddedPotentHitCorrection_Implementation(bool& OutUnused, FG01AddedPotentBaseKeyStruct InBaseKey, float& OutCorrection) {
}

void UG01ArtsScriptBase::Cmd_AS_AddPotent(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InAddedPotentKey, FName InParam) {
}

void UG01ArtsScriptBase::Cmd_AS_AddPlayBackTask(FName InArtsID, AActor* InSource, AActor* InTarget) {
}

void UG01ArtsScriptBase::Cmd_AS_AddBehaviour(FG01ArtBehaviourTablePullDownKey InBehaviourKey, FName InParam) {
}

void UG01ArtsScriptBase::CheckMiss(AActor* InSource, AActor* InTarget, bool& OutMiss) {
}

bool UG01ArtsScriptBase::CheckHasBehaviour(FG01ArtBehaviourTablePullDownKey InKey) {
    return false;
}

void UG01ArtsScriptBase::CheckForceHit(AActor* InSource, AActor* InTarget, bool& OutForceHit) {
}

void UG01ArtsScriptBase::CheckAliveTarget(AActor* InActor, bool& OutPreviousAlive, bool& OutAlive) {
}


