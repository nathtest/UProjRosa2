#include "FlagSubsystem.h"

UFlagSubsystem::UFlagSubsystem() {
    this->Helper = NULL;
    this->bIsDuringBroadcastChangeEvent = false;
}

void UFlagSubsystem::SetFlag(const FFlagAccessParam& InAccessParam, bool InSetValue) {
}

void UFlagSubsystem::ImmediateBroadcastChangedEvent() {
}

void UFlagSubsystem::GetFlag(bool& OutValue, const FFlagAccessParam& InAccessParam) const {
}

FFlagAccessParam UFlagSubsystem::CreateFlagAccessParam(FFlagIDListViewStruct InFlagID) {
    return FFlagAccessParam{};
}


