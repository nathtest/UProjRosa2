#include "Smp_InventoryManagerBase.h"

ASmp_InventoryManagerBase::ASmp_InventoryManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MItemListDataTable = NULL;
}

bool ASmp_InventoryManagerBase::SubItem(FItemStructInfo InItemInfo) {
    return false;
}

void ASmp_InventoryManagerBase::GetItemReportToQuest(FItemStructInfo InItemInfo) {
}

FName ASmp_InventoryManagerBase::GetItemNameByItemID(FName InItemID) {
    return NAME_None;
}

TArray<FItemStructInfo> ASmp_InventoryManagerBase::GetItemByItemTypeID(EItemTypeID InItemTypeID) {
    return TArray<FItemStructInfo>();
}

TArray<FItemStructInfo> ASmp_InventoryManagerBase::GetAllItem() {
    return TArray<FItemStructInfo>();
}

bool ASmp_InventoryManagerBase::AddItemByID(FName InItemID, int32 InGetNum) {
    return false;
}

bool ASmp_InventoryManagerBase::AddItem(FItemStructInfo InItemInfo) {
    return false;
}


