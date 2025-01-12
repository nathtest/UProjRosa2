#include "G01BattleCommandUnit.h"

FG01BattleCommandUnit::FG01BattleCommandUnit() {
    this->MUniqueNo = 0;
    this->MTurnNo = 0;
    this->ActionCountId = 0;
    this->ActionCountNum = 0;
    this->MSourceType = EG01BattleCommandSource::Party;
    this->MSourceActor = NULL;
    this->MTargetActor = NULL;
    this->MBaseSpeed = 0;
    this->ActionCountSpeed = 0;
    this->MFluctureSpeed = 0;
    this->MActionSpeed = 0;
    this->CommandSpeed = 0;
    this->MCurrentSpeed = 0;
    this->CurrentSpeedSubOrder = 0;
    this->LinkOrder = 0;
    this->MIsFastTrick = false;
    this->MIsDelayAction = false;
    this->MListIndex = 0;
    this->MFormationNo = 0;
    this->MDuplicateNo = 0;
    this->CommandTaskObject = NULL;
    this->MTaskObject = NULL;
    this->MIsStarted = false;
    this->MIsFinished = false;
    this->MIsCancelled = false;
    this->MIsDenied = false;
    this->CautionInTimeline = false;
    this->MHiddenInTimeline = false;
    this->MIsMoveFrom = false;
    this->MIsMoveTo = false;
    this->IconMoveCount = 0;
    this->MIsLink = false;
    this->IsInserted = false;
    this->IsInsertToFront = false;
    this->IsInsertToBehind = false;
    this->IsOverrideSubTargetList = false;
    this->IsNonActive = false;
    this->IsHostile = false;
}

