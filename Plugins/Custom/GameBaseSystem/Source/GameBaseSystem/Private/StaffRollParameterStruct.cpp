#include "StaffRollParameterStruct.h"

FStaffRollParameterStruct::FStaffRollParameterStruct() {
    this->TextType = ESTAFFROLL_TEXTTYPE::Title;
    this->OperationType = ESTAFFROLL_OPERATIONTYPE::DownUpScroll;
    this->StartTime = 0.00f;
    this->DurationTime = 0.00f;
    this->Speed = 0.00f;
    this->FontSize = 0;
    this->AdjustWidth = 0.00f;
    this->Image = NULL;
}

