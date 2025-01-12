#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01TextLanguageID.h"
#include "G01TextManagerObserver.generated.h"

UINTERFACE(Blueprintable)
class UG01TextManagerObserver : public UInterface {
    GENERATED_BODY()
};

class IG01TextManagerObserver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01TextManager_OnSetupComplete(const FG01TextLanguageID& InLanguageID);
    
};

