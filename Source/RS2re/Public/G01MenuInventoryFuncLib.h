#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01InventoryItemEquiomentType.h"
#include "EMenuEquipmentSlotType.h"
#include "G01MenuInventoryItemInfoStruct.h"
#include "G01MenuInventoryFuncLib.generated.h"

class UG01InventoryManagerAccessor;
class UG01ItemManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API UG01MenuInventoryFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01MenuInventoryFuncLib();

private:
    UFUNCTION(BlueprintCallable)
    static void SortInvenrotyItemStruct(TArray<FG01MenuInventoryItemInfoStruct>& InOutItems);
    
public:
    UFUNCTION(BlueprintCallable)
    static void OverwriteEquippedItems(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, TMap<EG01InventoryItemEquiomentType, FName> InCurrent, TMap<EG01InventoryItemEquiomentType, FName> InPreview, TMap<EG01InventoryItemEquiomentType, FName>& OutMerged);
    
    UFUNCTION(BlueprintCallable)
    static void IsImpotantItemFromItemID(UG01ItemManagerAccessor* InItemAccessor, FName ItemId, bool& OutIsImpotant);
    
    UFUNCTION(BlueprintCallable)
    static void GetMenuWeaponList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, bool InIncludeKnuckles, bool InItemMenu, TArray<FG01MenuInventoryItemInfoStruct>& OutItems);
    
    UFUNCTION(BlueprintCallable)
    static void GetMenuShieldList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, bool InItemMenu, TArray<FG01MenuInventoryItemInfoStruct>& OutItems);
    
    UFUNCTION(BlueprintCallable)
    static void GetMenuEventItemList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, TArray<FG01MenuInventoryItemInfoStruct>& OutItems);
    
    UFUNCTION(BlueprintCallable)
    static void GetMenuCraftPartsList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, TArray<FG01MenuInventoryItemInfoStruct>& OutItems);
    
    UFUNCTION(BlueprintCallable)
    static void GetMenuConsumablesList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, bool InBattleItemsOnly, bool InItemMenu, TArray<FG01MenuInventoryItemInfoStruct>& OutItems);
    
    UFUNCTION(BlueprintCallable)
    static void GetMenuArmorList(UG01InventoryManagerAccessor* InInventoryAccessor, UG01ItemManagerAccessor* InItemAccessor, TEnumAsByte<EMenuEquipmentSlotType> InSlotType, bool InItemMenu, TArray<FG01MenuInventoryItemInfoStruct>& OutItems);
    
private:
    UFUNCTION(BlueprintCallable)
    static void FillKnuclesItem(UG01InventoryManagerAccessor* InInventoryAccessor);
    
};

