#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "CameraShakeID.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FCameraShakeID : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FCameraShakeID();
};

