#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01MsgSimpleUiObserverInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01MsgSimpleUiObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01MsgSimpleUiObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MsgSimpleUi_UpdateSimpleWindow(AActor* InUser, const FText& InSpeakerText, const FText& InContentText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MsgSimpleUi_UnregisterSimpleWindow(AActor* InUser);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01MsgSimpleUi_RegisterSimpleWindow(AActor* InUser);
    
};

