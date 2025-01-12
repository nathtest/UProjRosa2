#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BlackSmithMenuCategoryDataStruct.h"
#include "G01ItemExplanationDisplayOptionStruct.h"
#include "G01ItemExplanationUiControllerInf.generated.h"

class UAppUserWidgetDataObject;
class UUserWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ItemExplanationUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ItemExplanationUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ItemExplanationUiController_SetupExplanationByItemID(const FName& InItemID, UUserWidget* InWidget, UAppUserWidgetDataObject* InWidgetData, const FG01ItemExplanationDisplayOptionStruct& InDisplayOption, bool IsShop);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ItemExplanationUiController_SetupExplanationByCraftItemData(const FG01BlackSmithMenuCategoryDataStruct& InCraftItemData, UUserWidget* InWidget, const FG01ItemExplanationDisplayOptionStruct& InDisplayOption, bool InIsLockVisible, bool InIsBuyable, UAppUserWidgetDataObject* InWidgetData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ItemExplanationUiController_ReleaseControllingWidget();
    
};

