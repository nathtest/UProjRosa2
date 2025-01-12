#pragma once
#include "CoreMinimal.h"
#include "PulldownStruct/PulldownStructBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=PulldownStruct -ObjectName=PulldownStructBase -FallbackName=PulldownStructBase
#include "PulldownStruct/PulldownStructBase.h"
#include "G01BattleUiMessageKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleUiMessageKeyStruct : public FPulldownStructBase {
    GENERATED_BODY()
public:
    FG01BattleUiMessageKeyStruct();
};

