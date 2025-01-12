#pragma once
#include "CoreMinimal.h"
#include "EG01CharacterVisualType.generated.h"

UENUM(BlueprintType)
enum class EG01CharacterVisualType : uint8 {
    NONE,
    TYPE_A,
    TYPE_B,
    TYPE_C,
    TYPE_D,
    TYPE_E,
    NUM,
};

