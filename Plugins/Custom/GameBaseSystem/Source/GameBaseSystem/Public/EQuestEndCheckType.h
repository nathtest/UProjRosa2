#pragma once
#include "CoreMinimal.h"
#include "EQuestEndCheckType.generated.h"

UENUM(BlueprintType)
namespace EQuestEndCheckType {
    enum Type {
        IsEnd,
        IsSucceeded,
        IsFailed,
        IsPostOrder,
        IsSucceededAndPostOrder,
        IsFailedAndPostOrder,
    };
}

