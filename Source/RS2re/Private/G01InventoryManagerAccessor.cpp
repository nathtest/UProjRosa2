#include "G01InventoryManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01InventoryManagerAccessor::UG01InventoryManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_INVENTORY;
}

void UG01InventoryManagerAccessor::UnEquipmentInventoryItem(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType) {
}

void UG01InventoryManagerAccessor::TakeoverNext() {
}

void UG01InventoryManagerAccessor::SetAutoReplenish(FName InItemID, bool Is) {
}

void UG01InventoryManagerAccessor::RemoveInventoryItems(FName InItemID, int32 InCount, int32& OutRemoveCount) {
}

void UG01InventoryManagerAccessor::RemoveInventoryItem(FName InItemID) {
}

void UG01InventoryManagerAccessor::PushToMemento() {
}

void UG01InventoryManagerAccessor::PopToMemento(bool InIsEquipment) {
}

void UG01InventoryManagerAccessor::OverrideItemOwner(FG01CharacterID InTargetID, FG01CharacterID InOverrideID) {
}

void UG01InventoryManagerAccessor::GetUsageTypeInventoryItem(EG01ItemUsageType InUsageType, TArray<FG01InventoryItemStruct>& OutData) {
}

void UG01InventoryManagerAccessor::GetSlotEquipment(FG01CharacterID InCharacterId, EG01InventoryItemEquiomentType InEquipmentType, FG01InventoryItemStruct& OutItem) {
}

bool UG01InventoryManagerAccessor::GetMaxDamageWeapon(FName InWeaponCategory, FG01InventoryItemStruct& OutData) {
    return false;
}

void UG01InventoryManagerAccessor::GetItemLog(FName InItemID, FG01InventoryItemLogStruct& OutItemLog) {
}

void UG01InventoryManagerAccessor::GetItemAllLog(TArray<FG01InventoryItemLogStruct>& OutItemLogList) {
}

void UG01InventoryManagerAccessor::GetInventoryItem(FName InItemID, FG01InventoryItemStruct& OutData) {
}

void UG01InventoryManagerAccessor::GetInventoryAllItem(TArray<FG01InventoryItemStruct>& OutData) {
}

void UG01InventoryManagerAccessor::GetEquipmentInventoryItem(FG01CharacterID InCharacterId, TArray<FG01InventoryItemStruct>& OutData) {
}

bool UG01InventoryManagerAccessor::ExistInventoryItem(FName InItemID) {
    return false;
}

void UG01InventoryManagerAccessor::EquipmentInventoryItem(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType) {
}

void UG01InventoryManagerAccessor::CreateCache() {
}

bool UG01InventoryManagerAccessor::CheckSpaceInventoryItems(FName InItemID, int32 InCount, int32& OutRemainingCount) {
    return false;
}

bool UG01InventoryManagerAccessor::CheckSpaceInventoryItem(FName InItemID) {
    return false;
}

bool UG01InventoryManagerAccessor::CheckAutoReplenish(FName InItemID) {
    return false;
}

void UG01InventoryManagerAccessor::ChechSlotEquipment(FG01CharacterID InCharacterId, EG01InventoryItemEquiomentType InEquipmentType, bool& OutResult) {
}

void UG01InventoryManagerAccessor::ApplyCache() {
}

void UG01InventoryManagerAccessor::AddInventoryItems(FName InItemID, int32 InCount, EG01InventoryItemNotifyType InNotifyType, bool& OutIsRemaining, int32& OutRemainingCount) {
}

void UG01InventoryManagerAccessor::AddInventoryItem(FName InItemID, EG01InventoryItemNotifyType InNotifyType) {
}


