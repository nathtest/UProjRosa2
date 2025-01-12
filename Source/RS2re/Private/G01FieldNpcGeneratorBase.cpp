#include "G01FieldNpcGeneratorBase.h"

AG01FieldNpcGeneratorBase::AG01FieldNpcGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MAIParamEdit = false;
    this->MAIState = EAIState::AI_IDLE;
    this->MIsBeginAI = false;
    this->MAIBehaviorTree = NULL;
    this->EnableRadius = 0.00f;
    this->MEnableHeight = -1.00f;
    this->IsEnableGaze = false;
    this->DitherDistRate = 0.90f;
    this->EnableDispRadius = 500.00f;
    this->EnableDitherStartLength = 200.00f;
    this->EnableDitherEndLength = 100.00f;
    this->ForceUpdateDither = false;
    this->ObjectIconType = EG01InteractObjectIconType::None;
    this->IsVisibleObjectIcon = true;
}


