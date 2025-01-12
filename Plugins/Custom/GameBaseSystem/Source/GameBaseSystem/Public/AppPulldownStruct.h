#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PulldownStruct -ObjectName=PulldownStructBase -FallbackName=PulldownStructBase
#include "PullDownStruct/PulldownStructBase.h"
#include "AppPulldownStruct.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FAppPulldownStruct : public FPulldownStructBase {
    GENERATED_BODY()
public:
    FAppPulldownStruct();
};

