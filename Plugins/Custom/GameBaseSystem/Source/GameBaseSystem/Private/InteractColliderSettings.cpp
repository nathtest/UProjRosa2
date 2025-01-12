#include "InteractColliderSettings.h"

FInteractColliderSettings::FInteractColliderSettings() {
    this->MLookingAt = EInteractLookingAtType::LOOKING_AT_POINT;
    this->MAvailableRange = EInteractAvailableRange::ALL;
    this->SenderAvailableRange = EInteractAvailableRange::ALL;
    this->MInteractBaseType = EInteractBaseType::FROM_ACTOR;
    this->IsEnableLineTrace = false;
}

