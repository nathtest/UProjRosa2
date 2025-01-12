#include "RichTextElemBase.h"

URichTextElemBase::URichTextElemBase() {
    this->bIsActive = false;
    this->Prev = NULL;
    this->Next = NULL;
    this->bIsRegistered = false;
}


