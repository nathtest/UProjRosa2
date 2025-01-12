#include "G01ShopUiControllerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01ShopUiControllerAccessor::UG01ShopUiControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::SHOP_MENU;
}

void UG01ShopUiControllerAccessor::RequestShopMenu(FG01ShopIDStruct ShopID, AActor* Actor) {
}


