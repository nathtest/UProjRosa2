#include "G01ElevatorBase.h"

AG01ElevatorBase::AG01ElevatorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MElevatorTypeDataTable = NULL;
}

void AG01ElevatorBase::SetSwitchMesh(UObject* InSwitchMesh) {
}

void AG01ElevatorBase::SetElevatorMesh(UObject* InElevatorMesh) {
}

void AG01ElevatorBase::SetCounterObjectPosition_Implementation(FVector InPos) {
}

bool AG01ElevatorBase::PlaySwitchAnimation() {
    return false;
}



bool AG01ElevatorBase::PlayGateAnimation(bool InIsOpen, bool InIsForward) {
    return false;
}

void AG01ElevatorBase::MoveNextFloor() {
}

bool AG01ElevatorBase::IsOpened() const {
    return false;
}

bool AG01ElevatorBase::IsIdle() const {
    return false;
}

UObject* AG01ElevatorBase::GetSwitchMesh() {
    return NULL;
}

UAnimationAsset* AG01ElevatorBase::GetSwitchAnimationAsset() {
    return NULL;
}

void AG01ElevatorBase::GetStartSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName) {
}

void AG01ElevatorBase::GetLoopSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName) {
}

UAnimationAsset* AG01ElevatorBase::GetGateAnimationAsset(bool InIsOpen, bool InIsForward) {
    return NULL;
}

void AG01ElevatorBase::GetEndSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName) {
}

FG01GimmickElevatorSettingTableRow AG01ElevatorBase::GetElevatorSetting() {
    return FG01GimmickElevatorSettingTableRow{};
}

UObject* AG01ElevatorBase::GetElevatorMesh() {
    return NULL;
}

FVector AG01ElevatorBase::GetDefaultCounterObjectPosition() {
    return FVector{};
}


