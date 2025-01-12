#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EMainMenuTabType.h"
#include "G01MainMenuUiControllerObserverInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MainMenuUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01MainMenuUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuUiControllerUser_VisualActorLoadEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuUiControllerUser_ShortcutOpen(EMainMenuTabType InTabType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuUiControllerUser_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuUiControllerUser_FinishAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuUiControllerUser_CompleteClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuUiControllerUser_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MainMenuUiControllerUser_ChangeCurrentController(AActor* Actor);
    
};

