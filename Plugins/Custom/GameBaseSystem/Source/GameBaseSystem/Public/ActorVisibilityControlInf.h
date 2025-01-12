#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ActorVisibilityControlInf.generated.h"

UINTERFACE(Blueprintable)
class UActorVisibilityControlInf : public UInterface {
    GENERATED_BODY()
};

class IActorVisibilityControlInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_ActorVisibilityControl_SetVisibility(bool InIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* Inf_ActorVisibilityControl_GetTargetClass();
    
};

