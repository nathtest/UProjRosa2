#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "WindManagerInterface.generated.h"

class AWindControlActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UWindManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IWindManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_WindManager_UnregisterWindController(AWindControlActor* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_WindManager_RegisterWindController(AWindControlActor* InController);
    
};

