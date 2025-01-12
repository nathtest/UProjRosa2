#include "G01TextTagOperationTableRow.h"

FG01TextTagOperationTableRow::FG01TextTagOperationTableRow() {
    this->Type = EG01TextTagType::Begin;
    this->Command = EG01TextTagCommand::None;
}

