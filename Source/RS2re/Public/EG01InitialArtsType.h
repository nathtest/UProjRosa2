#pragma once
#include "CoreMinimal.h"
#include "EG01InitialArtsType.generated.h"

UENUM(BlueprintType)
enum class EG01InitialArtsType : uint8 {
    RegistAndLearn,
    IfRegistered,
    ForceLearn,
    Num,
};

