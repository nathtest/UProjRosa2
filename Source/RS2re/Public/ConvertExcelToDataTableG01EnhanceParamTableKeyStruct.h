#pragma once
#include "CoreMinimal.h"
#include "PulldownStruct/PulldownStructBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=PulldownStruct -ObjectName=PulldownStructBase -FallbackName=PulldownStructBase
#include "ConvertExcelToDataTableG01EnhanceParamTableKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FConvertExcelToDataTableG01EnhanceParamTableKeyStruct : public FPulldownStructBase {
    GENERATED_BODY()
public:
    RS2RE_API FConvertExcelToDataTableG01EnhanceParamTableKeyStruct();
};

