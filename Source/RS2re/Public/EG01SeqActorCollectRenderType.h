#pragma once
#include "CoreMinimal.h"
#include "EG01SeqActorCollectRenderType.generated.h"

UENUM(BlueprintType)
enum class EG01SeqActorCollectRenderType : uint8 {
    Opaque,
    Translucent,
    Hidden,
    Num,
};

