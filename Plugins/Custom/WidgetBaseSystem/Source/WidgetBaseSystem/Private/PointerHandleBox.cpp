#include "PointerHandleBox.h"

UPointerHandleBox::UPointerHandleBox() {
    this->ObjectID = 0;
    this->NotifyName = TEXT("None");
    this->IsClickable = true;
    this->KeepTracking = false;
    this->IgnoreHoldTriggerDelay = false;
}

void UPointerHandleBox::SetObjectID(int32 InObjectID) {
}

void UPointerHandleBox::SetNotifyName(const FString& InNotifyName) {
}

void UPointerHandleBox::SetKeepTracking(bool InKeepTracking) {
}

void UPointerHandleBox::SetIsClickable(bool InIsClickable) {
}

void UPointerHandleBox::SetIgnoreHoldTriggerDelay(bool InIgnoreHoldTriggerDelay) {
}

void UPointerHandleBox::SetControlWidget(UAppUserWidget* InControlWidget) {
}

bool UPointerHandleBox::IsPressed() {
    return false;
}

bool UPointerHandleBox::IsFastPathVisible() {
    return false;
}

int32 UPointerHandleBox::GetObjectID() {
    return 0;
}

FString UPointerHandleBox::GetNotifyName() {
    return TEXT("");
}

bool UPointerHandleBox::GetKeepTracking() {
    return false;
}

bool UPointerHandleBox::GetIsClickable() {
    return false;
}

bool UPointerHandleBox::GetIgnoreHoldTriggerDelay() {
    return false;
}

UAppUserWidget* UPointerHandleBox::GetControlWidget() {
    return NULL;
}


