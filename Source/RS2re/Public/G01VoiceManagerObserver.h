#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01VoiceLanguageID.h"
#include "G01VoiceManagerObserver.generated.h"

UINTERFACE(Blueprintable)
class UG01VoiceManagerObserver : public UInterface {
    GENERATED_BODY()
};

class IG01VoiceManagerObserver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01VoiceManager_OnSetupComplete(const FG01VoiceLanguageID& InLanguageID);
    
};

