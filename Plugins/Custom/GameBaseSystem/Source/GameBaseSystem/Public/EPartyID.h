#pragma once
#include "CoreMinimal.h"
#include "EPartyID.generated.h"

UENUM(BlueprintType)
enum class EPartyID : uint8 {
    PARTY_NONE,
    PARTY_LEADER_ID,
    PARTY_MEMBER_ONE_ID,
    PARTY_MEMBER_TOW_ID,
    PARTY_MEMBER_THREE_ID,
};

