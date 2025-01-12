#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "VAPartsKey.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVAPartsKey : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FVAPartsKey();
};
FORCEINLINE uint32 GetTypeHash(const FVAPartsKey) { return 0; }

