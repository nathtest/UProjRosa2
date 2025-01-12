#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GeneratorBaseObserverInf.generated.h"

class AGeneratorBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UGeneratorBaseObserverInf : public UInterface {
    GENERATED_BODY()
};

class IGeneratorBaseObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_UGeneratorBaseObserverInf_OnCreateActor(AGeneratorBase* InGeneratorActor);
    
};

