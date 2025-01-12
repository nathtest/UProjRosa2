#pragma once
#include "CoreMinimal.h"
#include "G01ShopIDStruct.h"
#include "G01ShopSalesDataStruct.h"
#include "G01ShopSellDataStruct.h"
#include "G01UiController.h"
#include "G01ShopUiController.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable)
class RS2RE_API AG01ShopUiController : public AG01UiController {
    GENERATED_BODY()
public:
    AG01ShopUiController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestShop(FG01ShopIDStruct ShopID, AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenShop(FG01ShopIDStruct ShopID, AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void Inf_G01ShopMenuPriceSort(TArray<FG01ShopSellDataStruct> SellDataList, TArray<FG01ShopSellDataStruct>& OutSellDataList);
    
    UFUNCTION(BlueprintCallable)
    void Inf_G01ShopMenuCategorySort(TArray<FG01ShopSellDataStruct> SellDataList, TArray<FG01ShopSellDataStruct>& OutSellDataList);
    
    UFUNCTION(BlueprintCallable)
    TArray<FG01ShopSalesDataStruct> GetShopSalesStruct(UDataTable* ShopSalesList);
    
};

