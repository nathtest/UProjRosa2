#pragma once
#include "CoreMinimal.h"
#include "ESeqActorHijackState.generated.h"

UENUM(BlueprintType)
enum class ESeqActorHijackState : uint8 {
    NotHijack,
    Hijacking,
};

