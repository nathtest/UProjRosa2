#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01LibraryFathomUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LibraryFathomUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01LibraryFathomUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryFathomUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryFathomUiController_OnR1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryFathomUiController_OnPreItemLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryFathomUiController_OnPreItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryFathomUiController_OnNextItemRight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryFathomUiController_OnNextItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryFathomUiController_OnL1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryFathomUiController_OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryFathomUiController_DebugLibraryOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryFathomUiController_Close();
    
};

