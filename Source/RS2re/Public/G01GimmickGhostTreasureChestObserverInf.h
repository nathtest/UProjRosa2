#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "G01GimmickGhostTreasureChestObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickGhostTreasureChestObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickGhostTreasureChestObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickGhostTreasureChest_OpenTreasureChest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickGhostTreasureChest_OpenSub(FVector InLocation);
    
};

