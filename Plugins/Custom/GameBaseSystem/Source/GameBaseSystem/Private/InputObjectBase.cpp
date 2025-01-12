#include "InputObjectBase.h"
#include "InputManagerAccessComponent.h"

AInputObjectBase::AInputObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUsePlayerControllerIndex = 0;
    this->MbAllowInputSharing = false;
    this->MPriorityGroup = EInputObjectPriorityGroup::THIRD;
    this->MIsMouseCursorInput = false;
    this->MInputManagerAccessor = CreateDefaultSubobject<UInputManagerAccessComponent>(TEXT("InputManagerAccessor"));
}

void AInputObjectBase::SystemInputUpdateCursor(float InAxisX, float InAxisY, float InSpeed, float InDeltaTime) {
}

void AInputObjectBase::SystemInputTriggerMouseWheelAxis(float InSpeedDelta) {
}

void AInputObjectBase::SystemInputTriggerMouseRelease() {
}

void AInputObjectBase::SystemInputTriggerMousePress() {
}

void AInputObjectBase::SettingMouseCursorInput(bool InFlag) const {
}

void AInputObjectBase::RequestInputPause(EInputRegistResult& OutBranches) {
}

void AInputObjectBase::RequestInputAuthority(int32 InControllerIndex, EInputRegistResult& OutBranches) {
}

void AInputObjectBase::ReleaseInputPause(EInputRegistResult& OutBranches) {
}

void AInputObjectBase::ReleaseInputAuthority() {
}

void AInputObjectBase::OnSecessionInputSharingObject_Implementation(int32 InSharingObjNum) {
}

void AInputObjectBase::OnJoinInputSharingObject_Implementation(int32 InSharingObjNum) {
}

void AInputObjectBase::OnInputPause_Implementation() {
}

void AInputObjectBase::OnInputDeactivate_Implementation() {
}

void AInputObjectBase::OnInputActivate_Implementation() {
}

void AInputObjectBase::OnApplicationWillDeactivate_Implementation() {
}

void AInputObjectBase::OnApplicationHasReactivated_Implementation() {
}

bool AInputObjectBase::IsMouseCursorInput() {
    return false;
}

bool AInputObjectBase::IsAllowInputSharing() const {
    return false;
}

bool AInputObjectBase::HasInputAuthority() const {
    return false;
}

int32 AInputObjectBase::GetUsePlayerControllerIndex() const {
    return 0;
}

EInputObjectState AInputObjectBase::GetInputObjectState() const {
    return EInputObjectState::NONE;
}

EInputObjectPriorityGroup AInputObjectBase::GetInputObjectPriorityGroup() const {
    return EInputObjectPriorityGroup::SYSTEM;
}

EInputObjectState AInputObjectBase::GetInputObjectPrevState() const {
    return EInputObjectState::NONE;
}

void AInputObjectBase::EnableMouseCursorInput() {
}

void AInputObjectBase::DisableMouseCursorInput() {
}

void AInputObjectBase::ChangeInputSharingSetting(bool InIsAllowInputSharing) {
}


