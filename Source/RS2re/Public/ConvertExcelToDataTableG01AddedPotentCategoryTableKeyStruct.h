#pragma once
#include "CoreMinimal.h"
#include "PulldownStruct/PulldownStructBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=PulldownStruct -ObjectName=PulldownStructBase -FallbackName=PulldownStructBase
#include "ConvertExcelToDataTableG01AddedPotentCategoryTableKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FConvertExcelToDataTableG01AddedPotentCategoryTableKeyStruct : public FPulldownStructBase {
    GENERATED_BODY()
public:
    RS2RE_API FConvertExcelToDataTableG01AddedPotentCategoryTableKeyStruct();
};

