#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01MapAspectType.h"
#include "G01BattleMapAspectControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleMapAspectControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleMapAspectControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleMapAspectController_NotChangedMapAspect(EG01MapAspectType InCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleMapAspectController_ChangedMapAspect(EG01MapAspectType InCurrent, EG01MapAspectType InPrevious);
    
};

