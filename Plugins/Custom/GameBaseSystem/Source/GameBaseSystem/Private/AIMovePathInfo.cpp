#include "AIMovePathInfo.h"

FAIMovePathInfo::FAIMovePathInfo() {
    this->MPathMoveSate = EPathMoveState::AI_PATH_MOVE_LOOP;
    this->MReverseFlag = false;
    this->MMoveID = EAISpeed::AI_SPEED_RUN;
}

