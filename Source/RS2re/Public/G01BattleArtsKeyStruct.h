#pragma once
#include "CoreMinimal.h"
#include "PulldownStruct/PulldownStructBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=PulldownStruct -ObjectName=PulldownStructBase -FallbackName=PulldownStructBase
#include "G01BattleArtsKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleArtsKeyStruct : public FPulldownStructBase {
    GENERATED_BODY()
public:
    FG01BattleArtsKeyStruct();
};
FORCEINLINE uint32 GetTypeHash(const FG01BattleArtsKeyStruct) { return 0; }

