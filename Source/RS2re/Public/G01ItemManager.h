#pragma once
#include "CoreMinimal.h"
#include "DropItemTableID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=DropItemTableID -FallbackName=DropItemTableID
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "EG01ItemArmorCorrectionID.h"
#include "EG01ItemArmorPartsType.h"
#include "EG01ItemConsumablesType.h"
#include "EG01ItemEquipmentDevlopType.h"
#include "EG01ItemWeaponType.h"
#include "G01DropItemParameter.h"
#include "G01FieldItemDataStruct.h"
#include "G01ItemAbilityDataStruct.h"
#include "G01ItemArmorCategoryStruct.h"
#include "G01ItemArmorDataStruct.h"
#include "G01ItemCategoryStruct.h"
#include "G01ItemConsumablesDataStruct.h"
#include "G01ItemCraftPartsDataStruct.h"
#include "G01ItemDataStruct.h"
#include "G01ItemEventDataStruct.h"
#include "G01ItemManagerInf.h"
#include "G01ItemShieldDataStruct.h"
#include "G01ItemWeaponDataStruct.h"
#include "G01ItemManager.generated.h"

class UDataTable;
class UFlagSystemManagerAccessCompo;

UCLASS(Blueprintable)
class RS2RE_API AG01ItemManager : public AManagerBase, public IG01ItemManagerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemToolDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemToolCategoryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemEventDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemEventCategoryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemCraftPartsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemCraftPartsCategoryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemWeaponDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemWeaponCategoryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemArmorDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemArmorCategoryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemShieldDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemShieldCategoryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemAbilityCategoryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MItemAbilityDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DropItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FieldItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemDataStruct> MItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemCategoryStruct> MItemConsumablesCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemConsumablesDataStruct> MItemConsumablesDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemCategoryStruct> MItemEventCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemEventDataStruct> MItemEventDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemCategoryStruct> MItemCraftPartsCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemCraftPartsDataStruct> MItemCraftPartsDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemCategoryStruct> MItemWeaponCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemWeaponDataStruct> MItemWeaponDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemArmorCategoryStruct> MItemArmorCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemArmorDataStruct> MItemArmorDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemCategoryStruct> MItemShieldCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemShieldDataStruct> MItemShieldDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemCategoryStruct> MItemAbilityCategoryDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemAbilityDataStruct> MItemAbilityDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FDropItemTableID, FG01DropItemParameter> DropItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01FieldItemDataStruct> FieldItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagManagerAccessor;
    
public:
    AG01ItemManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EG01ItemWeaponType ConvertWeaponCategoryToEnum(FName Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EG01ItemEquipmentDevlopType ConvertItemIDToEquipmentDevlopEnum(FName ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EG01ItemConsumablesType ConvertCounsumablesCategoryToEnum(FName Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EG01ItemArmorPartsType ConvertArmorPartsIDToEnums(FName PartsID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EG01ItemArmorCorrectionID ConvertArmorCollectionIDToEnum(FName CollectionID);
    

    // Fix for true pure virtual functions not being implemented
};

