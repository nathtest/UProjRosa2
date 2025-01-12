#include "G01StoneShipPlayerBase.h"

AG01StoneShipPlayerBase::AG01StoneShipPlayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MAnimBPClass = NULL;
    this->MEnableReEncountTime = 0.00f;
    this->MDashType = EG01PlayerDashType::Auto;
}

void AG01StoneShipPlayerBase::SetRotationRate(FRotator InRotationRate) {
}

void AG01StoneShipPlayerBase::RequestInteraction() {
}



void AG01StoneShipPlayerBase::OnInitCharacter() {
}


void AG01StoneShipPlayerBase::OnCompleteReadyMove() {
}

void AG01StoneShipPlayerBase::OnCompleteForceRotateCamera() {
}

void AG01StoneShipPlayerBase::OnCompleteForceMove() {
}

bool AG01StoneShipPlayerBase::IsInteractionAvailable() {
    return false;
}



FRotator AG01StoneShipPlayerBase::GetRotationRate() {
    return FRotator{};
}

FRotator AG01StoneShipPlayerBase::GetDefaultRotationRate() {
    return FRotator{};
}


void AG01StoneShipPlayerBase::EnableInteract() {
}

void AG01StoneShipPlayerBase::DisableInteract() {
}




