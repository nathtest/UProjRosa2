#include "G01ShopUiController.h"

AG01ShopUiController::AG01ShopUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AG01ShopUiController::RequestShop(FG01ShopIDStruct ShopID, AActor* Actor) {
}


void AG01ShopUiController::Inf_G01ShopMenuPriceSort(TArray<FG01ShopSellDataStruct> SellDataList, TArray<FG01ShopSellDataStruct>& OutSellDataList) {
}

void AG01ShopUiController::Inf_G01ShopMenuCategorySort(TArray<FG01ShopSellDataStruct> SellDataList, TArray<FG01ShopSellDataStruct>& OutSellDataList) {
}

TArray<FG01ShopSalesDataStruct> AG01ShopUiController::GetShopSalesStruct(UDataTable* ShopSalesList) {
    return TArray<FG01ShopSalesDataStruct>();
}


