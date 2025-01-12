#pragma once
#include "CoreMinimal.h"
#include "EQuestFlowPhase.generated.h"

UENUM(BlueprintType)
enum class EQuestFlowPhase : uint8 {
    FP_NONE,
    FP_BEGIN_QA,
    FP_BEGIN_CA,
    FP_BEGIN_ST = 4,
    FP_END_QA = 8,
};

