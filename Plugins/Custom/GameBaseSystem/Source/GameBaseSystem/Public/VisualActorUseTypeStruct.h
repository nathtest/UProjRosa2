#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h"
#include "VisualActorUseTypeStruct.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVisualActorUseTypeStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FVisualActorUseTypeStruct();
};
FORCEINLINE uint32 GetTypeHash(const FVisualActorUseTypeStruct) { return 0; }

