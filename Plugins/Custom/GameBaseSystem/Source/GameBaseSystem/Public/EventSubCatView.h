#pragma once
#include "CoreMinimal.h"
#include "EventCatGroupViewBase.h"
#include "EventSubCatView.generated.h"

USTRUCT(BlueprintType)
struct FEventSubCatView : public FEventCatGroupViewBase {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FEventSubCatView();
};

