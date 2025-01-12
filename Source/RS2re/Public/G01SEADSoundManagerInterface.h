#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SEADActiveSoundShared.h"
#include "G01SEADSoundManagerInterface.generated.h"

UINTERFACE(Blueprintable)
class UG01SEADSoundManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01SEADSoundManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01SEADSoundManager_StopSound(const FG01SEADActiveSoundShared& InSound, float InFadeOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01SEADSoundManager_PlaySound(const FG01SEADActiveSoundShared& InSound, float InFadeInTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01SEADSoundManager_PauseSound(const FG01SEADActiveSoundShared& InSound, float InFadeOutTime);
    
};

