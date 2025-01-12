#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MainMenuLibraryTopUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MainMenuLibraryTopUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01MainMenuLibraryTopUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuLibraryTopUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuLibraryTopUiController_OnR2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuLibraryTopUiController_OnPreItemLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuLibraryTopUiController_OnPreItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuLibraryTopUiController_OnNextItemRight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuLibraryTopUiController_OnNextItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuLibraryTopUiController_OnL2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuLibraryTopUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuLibraryTopUiController_OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01MainMenuLibraryTopUiController_Close();
    
};

