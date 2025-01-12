#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PulldownStruct -ObjectName=PulldownStructBase -FallbackName=PulldownStructBase
#include "PulldownStruct/PulldownStructBase.h"
#include "G01DebugSettingCSVKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01DebugSettingCSVKeyStruct : public FPulldownStructBase {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FG01DebugSettingCSVKeyStruct();
};

