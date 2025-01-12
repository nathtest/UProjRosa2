#include "G01ShopDataStruct.h"

FG01ShopDataStruct::FG01ShopDataStruct() {
    this->ShopCategory = EG01ShopCategoryEnum::DEFAULT;
    this->ShopSalesList = NULL;
    this->ShopClerkReaction = NULL;
    this->ShopDiscountRate = NULL;
}

