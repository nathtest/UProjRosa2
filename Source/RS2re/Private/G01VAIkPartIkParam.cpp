#include "G01VAIkPartIkParam.h"

FG01VAIkPartIkParam::FG01VAIkPartIkParam() {
    this->IsActive = false;
    this->IkType = EG01VAIkType::CCDIK;
    this->IkRefCount = 0;
}

