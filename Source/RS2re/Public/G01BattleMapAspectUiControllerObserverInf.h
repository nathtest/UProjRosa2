#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01MapAspectType.h"
#include "G01BattleMapAspectUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleMapAspectUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleMapAspectUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleMapAspectUiCont_FinishedEntryAnim_SecondMapAspect(EG01MapAspectType InMapAspect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleMapAspectUiCont_FinishedEntryAnim_FirstMapAspect(EG01MapAspectType InMapAspect);
    
};

