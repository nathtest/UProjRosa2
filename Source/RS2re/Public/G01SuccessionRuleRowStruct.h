#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01SuccessionCategoryIDStruct.h"
#include "G01SuccessionRuleRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01SuccessionRuleRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SuccessionCategoryIDStruct> SuccessionCategoryIDList;
    
    RS2RE_API FG01SuccessionRuleRowStruct();
};

