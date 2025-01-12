#pragma once
#include "CoreMinimal.h"
#include "EG01VFXAttachMethod.generated.h"

UENUM(BlueprintType)
enum class EG01VFXAttachMethod : uint8 {
    DefaultMethod,
    NiagaraParamSetting,
    NUM,
};

