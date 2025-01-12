#include "SwitcherFlagImage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagEventReceiveComponent -FallbackName=FlagEventReceiveComponent

USwitcherFlagImage::USwitcherFlagImage() {
    this->DispFlagValue = false;
    this->FlagReverse = false;
    this->MFlagEventReceiver = CreateDefaultSubobject<UFlagEventReceiveComponent>(TEXT("FlagEventReceiver"));
}

void USwitcherFlagImage::OnFlagChanged(const FFlagChangedEventParam& InParam) {
}

void USwitcherFlagImage::ConditionCheck() {
}

void USwitcherFlagImage::AddCondition() {
}


