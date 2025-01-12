#pragma once
#include "CoreMinimal.h"
#include "EConfigurationType.generated.h"

UENUM(BlueprintType)
enum class EConfigurationType : uint8 {
    DEBUG,
    DEVELOPMENT,
    TEST,
    SHIPPING,
    UNKNOWN,
};

