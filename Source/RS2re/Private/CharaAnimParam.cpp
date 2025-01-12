#include "CharaAnimParam.h"

FCharaAnimParam::FCharaAnimParam() {
    this->MCharaCategory = EG01CharaCategory::PLAYER;
    this->MCharaAnimType = EG01CharaAnimType::FIELD;
    this->MIdleRunBlendSpaceFieldAnim = NULL;
    this->MIdleDashBlendSpaceFieldAnim = NULL;
}

