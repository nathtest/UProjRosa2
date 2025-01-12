#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "G01HudManagerObserverInf.generated.h"

class AG01RangeIconCollisionObjectBase;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01HudManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01HudManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01HudManager_RangeIconDestinationInteractActivate(AG01RangeIconCollisionObjectBase* OutCollisionObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01HudManager_RangeIconCollisionInteractDeactivate(AG01RangeIconCollisionObjectBase* OutCollisionObject, USceneComponent* InPositionComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01HudManager_RangeIconCollisionInteractActivate(AG01RangeIconCollisionObjectBase* OutCollisionObject, USceneComponent* InPositionComponent, FVector InRangePosition);
    
};

