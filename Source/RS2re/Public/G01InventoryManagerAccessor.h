#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01InventoryItemEquiomentType.h"
#include "EG01InventoryItemNotifyType.h"
#include "EG01ItemUsageType.h"
#include "G01CharacterID.h"
#include "G01InventoryItemLogStruct.h"
#include "G01InventoryItemStruct.h"
#include "ManagerAccessor.h"
#include "G01InventoryManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01InventoryManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01InventoryManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnEquipmentInventoryItem(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType);
    
    UFUNCTION(BlueprintCallable)
    void TakeoverNext();
    
    UFUNCTION(BlueprintCallable)
    void SetAutoReplenish(FName InItemID, bool Is);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInventoryItems(FName InItemID, int32 InCount, int32& OutRemoveCount);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInventoryItem(FName InItemID);
    
    UFUNCTION(BlueprintCallable)
    void PushToMemento();
    
    UFUNCTION(BlueprintCallable)
    void PopToMemento(bool InIsEquipment);
    
    UFUNCTION(BlueprintCallable)
    void OverrideItemOwner(FG01CharacterID InTargetID, FG01CharacterID InOverrideID);
    
    UFUNCTION(BlueprintCallable)
    void GetUsageTypeInventoryItem(EG01ItemUsageType InUsageType, TArray<FG01InventoryItemStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetSlotEquipment(FG01CharacterID InCharacterId, EG01InventoryItemEquiomentType InEquipmentType, FG01InventoryItemStruct& OutItem);
    
    UFUNCTION(BlueprintCallable)
    bool GetMaxDamageWeapon(FName InWeaponCategory, FG01InventoryItemStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetItemLog(FName InItemID, FG01InventoryItemLogStruct& OutItemLog);
    
    UFUNCTION(BlueprintCallable)
    void GetItemAllLog(TArray<FG01InventoryItemLogStruct>& OutItemLogList);
    
    UFUNCTION(BlueprintCallable)
    void GetInventoryItem(FName InItemID, FG01InventoryItemStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetInventoryAllItem(TArray<FG01InventoryItemStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetEquipmentInventoryItem(FG01CharacterID InCharacterId, TArray<FG01InventoryItemStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    bool ExistInventoryItem(FName InItemID);
    
    UFUNCTION(BlueprintCallable)
    void EquipmentInventoryItem(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType);
    
    UFUNCTION(BlueprintCallable)
    void CreateCache();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSpaceInventoryItems(FName InItemID, int32 InCount, int32& OutRemainingCount);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSpaceInventoryItem(FName InItemID);
    
    UFUNCTION(BlueprintCallable)
    bool CheckAutoReplenish(FName InItemID);
    
    UFUNCTION(BlueprintCallable)
    void ChechSlotEquipment(FG01CharacterID InCharacterId, EG01InventoryItemEquiomentType InEquipmentType, bool& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCache();
    
    UFUNCTION(BlueprintCallable)
    void AddInventoryItems(FName InItemID, int32 InCount, EG01InventoryItemNotifyType InNotifyType, bool& OutIsRemaining, int32& OutRemainingCount);
    
    UFUNCTION(BlueprintCallable)
    void AddInventoryItem(FName InItemID, EG01InventoryItemNotifyType InNotifyType);
    
};

