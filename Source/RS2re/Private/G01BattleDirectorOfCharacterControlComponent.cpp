#include "G01BattleDirectorOfCharacterControlComponent.h"

UG01BattleDirectorOfCharacterControlComponent::UG01BattleDirectorOfCharacterControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Actor = NULL;
}

void UG01BattleDirectorOfCharacterControlComponent::TakeRevive(float InHpRate) {
}

void UG01BattleDirectorOfCharacterControlComponent::TakeDamage(int32 InDamage, bool InEnableReaction, bool InEnableDeadNotify) {
}

void UG01BattleDirectorOfCharacterControlComponent::StartPrepareArtsResource() {
}

void UG01BattleDirectorOfCharacterControlComponent::SetUpNextTurnSpeedForActionCountID(int32 InSpeed, bool InFast, bool InDelay, int32 InActionCountID) {
}

void UG01BattleDirectorOfCharacterControlComponent::SetUpNextTurnSpeed(int32 InSpeed, bool InFast, bool InDelay) {
}

void UG01BattleDirectorOfCharacterControlComponent::SetCharacter_Implementation(AActor* InActor) {
}

void UG01BattleDirectorOfCharacterControlComponent::RequestCommandPattern(FName InID, bool IsImmediate) {
}

void UG01BattleDirectorOfCharacterControlComponent::RegisterNextTurnCommandTask(FName InTaskId, AActor* InSource, AActor* InTarget, int32 InActionCountID, bool InIsCaution) {
}

void UG01BattleDirectorOfCharacterControlComponent::RegisterCommandTask(FName InTaskId, AActor* InSource, AActor* InTarget, int32 InActionCountID, bool InIsCaution) {
}

bool UG01BattleDirectorOfCharacterControlComponent::IsDead() {
    return false;
}

bool UG01BattleDirectorOfCharacterControlComponent::IsCharacterAvairable() {
    return false;
}

void UG01BattleDirectorOfCharacterControlComponent::GetNextTurnCommandList(bool& ReFound, TArray<FG01BattleCommandUnit>& ReCommandList) {
}

void UG01BattleDirectorOfCharacterControlComponent::GetNextCommandPattern(FG01BattleEnemyCommandTableRow& OutPattern) {
}

void UG01BattleDirectorOfCharacterControlComponent::GetMaxHP(int32& OutMaxHP) {
}

void UG01BattleDirectorOfCharacterControlComponent::GetHPRate(float& OutHpRate) {
}

void UG01BattleDirectorOfCharacterControlComponent::GetHP(int32& OutHP) {
}

AG01BattleDirectorController* UG01BattleDirectorOfCharacterControlComponent::GetDirector() {
    return NULL;
}

int32 UG01BattleDirectorOfCharacterControlComponent::GetCurrentTurn() {
    return 0;
}

void UG01BattleDirectorOfCharacterControlComponent::GetCurrentCommandPattern(FG01BattleEnemyCommandTableRow& OutPattern) {
}

void UG01BattleDirectorOfCharacterControlComponent::GetCommandList(bool& ReFound, TArray<FG01BattleCommandUnit>& ReCommandList) {
}

UG01BattleDirectorOfCharacterControlComponent* UG01BattleDirectorOfCharacterControlComponent::GetCharacterControl(FName InID) {
    return NULL;
}

void UG01BattleDirectorOfCharacterControlComponent::GetCharacter(AActor*& OutActor) {
}

void UG01BattleDirectorOfCharacterControlComponent::ChangeCommandPattern(FName InID) {
}


