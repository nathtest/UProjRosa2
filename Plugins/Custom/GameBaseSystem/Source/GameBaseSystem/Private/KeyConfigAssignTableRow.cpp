#include "KeyConfigAssignTableRow.h"

FKeyConfigAssignTableRow::FKeyConfigAssignTableRow() {
    this->InputType = EKeyConfigInputMappingType::Action;
    this->IgnoreErrors = 0;
    this->InitOptions = 0;
    this->bIsCircularDependence = false;
}

