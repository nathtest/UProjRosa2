#pragma once
#include "CoreMinimal.h"
#include "EG01CharacterVisualActorType.generated.h"

UENUM(BlueprintType)
enum class EG01CharacterVisualActorType : uint8 {
    NONE,
    FIELD,
    BATTLE,
    LIGHT,
    NUM,
};

