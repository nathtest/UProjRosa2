#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BtScreenEffectUiContInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BtScreenEffectUiContInf : public UInterface {
    GENERATED_BODY()
};

class IG01BtScreenEffectUiContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtScreenEffectUiCont_StartBenevolentAct();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtScreenEffectUiCont_EndBenevolentAct();
    
};

