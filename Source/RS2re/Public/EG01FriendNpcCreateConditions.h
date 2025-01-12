#pragma once
#include "CoreMinimal.h"
#include "EG01FriendNpcCreateConditions.generated.h"

UENUM(BlueprintType)
enum class EG01FriendNpcCreateConditions : uint8 {
    JoinParty,
    NoJoinParty,
    Event,
    NUM,
};

