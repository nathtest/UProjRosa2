#include "G01ClassInfoTableRow.h"

FG01ClassInfoTableRow::FG01ClassInfoTableRow() {
    this->MGender = EG01CharaGender::Unknown;
    this->IsAchievementCount = false;
    this->AutoEquipCategory = EG01AutoEquipmentCategoryEnum::ATTACK_PRIORITY;
}

