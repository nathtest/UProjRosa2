#pragma once
#include "CoreMinimal.h"
#include "EG01QuestDestinationType.generated.h"

UENUM(BlueprintType)
enum class EG01QuestDestinationType : uint8 {
    Destination,
    GlobalQuest,
    MainQuest,
    SubQuest,
    None,
};

