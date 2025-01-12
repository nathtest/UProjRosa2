#include "G01FieldNpcBase.h"
#include "G01FieldNpcUROComponent.h"

AG01FieldNpcBase::AG01FieldNpcBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnableDitherStartLength = -1.00f;
    this->EnableDitherEndLength = -1.00f;
    this->MObjectIconType = EG01InteractObjectIconType::None;
    this->IsVisibleObjectIcon = true;
    this->MUROComponent = CreateDefaultSubobject<UG01FieldNpcUROComponent>(TEXT("URO Component"));
    this->NpcUniqueAnimStartPosition = 0.00f;
}

void AG01FieldNpcBase::SetVisibleObjectIcon(bool Invisible) {
}

void AG01FieldNpcBase::SetObjectIconType(EG01InteractObjectIconType InIconType) {
}

void AG01FieldNpcBase::SetNpcUniqueAnimStartPosition(float InStartPosition) {
}

void AG01FieldNpcBase::SetNpcUniqueAnimID(FG01UniqueFieldAnimIDStruct InNpcUniqueAnimID) {
}

void AG01FieldNpcBase::OnPlayMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

bool AG01FieldNpcBase::GetVisibleObjectIcon() {
    return false;
}

EG01InteractObjectIconType AG01FieldNpcBase::GetObjectIconType() {
    return EG01InteractObjectIconType::None;
}

FName AG01FieldNpcBase::GetObjectIconName() const {
    return NAME_None;
}

float AG01FieldNpcBase::GetNpcUniqueAnimStartPosition() {
    return 0.0f;
}

FG01UniqueFieldAnimIDStruct AG01FieldNpcBase::GetNpcUniqueAnimID() {
    return FG01UniqueFieldAnimIDStruct{};
}

void AG01FieldNpcBase::DeactivateObjectIcon_Implementation() {
}

void AG01FieldNpcBase::CreateEvent_Implementation() {
}

void AG01FieldNpcBase::ActivateObjectIcon_Implementation() {
}


