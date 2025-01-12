#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01TitleLogoUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01TitleLogoUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01TitleLogoUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleLogoUiController_OpeningMovieOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleLogoUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleLogoUiController_OnPreItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleLogoUiController_OnOpeningSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleLogoUiController_OnNextItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleLogoUiController_OnLogoDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleLogoUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleLogoUiController_OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TitleLogoUiController_DialogOpen();
    
};

