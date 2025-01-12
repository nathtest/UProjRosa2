#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LipsyncParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=LipSyncCurve -ObjectName=LipsyncParam -FallbackName=LipsyncParam
#include "G01LipSyncPlaybackComponentOwnerInf.generated.h"

UINTERFACE(Blueprintable)
class UG01LipSyncPlaybackComponentOwnerInf : public UInterface {
    GENERATED_BODY()
};

class IG01LipSyncPlaybackComponentOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_LipsyncPlayback_OnUpdateLipsyncValue(float InPlaybackTime, const FLipsyncParam& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_LipsyncPlayback_OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_LipsyncPlayback_OnPause(float InPlaybackTime, const FLipsyncParam& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_LipsyncPlayback_OnFinish();
    
};

