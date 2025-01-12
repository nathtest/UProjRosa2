#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01LibrarySearchTeacherUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LibrarySearchTeacherUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01LibrarySearchTeacherUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01LibrarySearchTeacherUiController_MenuOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01LibrarySearchTeacherUiController_MenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01LibrarySearchTeacherUiController_FinishedBeginStampAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01LibrarySearchTeacherUiController_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01LibrarySearchTeacherUiController_BeginSwapIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01LibrarySearchTeacherUiController_BeginSpecialStamp();
    
};

