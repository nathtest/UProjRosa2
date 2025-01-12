#pragma once
#include "CoreMinimal.h"
#include "ESteamControllerType.generated.h"

UENUM(BlueprintType)
enum class ESteamControllerType : uint8 {
    Unknown,
    Steam,
    SteamDeck,
    XBox360,
    XBoxOne,
    PS3,
    PS4,
    PS5,
    Switch,
    DirectInput,
    Other,
};

