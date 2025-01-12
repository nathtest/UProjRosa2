#include "G01EnemyDefeatConditionParam.h"

FG01EnemyDefeatConditionParam::FG01EnemyDefeatConditionParam() {
    this->DefeatNum = 0;
    this->CheckType = EG01QCEnemyDefeatCheckType::Battle;
    this->CheckSpace = EG01QCEnemyDefeatCheckSpace::Global;
    this->TargetNumType = EG01QCEnemyDefeatTargetNumType::All;
}

