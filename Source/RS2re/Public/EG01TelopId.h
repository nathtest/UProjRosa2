#pragma once
#include "CoreMinimal.h"
#include "EG01TelopId.generated.h"

UENUM(BlueprintType)
enum class EG01TelopId : uint8 {
    NONE,
    TELOP_DEFEAT_DANTARG,
    TELOP_ESCAPE_GARON,
    TELOP_MERMAID_RENDEZVOUS,
    TELOP_DEFEAT_SUBIER,
    TELOP_ABDICATEDEMPRROR,
    TELOP_DREADQUEEN,
    TELOP_SAVEDCHILD,
};

