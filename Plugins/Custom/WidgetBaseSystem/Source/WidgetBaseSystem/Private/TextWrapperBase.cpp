#include "TextWrapperBase.h"

UTextWrapperBase::UTextWrapperBase() {
    this->bIsEnableProhibition = true;
    this->bIsUpdateInTheViewportOnly = false;
    this->bIsUseManualPixelSize = false;
    this->MaxLine = 0;
    this->bIsInitialized = false;
}


