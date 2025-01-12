#include "VirtualKeyboardShowParams.h"

FVirtualKeyboardShowParams::FVirtualKeyboardShowParams() {
    this->InputMode = EVirtualKeyboardInputMode::Default;
    this->LineMode = EVirtualKeyboardInputLineMode::Single;
    this->Options = 0;
    this->InputCharMax = 0;
    this->UserIndex = 0;
}

