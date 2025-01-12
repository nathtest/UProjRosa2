#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "QuestCategory.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestCategory : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FQuestCategory();
};
FORCEINLINE uint32 GetTypeHash(const FQuestCategory) { return 0; }

