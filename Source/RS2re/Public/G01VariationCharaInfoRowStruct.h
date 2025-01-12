#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "G01VariationCharaInfoStruct.h"
#include "G01VariationCharaInfoRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01VariationCharaInfoRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01VariationCharaInfoStruct> VariationCharaInfoList;
    
    RS2RE_API FG01VariationCharaInfoRowStruct();
};

