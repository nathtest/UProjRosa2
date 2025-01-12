#pragma once
#include "CoreMinimal.h"
#include "NotifyUnloadParam.h"
#include "NotifyPostUnloadParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FNotifyPostUnloadParam : public FNotifyUnloadParam {
    GENERATED_BODY()
public:
    FNotifyPostUnloadParam();
};

