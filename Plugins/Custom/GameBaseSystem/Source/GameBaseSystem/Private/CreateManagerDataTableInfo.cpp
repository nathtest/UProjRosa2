#include "CreateManagerDataTableInfo.h"

FCreateManagerDataTableInfo::FCreateManagerDataTableInfo() {
    this->MPriority = EManagerCreatePriority::TopLoad;
    this->CreateType = EManagerCreateType::STANDARD_TYPE;
}

