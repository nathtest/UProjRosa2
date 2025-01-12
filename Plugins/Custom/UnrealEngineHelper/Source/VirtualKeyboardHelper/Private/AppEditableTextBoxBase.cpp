#include "AppEditableTextBoxBase.h"

UAppEditableTextBoxBase::UAppEditableTextBoxBase() {
    this->bIsTextOverAdjust = false;
    this->VirtualKeyboard = NULL;
    this->bIsTextUpdating = false;
    this->bIsKeyboardCancel = false;
}

void UAppEditableTextBoxBase::ShowVirtualKeyboard() {
}

void UAppEditableTextBoxBase::SetOptions(int32 InOptions) {
}

void UAppEditableTextBoxBase::SetKeyboardCancel(bool InCancel) {
}

void UAppEditableTextBoxBase::SetInputCharMax(int32 InCharMax) {
}

void UAppEditableTextBoxBase::RemoveOptions(int32 InOptions) {
}

void UAppEditableTextBoxBase::OnVirtualKeyboardDismiss(const FVirtualKeyboardDismissResult& InResult) {
}

void UAppEditableTextBoxBase::OnFocusReceived() {
}

void UAppEditableTextBoxBase::OnFocusLost() {
}

bool UAppEditableTextBoxBase::IsKeyboardCancel() const {
    return false;
}

FString UAppEditableTextBoxBase::GetInputText() const {
    return TEXT("");
}

void UAppEditableTextBoxBase::AddOptions(int32 InOptions) {
}


