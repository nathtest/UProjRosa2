#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01FieldPlayerInputInf.generated.h"

class AInputObjectBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldPlayerInputInf : public UInterface {
    GENERATED_BODY()
};

class IG01FieldPlayerInputInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerInput_GetInputObject(AInputObjectBase*& OutInputObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerInput_EnablePlayerInput();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerInput_EnableCameraInput();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerInput_DisablePlayerInput();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerInput_DisableCameraInput();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerInput_ChangeTalkCameraInput();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldPlayerInput_CancelTalkCameraInput();
    
};

