#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "KeyConfigOperationCategory.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FKeyConfigOperationCategory : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FKeyConfigOperationCategory();
};
FORCEINLINE uint32 GetTypeHash(const FKeyConfigOperationCategory) { return 0; }

