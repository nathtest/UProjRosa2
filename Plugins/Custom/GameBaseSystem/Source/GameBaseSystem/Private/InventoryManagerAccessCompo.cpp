#include "InventoryManagerAccessCompo.h"
#include "EManagerID.h"

UInventoryManagerAccessCompo::UInventoryManagerAccessCompo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_INVENTORY;
}

bool UInventoryManagerAccessCompo::SubItem(FItemStructInfo InItemInfo) {
    return false;
}

TArray<FItemStructInfo> UInventoryManagerAccessCompo::GetItemByItemTypeID(EItemTypeID InItemTypeID) {
    return TArray<FItemStructInfo>();
}

bool UInventoryManagerAccessCompo::AddItemByID(FName InItemID, int32 InItemNum) {
    return false;
}


