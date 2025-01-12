#pragma once
#include "CoreMinimal.h"
#include "EG01VABasePoseAnimLayerType.generated.h"

UENUM(BlueprintType)
enum class EG01VABasePoseAnimLayerType : uint8 {
    Default,
    Player,
    Battle,
    FieldNPC,
    FieldEnemy,
    AI,
    MainMenu,
    ShopMenu,
    Num,
};

