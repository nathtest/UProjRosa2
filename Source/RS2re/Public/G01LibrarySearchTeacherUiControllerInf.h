#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01LibrarySearchTeacherUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LibrarySearchTeacherUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01LibrarySearchTeacherUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibrarySearchTeacherUiController_Open(bool OutIsEventOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibrarySearchTeacherUiController_OnOption();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibrarySearchTeacherUiController_OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibrarySearchTeacherUiController_OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibrarySearchTeacherUiController_Close();
    
};

