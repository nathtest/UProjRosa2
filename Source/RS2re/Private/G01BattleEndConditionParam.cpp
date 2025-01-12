#include "G01BattleEndConditionParam.h"

FG01BattleEndConditionParam::FG01BattleEndConditionParam() {
    this->EndCount = 0;
    this->CheckMask = EG01QCondBattlEndTypeMask::None;
    this->bIsLastEmperor = false;
}

