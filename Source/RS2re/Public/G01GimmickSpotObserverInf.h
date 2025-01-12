#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GimmickSpotObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickSpotObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickSpotObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickSaveSpot_OnBeginOverlapTutorialCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickRecoverySpot_OnBeginOverlapTutorialCollision();
    
};

