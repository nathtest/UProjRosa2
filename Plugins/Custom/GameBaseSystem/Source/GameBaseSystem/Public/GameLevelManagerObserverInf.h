#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GameLevelManagerObserverInf.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UGameLevelManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IGameLevelManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_GameLevelManager_OnLoadCompleted(UObject* OutRequester);
    
};

