#pragma once
#include "CoreMinimal.h"
#include "ECustomWorldType.generated.h"

UENUM(BlueprintType)
enum class ECustomWorldType : uint8 {
    CUSTOM_WORLD_TYPE_NONE,
    CUSTOM_WORLD_TYPE_GAME,
    CUSTOM_WORLD_TYPE_EDITOR,
    CUSTOM_WORLD_TYPE_PIE,
    CUSTOM_WORLD_TYPE_EDITORPREVIEW,
    CUSTOM_WORLD_TYPE_GAMEPREVIE,
    CUSTOM_WORLD_TYPE_GAMERPC,
    CUSTOM_WORLD_TYPE_INACTIVE,
};

