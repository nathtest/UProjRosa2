#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "G01CharaVariationInfoStruct.h"
#include "G01CharaVariationInfoRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01CharaVariationInfoRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01CharaVariationInfoStruct> CharaVariationInfoList;
    
    RS2RE_API FG01CharaVariationInfoRowStruct();
};

