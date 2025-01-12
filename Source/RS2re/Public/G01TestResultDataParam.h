#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "G01TestResultDataParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01TestResultDataParam : public FTableRowBase {
    GENERATED_BODY()
public:
    FG01TestResultDataParam();
};

