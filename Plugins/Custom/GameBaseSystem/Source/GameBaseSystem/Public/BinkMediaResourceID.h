#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "BinkMediaResourceID.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FBinkMediaResourceID : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FBinkMediaResourceID();
};

