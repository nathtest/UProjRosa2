#include "G01RoomParamTableRow.h"

FG01RoomParamTableRow::FG01RoomParamTableRow() {
    this->MIsUseMapMask = false;
    this->MVisitFlag = false;
    this->MIsHouse = false;
    this->MIsNotChangeAdjoinRoom = false;
    this->MIsUseParentWidget = false;
    this->MIsUseMaskSizeSetting = false;
    this->MMaskSizeX = 0;
    this->MMaskSizeY = 0;
    this->bDisableAutoSave = false;
}

