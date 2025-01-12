#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ConvertExcelToDataTableG01EnhanceParamTableTableRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FConvertExcelToDataTableG01EnhanceParamTableTableRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PulldownTooltip;
    
    RS2RE_API FConvertExcelToDataTableG01EnhanceParamTableTableRowStruct();
};

