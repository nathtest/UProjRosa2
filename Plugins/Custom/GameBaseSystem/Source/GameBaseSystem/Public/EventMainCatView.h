#pragma once
#include "CoreMinimal.h"
#include "EventCatGroupViewBase.h"
#include "EventMainCatView.generated.h"

USTRUCT(BlueprintType)
struct FEventMainCatView : public FEventCatGroupViewBase {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FEventMainCatView();
};

