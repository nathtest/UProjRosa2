#pragma once
#include "CoreMinimal.h"
#include "EG01QuestChronicleState.generated.h"

UENUM(BlueprintType)
enum class EG01QuestChronicleState : uint8 {
    Unchecked,
    Checked,
    None,
};

