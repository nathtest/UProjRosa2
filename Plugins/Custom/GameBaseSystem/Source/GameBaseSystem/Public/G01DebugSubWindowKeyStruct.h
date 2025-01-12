#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PulldownStruct -ObjectName=PulldownStructBase -FallbackName=PulldownStructBase
#include "PulldownStruct/PulldownStructBase.h"
#include "G01DebugSubWindowKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01DebugSubWindowKeyStruct : public FPulldownStructBase {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FG01DebugSubWindowKeyStruct();
};
FORCEINLINE uint32 GetTypeHash(const FG01DebugSubWindowKeyStruct) { return 0; }

