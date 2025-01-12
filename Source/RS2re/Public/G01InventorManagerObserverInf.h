#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01InventoryItemEquiomentType.h"
#include "EG01InventoryItemNotifyType.h"
#include "G01CharacterID.h"
#include "G01InventorManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01InventorManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01InventorManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_InventoryManager_UnEquipmentItem(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_InventoryManager_ItemIsGone(FName ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_InventoryManager_EquipmentItem(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_InventoryManager_AddItems(EG01InventoryItemNotifyType InNotifyType, FName ItemId, int32 ItemCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_InventoryManager_AddItem(EG01InventoryItemNotifyType InNotifyType, FName ItemId);
    
};

