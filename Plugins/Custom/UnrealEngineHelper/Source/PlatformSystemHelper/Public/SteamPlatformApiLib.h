#pragma once
#include "CoreMinimal.h"
#include "ESteamControllerType.h"
#include "PlatformApiLib.h"
#include "SteamPlatformApiLib.generated.h"

UCLASS(Blueprintable)
class PLATFORMSYSTEMHELPER_API USteamPlatformApiLib : public UPlatformApiLib {
    GENERATED_BODY()
public:
    USteamPlatformApiLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESteamControllerType GetSteamControllerType(int32 InIndex);
    
};

