#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01FieldNpcGeneratorManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldNpcGeneratorManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01FieldNpcGeneratorManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FieldNpcGeneratorManager_AllGenerateComplete(bool InIsSynchronous);
    
};

