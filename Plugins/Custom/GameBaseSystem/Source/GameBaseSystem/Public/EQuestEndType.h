#pragma once
#include "CoreMinimal.h"
#include "EQuestEndType.generated.h"

UENUM(BlueprintType)
namespace EQuestEndType {
    enum Type {
        FailureEnd,
        SuccessEnd,
        SectionWorkEnd,
        FailureAndSectionWorkEnd,
        SuccessAndSectionWorkEnd,
        None,
    };
}

