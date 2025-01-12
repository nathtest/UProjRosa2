#include "G01ElevatorControllerBase.h"

AG01ElevatorControllerBase::AG01ElevatorControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MEntranceTypeDataTable = NULL;
}

void AG01ElevatorControllerBase::StopDriveAnimation() {
}

void AG01ElevatorControllerBase::SetSwitchMesh(UObject* InSwitchMesh) {
}

void AG01ElevatorControllerBase::SetGateMesh(UObject* InGateMesh) {
}

void AG01ElevatorControllerBase::SetDriveMesh(UObject* InDriveMesh) {
}

bool AG01ElevatorControllerBase::PlaySwitchAnimation() {
    return false;
}

bool AG01ElevatorControllerBase::PlayGateAnimation(bool InIsOpen) {
    return false;
}

bool AG01ElevatorControllerBase::PlayDriveAnimation(bool InIsRise) {
    return false;
}

bool AG01ElevatorControllerBase::IsOpened() {
    return false;
}

bool AG01ElevatorControllerBase::IsControllable() {
    return false;
}

UObject* AG01ElevatorControllerBase::GetSwitchMesh() {
    return NULL;
}

UAnimationAsset* AG01ElevatorControllerBase::GetSwitchAnimationAsset() {
    return NULL;
}

UObject* AG01ElevatorControllerBase::GetGateMesh() {
    return NULL;
}

UAnimationAsset* AG01ElevatorControllerBase::GetGateAnimationAsset(bool InIsOpen) {
    return NULL;
}

FG01GimmickElevatorEntranceSettingTableRow AG01ElevatorControllerBase::GetEntranceSetting() {
    return FG01GimmickElevatorEntranceSettingTableRow{};
}

UObject* AG01ElevatorControllerBase::GetDriveMesh() {
    return NULL;
}

UAnimationAsset* AG01ElevatorControllerBase::GetDriveAnimationAsset(bool InIsRise) {
    return NULL;
}

void AG01ElevatorControllerBase::CallElevator() {
}


