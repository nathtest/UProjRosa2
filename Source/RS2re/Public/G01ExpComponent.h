#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01BattleManagerObserverInf.h"
#include "G01ExpComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ExpComponent : public UActorComponent, public IG01BattleManagerObserverInf {
    GENERATED_BODY()
public:
    UG01ExpComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExpOverride(int32 InExp);
    
    UFUNCTION(BlueprintCallable)
    void ResolveExp();
    
    UFUNCTION(BlueprintCallable)
    void GetExp(int32& OutExp);
    

    // Fix for true pure virtual functions not being implemented
};

