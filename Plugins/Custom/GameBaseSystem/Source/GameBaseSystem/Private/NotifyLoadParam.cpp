#include "NotifyLoadParam.h"

FNotifyLoadParam::FNotifyLoadParam() {
    this->IsSuccess = false;
    this->SaveData = NULL;
    this->Error = ESaveDataLoadError::NoError;
}

