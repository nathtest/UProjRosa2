#include "G01BattleLinkInterpMappingTableRow.h"

FG01BattleLinkInterpMappingTableRow::FG01BattleLinkInterpMappingTableRow() {
    this->CurrentCameraRange = EG01BattleLinkCameraRange::NearSingle;
    this->NextCameraRange = EG01BattleLinkCameraRange::NearSingle;
    this->InterpFrame = 0;
    this->InterpCurve = NULL;
}

