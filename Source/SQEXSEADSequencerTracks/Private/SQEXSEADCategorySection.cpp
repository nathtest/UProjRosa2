#include "SQEXSEADCategorySection.h"

USQEXSEADCategorySection::USQEXSEADCategorySection() {
    this->bAutoRestoreVolume = true;
    this->RestoreVolumeFadeTime = 1.00f;
}

FName USQEXSEADCategorySection::GetCategoryName() const {
    return NAME_None;
}

FName USQEXSEADCategorySection::GetCategoryLayerName() const {
    return NAME_None;
}


