#include "SequenceSettingDataAsset.h"

USequenceSettingDataAsset::USequenceSettingDataAsset() {
    this->LoadCompleteDelayTime = 0.50f;
    this->FadeOutDelayFrame = 3;
    this->UseAnimInstClass = NULL;
    this->MainDefaultSlotIndex = 0;
    this->SubDefaultSlotIndex = 1;
    this->PhysicsEaseInTimeAtBind_Default = 0.00f;
    this->VisualActorCommonSettings = NULL;
}


