#include "G01MenuInventoryFuncLib.h"

UG01MenuInventoryFuncLib::UG01MenuInventoryFuncLib() {
}

void UG01MenuInventoryFuncLib::SortInvenrotyItemStruct(TArray<FG01MenuInventoryItemInfoStruct>& InOutItems) {
}

void UG01MenuInventoryFuncLib::OverwriteEquippedItems(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, TMap<EG01InventoryItemEquiomentType, FName> InCurrent, TMap<EG01InventoryItemEquiomentType, FName> InPreview, TMap<EG01InventoryItemEquiomentType, FName>& OutMerged) {
}

void UG01MenuInventoryFuncLib::IsImpotantItemFromItemID(UG01ItemManagerAccessor* InItemAccessor, FName ItemId, bool& OutIsImpotant) {
}

void UG01MenuInventoryFuncLib::GetMenuWeaponList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, bool InIncludeKnuckles, bool InItemMenu, TArray<FG01MenuInventoryItemInfoStruct>& OutItems) {
}

void UG01MenuInventoryFuncLib::GetMenuShieldList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, bool InItemMenu, TArray<FG01MenuInventoryItemInfoStruct>& OutItems) {
}

void UG01MenuInventoryFuncLib::GetMenuEventItemList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, TArray<FG01MenuInventoryItemInfoStruct>& OutItems) {
}

void UG01MenuInventoryFuncLib::GetMenuCraftPartsList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, TArray<FG01MenuInventoryItemInfoStruct>& OutItems) {
}

void UG01MenuInventoryFuncLib::GetMenuConsumablesList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, bool InBattleItemsOnly, bool InItemMenu, TArray<FG01MenuInventoryItemInfoStruct>& OutItems) {
}

void UG01MenuInventoryFuncLib::GetMenuArmorList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, TEnumAsByte<EMenuEquipmentSlotType> InSlotType, bool InItemMenu, TArray<FG01MenuInventoryItemInfoStruct>& OutItems) {
}

void UG01MenuInventoryFuncLib::FillKnuclesItem(UG01InventoryManagerAccessor* InInventoryAccessor) {
}


