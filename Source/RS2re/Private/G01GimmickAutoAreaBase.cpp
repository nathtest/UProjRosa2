#include "G01GimmickAutoAreaBase.h"

AG01GimmickAutoAreaBase::AG01GimmickAutoAreaBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsUseCustomInterval = false;
    this->MIntervalSeconds = 60.00f;
}

void AG01GimmickAutoAreaBase::SetTimer() {
}

bool AG01GimmickAutoAreaBase::IsEnableAction() {
    return false;
}

float AG01GimmickAutoAreaBase::GetIntervalSeconds() const {
    return 0.0f;
}

float AG01GimmickAutoAreaBase::GetCustomIntervalSeconds_Implementation() const {
    return 0.0f;
}


