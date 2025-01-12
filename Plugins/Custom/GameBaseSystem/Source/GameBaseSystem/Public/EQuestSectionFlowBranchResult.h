#pragma once
#include "CoreMinimal.h"
#include "EQuestSectionFlowBranchResult.generated.h"

UENUM(BlueprintType)
enum class EQuestSectionFlowBranchResult : uint8 {
    None,
    TrueFlow,
    FalseFlow,
};

