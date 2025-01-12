#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ConvertExcelToDataTableG01AddedPotentCategoryTableTableRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FConvertExcelToDataTableG01AddedPotentCategoryTableTableRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PulldownTooltip;
    
    RS2RE_API FConvertExcelToDataTableG01AddedPotentCategoryTableTableRowStruct();
};

