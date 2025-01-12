#include "KeyConfigSubsystem.h"

UKeyConfigSubsystem::UKeyConfigSubsystem() {
    this->Helper = NULL;
}

bool UKeyConfigSubsystem::UpdateKeyAssign(const FKeyConfigAssignDataWork& InWork, bool InIsForceUpdate) {
    return false;
}

bool UKeyConfigSubsystem::IsDirtyWorkData(const FKeyConfigAssignDataWork& InWork) {
    return false;
}

FKeyConfigAssignDataWork UKeyConfigSubsystem::CreateWorkData(EKeyConfigType InKeyConfigType, EKeyConfigAssignDataType InDataType) {
    return FKeyConfigAssignDataWork{};
}


