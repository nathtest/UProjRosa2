#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EScreenTransitionType.h"
#include "ScreenTransitionManagerInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UScreenTransitionManagerInf : public UInterface {
    GENERATED_BODY()
};

class IScreenTransitionManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ScreenTransitionManager_TransitionUnlock(AActor* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ScreenTransitionManager_TransitionLock(AActor* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ScreenTransitionManager_SetTransitionType(EScreenTransitionType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ScreenTransitionManager_Reset(bool InIsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ScreenTransitionManager_Out(float InTime, EScreenTransitionType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_ScreenTransitionManager_IsHideScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_ScreenTransitionManager_IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ScreenTransitionManager_In(EScreenTransitionType InType, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ScreenTransitionManager_GetIsTransitionLock(bool& OutIsLock);
    
};

