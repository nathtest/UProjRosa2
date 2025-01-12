#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01FieldEnemyGeneratorManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldEnemyGeneratorManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01FieldEnemyGeneratorManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01FieldEnemyGeneratorManager_AllGenerateComplete(bool InIsSynchronous);
    
};

