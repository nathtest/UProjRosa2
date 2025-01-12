#include "G01ItemManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo

AG01ItemManager::AG01ItemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_ITEM;
    this->MItemToolDataTable = NULL;
    this->MItemToolCategoryDataTable = NULL;
    this->MItemEventDataTable = NULL;
    this->MItemEventCategoryDataTable = NULL;
    this->MItemCraftPartsDataTable = NULL;
    this->MItemCraftPartsCategoryDataTable = NULL;
    this->MItemWeaponDataTable = NULL;
    this->MItemWeaponCategoryDataTable = NULL;
    this->MItemArmorDataTable = NULL;
    this->MItemArmorCategoryDataTable = NULL;
    this->MItemShieldDataTable = NULL;
    this->MItemShieldCategoryDataTable = NULL;
    this->MItemAbilityCategoryDataTable = NULL;
    this->MItemAbilityDataTable = NULL;
    this->DropItemDataTable = NULL;
    this->FieldItemDataTable = NULL;
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
}







