#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01InventoryItemEquiomentType.h"
#include "EG01InventoryItemNotifyType.h"
#include "EG01ItemUsageType.h"
#include "G01CharacterID.h"
#include "G01InventoryItemLogStruct.h"
#include "G01InventoryItemStruct.h"
#include "G01InventoryManagerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01InventoryManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01InventoryManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_UnEquipmentInventoryItem(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_TakeoverNext();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_SetAutoReplenish(FName InItemID, bool Is);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_SaveToSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_RemoveNotUsableItemOfPosterity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_RemoveInventoryItems(FName InItemID, int32 InCount, int32& OutRemoveCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_RemoveInventoryItem(FName InItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_PushToMemento();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_PopToMemento(bool InIsEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_OverrideItemOwner(FG01CharacterID InTargetID, FG01CharacterID InOverrideID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_LoadFromSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_GetUsageTypeInventoryItem(EG01ItemUsageType InUsageType, TArray<FG01InventoryItemStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_GetSlotEquipment(FG01CharacterID InCharacterId, EG01InventoryItemEquiomentType InEquipmentType, FG01InventoryItemStruct& OutItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_InventoryMng_GetMaxDamageWeapon(FName InWeaponCategory, FG01InventoryItemStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_GetItemLog(FName InItemID, FG01InventoryItemLogStruct& OutItemLog);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_GetItemAllLog(TArray<FG01InventoryItemLogStruct>& OutItemLogList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_GetInventoryItem(FName InItemID, FG01InventoryItemStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_GetInventoryAllItem(TArray<FG01InventoryItemStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_GetEquipmentInventoryItem(FG01CharacterID InCharacterId, TArray<FG01InventoryItemStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_InventoryMng_ExistInventoryItem(FName InItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_EquipmentInventoryItem(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_CreateCache();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_InventoryMng_CheckSpaceInventoryItems(FName InItemID, int32 InCount, int32& OutRemainingCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_InventoryMng_CheckSpaceInventoryItem(FName InItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_InventoryMng_CheckAutoReplenish(FName InItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_ChechSlotEquipment(FG01CharacterID InCharacterId, EG01InventoryItemEquiomentType InEquipmentType, bool& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_ApplyCache();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_AddInventoryItems(FName InItemID, int32 InCount, EG01InventoryItemNotifyType InNotifyType, bool& OutIsRemaining, int32& OutRemainingCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_InventoryMng_AddInventoryItem(FName InItemID, EG01InventoryItemNotifyType InNotifyType);
    
};

