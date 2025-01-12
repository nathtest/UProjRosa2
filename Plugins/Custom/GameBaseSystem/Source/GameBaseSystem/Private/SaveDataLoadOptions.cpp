#include "SaveDataLoadOptions.h"

FSaveDataLoadOptions::FSaveDataLoadOptions() {
    this->bCreateWhenNotExist = false;
    this->bIsTempLoad = false;
    this->LoadTarget = ESaveDataLoadTarget::Normal;
    this->bIsAutoVersionUpdate = false;
    this->PropertyResetFlags = 0;
    this->PropertyTypes = 0;
}

