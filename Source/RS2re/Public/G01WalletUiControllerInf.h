#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01WalletUiControllerInf.generated.h"

class UAccessorActorComponentBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01WalletUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01WalletUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01WalletUiController_SetWallet(const int32& InCrown);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01WalletUiController_SetVisible(bool IsCrownActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01WalletUiController_SetCurrentCrown(bool IsCrown);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01WalletUiController_SetCrown(const int32& InCrown);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01WalletUiController_SetClose(const int32& InCrown);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01WalletUiController_SetActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01WalletUiController_CalcImperialCrown(UAccessorActorComponentBase* InRequestAccessor, const int32& Value, bool IsEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01WalletUiController_CalcCrown(UAccessorActorComponentBase* InRequestAccessor, const int32& Value, bool IsEnd);
    
};

