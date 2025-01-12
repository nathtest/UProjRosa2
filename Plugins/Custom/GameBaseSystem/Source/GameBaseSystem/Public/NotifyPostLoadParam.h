#pragma once
#include "CoreMinimal.h"
#include "NotifyLoadParam.h"
#include "NotifyPostLoadParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FNotifyPostLoadParam : public FNotifyLoadParam {
    GENERATED_BODY()
public:
    FNotifyPostLoadParam();
};

