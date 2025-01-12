#include "G01ItemManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01ItemManagerAccessor::UG01ItemManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_ITEM;
}

void UG01ItemManagerAccessor::GetItemWeaponTypeByItemID(FName InItemID, EG01ItemWeaponType& OutWeaponType) {
}

void UG01ItemManagerAccessor::GetItemWeaponDataByItemID(FName InItemID, FG01ItemWeaponDataStruct& OutData) {
}

void UG01ItemManagerAccessor::GetItemShieldDataByItemID(FName InItemID, FG01ItemShieldDataStruct& OutData) {
}

void UG01ItemManagerAccessor::GetItemNameByItemID(FName InItemID, FText& OutItemName) {
}

void UG01ItemManagerAccessor::GetItemEventDataByItemID(FName InItemID, FG01ItemEventDataStruct& OutData) {
}

void UG01ItemManagerAccessor::GetItemEquipmentDevlopTypeByItemID(FName InItemID, EG01ItemEquipmentDevlopType& OutDevlopType) {
}

void UG01ItemManagerAccessor::GetItemDataByItemID(FName InItemID, FG01ItemDataStruct& OutData) {
}

void UG01ItemManagerAccessor::GetItemCraftPartsDataByItemID(FName InItemID, FG01ItemCraftPartsDataStruct& OutData) {
}

int32 UG01ItemManagerAccessor::GetItemCountMaxLimitByItemID(FName InItemID) {
    return 0;
}

void UG01ItemManagerAccessor::GetItemConsumablesTypeByItemID(FName InItemID, EG01ItemConsumablesType& OutConsumablesType) {
}

void UG01ItemManagerAccessor::GetItemConsumablesDataByItemID(FName InItemID, FG01ItemConsumablesDataStruct& OutData) {
}

void UG01ItemManagerAccessor::GetItemCategoryNameByItemID(FName InItemID, FName& OutItemCategoryName) {
}

void UG01ItemManagerAccessor::GetItemCategoryDataByItemID(FName InItemID, FG01ItemCategoryStruct& OutData) {
}

void UG01ItemManagerAccessor::GetItemCategoryDataByItemCategory(FName inItemCategory, FG01ItemCategoryStruct& OutData) {
}

void UG01ItemManagerAccessor::GetItemArmorPartsTypeByItemID(FName InItemID, EG01ItemArmorPartsType& OutPartsType) {
}

void UG01ItemManagerAccessor::GetItemArmorDataByItemID(FName InItemID, FG01ItemArmorDataStruct& OutData) {
}

void UG01ItemManagerAccessor::GetItemArmorCorrectionIDByItemID(FName InItemID, EG01ItemArmorCorrectionID& OutCorrectionID, int32& CollectionParam) {
}

void UG01ItemManagerAccessor::GetItemArmorCategoryDataByItemCategory(FName inItemCategory, FG01ItemArmorCategoryStruct& OutData) {
}

void UG01ItemManagerAccessor::GetItemAbilityDataByItemID(FName InItemID, FG01ItemAbilityDataStruct& OutData) {
}

void UG01ItemManagerAccessor::GetFieldItemDataByFieldItemID(FG01FieldItemIDStruct InFieldItemID, FG01FieldItemDataStruct& OutData) {
}

void UG01ItemManagerAccessor::GetDropItemDataByDropItemID(FDropItemTableID InDropItemID, FG01DropItemParameter& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemWeaponData(TArray<FG01ItemWeaponDataStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemWeaponCategoryData(TArray<FG01ItemCategoryStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemShieldData(TArray<FG01ItemShieldDataStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemShieldCategoryData(TArray<FG01ItemCategoryStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemEventData(TArray<FG01ItemEventDataStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemEventCategoryData(TArray<FG01ItemCategoryStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemData(TArray<FG01ItemDataStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemCraftPartsData(TArray<FG01ItemCraftPartsDataStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemCraftPartsCategoryData(TArray<FG01ItemCategoryStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemConsumablesData(TArray<FG01ItemConsumablesDataStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemConsumablesCategoryData(TArray<FG01ItemCategoryStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemCategory(TArray<FG01ItemCategoryStruct>& OutList) {
}

void UG01ItemManagerAccessor::GetAllItemArmorData(TArray<FG01ItemArmorDataStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemArmorCategoryData(TArray<FG01ItemArmorCategoryStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemAbilityData(TArray<FG01ItemAbilityDataStruct>& OutData) {
}

void UG01ItemManagerAccessor::GetAllItemAbilityCategoryData(TArray<FG01ItemCategoryStruct>& OutData) {
}

bool UG01ItemManagerAccessor::ExistItemID(FName InItemID) {
    return false;
}

bool UG01ItemManagerAccessor::ExistDropItemID(FDropItemTableID InDropItemID) {
    return false;
}


