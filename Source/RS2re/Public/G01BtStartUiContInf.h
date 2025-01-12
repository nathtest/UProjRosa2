#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EBattleStartType.h"
#include "G01BtStartUiContInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BtStartUiContInf : public UInterface {
    GENERATED_BODY()
};

class IG01BtStartUiContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtStartUiCont_Start(EBattleStartType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BtStartUiCont_End();
    
};

