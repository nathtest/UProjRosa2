#pragma once
#include "CoreMinimal.h"
#include "EventCatGroupViewBase.h"
#include "EventSubGroupView.generated.h"

USTRUCT(BlueprintType)
struct FEventSubGroupView : public FEventCatGroupViewBase {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FEventSubGroupView();
};

