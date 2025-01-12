#pragma once
#include "CoreMinimal.h"
#include "ESequencerBinkMediaSectionResourceType.generated.h"

UENUM(BlueprintType)
enum class ESequencerBinkMediaSectionResourceType : uint8 {
    Single,
    Multiple,
    Multiple_Equality,
};

