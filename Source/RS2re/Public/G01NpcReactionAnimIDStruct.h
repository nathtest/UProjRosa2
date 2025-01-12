#pragma once
#include "CoreMinimal.h"
#include "AppPulldownStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppPulldownStruct -FallbackName=AppPulldownStruct
#include "G01NpcReactionAnimIDStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01NpcReactionAnimIDStruct : public FAppPulldownStruct {
    GENERATED_BODY()
public:
    FG01NpcReactionAnimIDStruct();
};
FORCEINLINE uint32 GetTypeHash(const FG01NpcReactionAnimIDStruct) { return 0; }

