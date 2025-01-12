#include "G01BlackSmithMenuCategoryDataStruct.h"

FG01BlackSmithMenuCategoryDataStruct::FG01BlackSmithMenuCategoryDataStruct() {
    this->ItemCategoryID = EG01BlackSmithMenuItemCategoryEnum::SWD;
    this->AgeJumpFlag = false;
    this->Price = 0;
    this->BlackSmithMenuBattleNum = 0;
    this->ShopDistributionFlag = false;
    this->RepetitionDevFlag = false;
    this->EquipmentDevFlag = false;
    this->NationalStrengthValue = 0;
}

