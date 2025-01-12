#include "G01TermEggBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAIState -FallbackName=EAIState

AG01TermEggBase::AG01TermEggBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentAIState = EAIState::AI_AMBUSH;
    this->ChangeAIState = EAIState::AI_AMBUSHBREAK_COLLISION;
}

void AG01TermEggBase::OnPlayHatchingAnim_Implementation() {
}


