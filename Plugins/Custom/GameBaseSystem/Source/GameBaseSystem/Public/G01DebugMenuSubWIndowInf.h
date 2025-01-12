#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "G01DebugMenuSubWIndowInf.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DebugMenuSubWIndowInf : public UInterface {
    GENERATED_BODY()
};

class IG01DebugMenuSubWIndowInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugMenuSubWindow_SetWindowSize(FVector2D InSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugMenuSubWindow_SetWindowPosition(FVector2D InPos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugMenuSubWindow_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugMenuSubWindow_GetActorSubWindow(UObject*& OutActorSubWindow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugMenuSubWindow_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugMenuSubWindow_CheckOpen(bool& OutIsOpen);
    
};

