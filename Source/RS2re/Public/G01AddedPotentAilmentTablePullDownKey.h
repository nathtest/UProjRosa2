#pragma once
#include "CoreMinimal.h"
#include "PulldownStruct/PulldownStructBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=PulldownStruct -ObjectName=PulldownStructBase -FallbackName=PulldownStructBase
#include "G01AddedPotentAilmentTablePullDownKey.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentAilmentTablePullDownKey : public FPulldownStructBase {
    GENERATED_BODY()
public:
    RS2RE_API FG01AddedPotentAilmentTablePullDownKey();
};

