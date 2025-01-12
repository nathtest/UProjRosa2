#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PulldownStruct -ObjectName=PulldownStructBase -FallbackName=PulldownStructBase
#include "PulldownStruct/PulldownStructBase.h"
#include "G01DebugTabPageKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01DebugTabPageKeyStruct : public FPulldownStructBase {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FG01DebugTabPageKeyStruct();
};
FORCEINLINE uint32 GetTypeHash(const FG01DebugTabPageKeyStruct) { return 0; }

