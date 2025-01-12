#pragma once
#include "CoreMinimal.h"
#include "PulldownStruct/PulldownStructBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=PulldownStruct -ObjectName=PulldownStructBase -FallbackName=PulldownStructBase
#include "ConvertExcelToDataTableG01AddedPotentUsageTableKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FConvertExcelToDataTableG01AddedPotentUsageTableKeyStruct : public FPulldownStructBase {
    GENERATED_BODY()
public:
    RS2RE_API FConvertExcelToDataTableG01AddedPotentUsageTableKeyStruct();
};

