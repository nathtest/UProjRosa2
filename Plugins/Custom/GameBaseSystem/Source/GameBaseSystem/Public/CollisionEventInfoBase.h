#pragma once
#include "CoreMinimal.h"
#include "ReceiveInteractEventInfo.h"
#include "CollisionEventInfoBase.generated.h"

USTRUCT(BlueprintType)
struct FCollisionEventInfoBase : public FReceiveInteractEventInfo {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FCollisionEventInfoBase();
};

