#include "G01ChangeEnemyAIStateAreaBase.h"

AG01ChangeEnemyAIStateAreaBase::AG01ChangeEnemyAIStateAreaBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentAIState = EAIState::AI_IDLE;
    this->ChangeAIState = EAIState::AI_IDLE;
}


