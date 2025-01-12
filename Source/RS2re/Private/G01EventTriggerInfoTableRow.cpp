#include "G01EventTriggerInfoTableRow.h"

FG01EventTriggerInfoTableRow::FG01EventTriggerInfoTableRow() {
    this->MJumpPoint = 0;
    this->MContributePoint = 0;
    this->MRankPoint = 0;
    this->MJumpType = EG01QStackPeriodJumpType::NotPeriodJump;
}

