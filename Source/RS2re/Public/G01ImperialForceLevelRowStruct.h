#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01ImperialForceLevelRowStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ImperialForceLevelRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Point;
    
    FG01ImperialForceLevelRowStruct();
};

