#include "VirtualKeyboardBase.h"

UVirtualKeyboardBase::UVirtualKeyboardBase() {
}

bool UVirtualKeyboardBase::ShowKeyboard(const FVirtualKeyboardShowParams& InParams, const FOnVirtualKeyboardDismiss& InCallback) {
    return false;
}

FVirtualKeyboardShowParams UVirtualKeyboardBase::GetShowParams() const {
    return FVirtualKeyboardShowParams{};
}

EVirtualKeyboardOptionMask UVirtualKeyboardBase::GetOptions() const {
    return EVirtualKeyboardOptionMask::None;
}


