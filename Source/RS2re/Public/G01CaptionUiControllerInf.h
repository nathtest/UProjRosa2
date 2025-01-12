#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01CaptionUiControllerInf.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01CaptionUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01CaptionUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CaptionUiController_SetSubCaptionText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CaptionUiController_SetIconVisibility(const bool IsVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CaptionUiController_SetIconTexture(const TSoftObjectPtr<UTexture2D>& Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CaptionUiController_SetCaptionText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CaptionUiController_OutSubCaption();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CaptionUiController_InSubCaption();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CaptionUiController_ForceStopAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CaptionUiController_Deactivate(const FName NofityName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01CaptionUiController_Activate(const bool IsMainMenu);
    
};

