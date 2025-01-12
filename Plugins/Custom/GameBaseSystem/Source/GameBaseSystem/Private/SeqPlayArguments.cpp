#include "SeqPlayArguments.h"

FSeqPlayArguments::FSeqPlayArguments() {
    this->PlayCount = 0;
    this->IsAutoDestroy = false;
    this->IsCreateNewInstance = false;
    this->OriginActor = NULL;
    this->bIsUseLoadFade = false;
}

