#include "G01SeqPlayArg_BattleArts.h"

FG01SeqPlayArg_BattleArts::FG01SeqPlayArg_BattleArts() {
    this->MType = EBattleActionNameType::NONE;
    this->MIsInspiration = false;
    this->MIsFathom = false;
    this->MIsFathomInspiration = false;
    this->MIsCounter = false;
    this->MIsCounterInspiration = false;
    this->MIsCounteredSide = false;
    this->LinkCameraRangeType = EG01BattleLinkCameraRange::NearSingle;
    this->LinkLaneOrder = 0;
    this->bRecalculateOcclusionCulling = false;
}

