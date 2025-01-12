#include "G01BattleEnemyThinkTableRoutine.h"

UG01BattleEnemyThinkTableRoutine::UG01BattleEnemyThinkTableRoutine() {
    this->TurnAtReset = 0;
    this->TurnFromReset = 0;
    this->CommandCountFromReset = 0;
    this->ActionCountFromReset = 0;
    this->CommandCountInTurn = 0;
    this->ActionCountInTurn = 0;
}

void UG01BattleEnemyThinkTableRoutine::Cmd_BE_TurnFromReset(int32& OutTurn) {
}

void UG01BattleEnemyThinkTableRoutine::Cmd_BE_SelectTable_Implementation(EG01BattleEnemyCommandTable& OutTable) {
}

void UG01BattleEnemyThinkTableRoutine::Cmd_BE_RandomSelectByWeight(EG01BattleEnemyCommandTable& OutTable) {
}

void UG01BattleEnemyThinkTableRoutine::Cmd_BE_CommandCountInTurn(int32& OutCount) {
}

void UG01BattleEnemyThinkTableRoutine::Cmd_BE_CommandCountFromReset(int32& OutCount) {
}

void UG01BattleEnemyThinkTableRoutine::Cmd_BE_ActionCountInTurn(int32& OutCount) {
}

void UG01BattleEnemyThinkTableRoutine::Cmd_BE_ActionCountFromReset(int32& OutCount) {
}


