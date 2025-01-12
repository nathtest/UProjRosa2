#pragma once
#include "CoreMinimal.h"
#include "DropItemTableID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItemTableID -FallbackName=DropItemTableID
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
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
#include "G01ItemManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ItemManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01ItemManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetItemWeaponTypeByItemID(FName InItemID, EG01ItemWeaponType& OutWeaponType);
    
    UFUNCTION(BlueprintCallable)
    void GetItemWeaponDataByItemID(FName InItemID, FG01ItemWeaponDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetItemShieldDataByItemID(FName InItemID, FG01ItemShieldDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetItemNameByItemID(FName InItemID, FText& OutItemName);
    
    UFUNCTION(BlueprintCallable)
    void GetItemEventDataByItemID(FName InItemID, FG01ItemEventDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetItemEquipmentDevlopTypeByItemID(FName InItemID, EG01ItemEquipmentDevlopType& OutDevlopType);
    
    UFUNCTION(BlueprintCallable)
    void GetItemDataByItemID(FName InItemID, FG01ItemDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetItemCraftPartsDataByItemID(FName InItemID, FG01ItemCraftPartsDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCountMaxLimitByItemID(FName InItemID);
    
    UFUNCTION(BlueprintCallable)
    void GetItemConsumablesTypeByItemID(FName InItemID, EG01ItemConsumablesType& OutConsumablesType);
    
    UFUNCTION(BlueprintCallable)
    void GetItemConsumablesDataByItemID(FName InItemID, FG01ItemConsumablesDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetItemCategoryNameByItemID(FName InItemID, FName& OutItemCategoryName);
    
    UFUNCTION(BlueprintCallable)
    void GetItemCategoryDataByItemID(FName InItemID, FG01ItemCategoryStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetItemCategoryDataByItemCategory(FName inItemCategory, FG01ItemCategoryStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetItemArmorPartsTypeByItemID(FName InItemID, EG01ItemArmorPartsType& OutPartsType);
    
    UFUNCTION(BlueprintCallable)
    void GetItemArmorDataByItemID(FName InItemID, FG01ItemArmorDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetItemArmorCorrectionIDByItemID(FName InItemID, EG01ItemArmorCorrectionID& OutCorrectionID, int32& CollectionParam);
    
    UFUNCTION(BlueprintCallable)
    void GetItemArmorCategoryDataByItemCategory(FName inItemCategory, FG01ItemArmorCategoryStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetItemAbilityDataByItemID(FName InItemID, FG01ItemAbilityDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetFieldItemDataByFieldItemID(FG01FieldItemIDStruct InFieldItemID, FG01FieldItemDataStruct& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetDropItemDataByDropItemID(FDropItemTableID InDropItemID, FG01DropItemParameter& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemWeaponData(TArray<FG01ItemWeaponDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemWeaponCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemShieldData(TArray<FG01ItemShieldDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemShieldCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemEventData(TArray<FG01ItemEventDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemEventCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemData(TArray<FG01ItemDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemCraftPartsData(TArray<FG01ItemCraftPartsDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemCraftPartsCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemConsumablesData(TArray<FG01ItemConsumablesDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemConsumablesCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemCategory(TArray<FG01ItemCategoryStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemArmorData(TArray<FG01ItemArmorDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemArmorCategoryData(TArray<FG01ItemArmorCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemAbilityData(TArray<FG01ItemAbilityDataStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    void GetAllItemAbilityCategoryData(TArray<FG01ItemCategoryStruct>& OutData);
    
    UFUNCTION(BlueprintCallable)
    bool ExistItemID(FName InItemID);
    
    UFUNCTION(BlueprintCallable)
    bool ExistDropItemID(FDropItemTableID InDropItemID);
    
};

