#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LipsyncPlaybackInterface.generated.h"

class UAudioComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class ULipsyncPlaybackInterface : public UInterface {
    GENERATED_BODY()
};

class ILipsyncPlaybackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartLipsync(UAudioComponent* InAudioComponent);
    
};

