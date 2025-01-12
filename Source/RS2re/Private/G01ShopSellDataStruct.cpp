#include "G01ShopSellDataStruct.h"

FG01ShopSellDataStruct::FG01ShopSellDataStruct() {
    this->Price = 0;
    this->ItemNum = 0;
    this->ItemCategory = EG01ShopSortCategoryEnum::SWD;
    this->MIsImportant = false;
    this->MPower = 0;
    this->MPriority = 0;
}

