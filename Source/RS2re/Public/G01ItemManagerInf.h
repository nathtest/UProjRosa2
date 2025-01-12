#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DropItemTableID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItemTableID -FallbackName=DropItemTableID
#include "EG01ItemArmorCorrectionID.h"
#include "EG01ItemArmorPartsType.h"
#include "EG01ItemConsumablesType.h"
#include "EG01ItemEquipmentDevlopType.h"
#include "EG01ItemWeaponType.h"
#include "G01DropItemParameter.h"
#include "G01FieldItemDataStruct.h"
#include "G01FieldItemIDStruct.h"
#include "G01ItemAbilityDataStruct.h"
#include "G01ItemArmorCategoryStruct.h"
#include "G01ItemArmorDataStruct.h"
#include "G01ItemCategoryStruct.h"
#include "G01ItemConsumablesDataStruct.h"
#include "G01ItemCraftPartsDataStruct.h"
#include "G01ItemDataStruct.h"
#include "G01ItemEventDataStruct.h"
#include "G01ItemShieldDataStruct.h"
#include "G01ItemWeaponDataStruct.h"
#include "G01ItemManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ItemManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ItemManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemWeaponTypeByItemID(FName InItemID, EG01ItemWeaponType& OutWeaponType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemWeaponDataByItemID(FName InItemID, FG01ItemWeaponDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemShieldDataByItemID(FName InItemID, FG01ItemShieldDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText Inf_ItemManager_GetItemNameByItemID(FName InItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemEventDataByItemID(FName InItemID, FG01ItemEventDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemEquipmentDevlopTypeByItemID(FName InItemID, EG01ItemEquipmentDevlopType& OutDevlopType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemDataByItemID(FName InItemID, FG01ItemDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemCraftPartsDataByItemID(FName InItemID, FG01ItemCraftPartsDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_ItemManager_GetItemCountMaxLimitByItemID(FName InItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemConsumablesTypeByItemID(FName InItemID, EG01ItemConsumablesType& OutConsumablesType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemConsumablesDataByItemID(FName InItemID, FG01ItemConsumablesDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName Inf_ItemManager_GetItemCategoryNameByItemID(FName InItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemCategoryDataByItemID(FName InItemID, FG01ItemCategoryStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemCategoryDataByItemCategory(FName inItemCategory, FG01ItemCategoryStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemArmorPartsTypeByItemID(FName InItemID, EG01ItemArmorPartsType& OutPartsType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemArmorDataByItemID(FName InItemID, FG01ItemArmorDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemArmorCorrectionIDByItemID(FName InItemID, EG01ItemArmorCorrectionID& OutCorrectionID, int32& CollectionParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemArmorCategoryDataByItemCategory(FName inItemCategory, FG01ItemArmorCategoryStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetItemAbilityDataByItemID(FName InItemID, FG01ItemAbilityDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetFieldItemDataByFieldItemID(FG01FieldItemIDStruct InFieldItemID, FG01FieldItemDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetDropItemDataByDropItemID(FDropItemTableID InDropItemID, FG01DropItemParameter& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemWeaponData(TArray<FG01ItemWeaponDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemWeaponCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemShieldData(TArray<FG01ItemShieldDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemShieldCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemEventData(TArray<FG01ItemEventDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemEventCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemData(TArray<FG01ItemDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemCraftPartsData(TArray<FG01ItemCraftPartsDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemCraftPartsCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemConsumablesData(TArray<FG01ItemConsumablesDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemConsumablesCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemCategory(TArray<FG01ItemCategoryStruct>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemArmorData(TArray<FG01ItemArmorDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemArmorCategoryData(TArray<FG01ItemArmorCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemAbilityData(TArray<FG01ItemAbilityDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ItemManager_GetAllItemAbilityCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_ItemManager_ExistItemID(FName InItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_ItemManager_ExistDropItemID(FDropItemTableID InDropItemID);
    
};

