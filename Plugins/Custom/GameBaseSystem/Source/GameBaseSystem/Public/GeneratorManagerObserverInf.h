#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EManagerID.h"
#include "LevelObjectID.h"
#include "GeneratorManagerObserverInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UGeneratorManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IGeneratorManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GeneratorManagerObserver_OnDestroyActor(EManagerID InManagerId, const FLevelObjectID& InLevelObjectID, AActor* InDestroyActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_GeneratorManagerObserver_OnCreateActor(EManagerID InManagerId, const FLevelObjectID& InLevelObjectID, AActor* InCreateActor);
    
};

