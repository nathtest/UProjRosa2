#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01FieldNpcObserverInf.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldNpcObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01FieldNpcObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_FieldNpc_PlayMontageEnded(const UObject* InRequester);
    
};

