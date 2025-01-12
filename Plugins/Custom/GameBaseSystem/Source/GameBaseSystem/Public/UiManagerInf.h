#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EUiControllerId.h"
#include "UiManagerInf.generated.h"

class AUiController;

UINTERFACE(Blueprintable, MinimalAPI)
class UUiManagerInf : public UInterface {
    GENERATED_BODY()
};

class IUiManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AUiController* Inf_UiManager_GetUiController(EUiControllerId InID);
    
};

