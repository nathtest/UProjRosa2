#pragma once
#include "CoreMinimal.h"
#include "EG01SeqWeaponBinderTargetType.generated.h"

UENUM(BlueprintType)
enum class EG01SeqWeaponBinderTargetType : uint8 {
    VisualActor,
    PartyIndex,
};

