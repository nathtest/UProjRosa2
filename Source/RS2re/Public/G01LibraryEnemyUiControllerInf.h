#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01LibraryEnemyUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LibraryEnemyUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01LibraryEnemyUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_OnRStickUpDown(const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_OnRStickLeftRight(const float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_OnR3();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_OnR1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_OnPreItemLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_OnPreItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_OnNextItemRight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_OnNextItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_OnL1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_OnCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LibraryEnemyUiController_Close();
    
};

