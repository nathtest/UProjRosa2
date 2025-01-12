#include "G01BattleEnemyThinkBase.h"

UG01BattleEnemyThinkBase::UG01BattleEnemyThinkBase() {
    this->Initialized = false;
    this->Self = NULL;
    this->SelfHandle = NULL;
    this->ManagerHandle = NULL;
}

void UG01BattleEnemyThinkBase::SetSelfCharacter(AActor* InSelf) {
}

void UG01BattleEnemyThinkBase::Cmd_BE_Self(UG01BattleCharacterHandle*& OutSelf) {
}

void UG01BattleEnemyThinkBase::Cmd_BE_Manager(UG01BattleManagerHandle*& OutManager) {
}


