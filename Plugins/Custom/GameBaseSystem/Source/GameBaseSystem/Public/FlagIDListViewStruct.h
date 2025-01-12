#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "FlagIDListViewStruct.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FFlagIDListViewStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FFlagIDListViewStruct();
};
FORCEINLINE uint32 GetTypeHash(const FFlagIDListViewStruct) { return 0; }

