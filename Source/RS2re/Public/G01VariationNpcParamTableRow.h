#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "G01VariationNpcParamTableRow.generated.h"

class AG01FieldNpcBase;

USTRUCT(BlueprintType)
struct FG01VariationNpcParamTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01FieldNpcBase> GenerateObjectClass;
    
    RS2RE_API FG01VariationNpcParamTableRow();
};

