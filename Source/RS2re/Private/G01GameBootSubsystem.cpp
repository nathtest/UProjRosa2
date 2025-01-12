#include "G01GameBootSubsystem.h"

UG01GameBootSubsystem::UG01GameBootSubsystem() {
    this->IsLevelStrimingEnable = true;
}

void UG01GameBootSubsystem::SetPlayFromHereRoomId(FRoomID InRoomId) {
}

void UG01GameBootSubsystem::SetIsLevelStrimingEnable(bool InFlag) {
}

FRoomID UG01GameBootSubsystem::GetPlayFromHereRoomId() {
    return FRoomID{};
}

bool UG01GameBootSubsystem::GetIsLevelStrimingEnable() {
    return false;
}


