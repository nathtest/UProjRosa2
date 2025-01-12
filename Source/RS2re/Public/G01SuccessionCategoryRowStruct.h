#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01SuccessionRuleIDStruct.h"
#include "G01SuccessionCategoryRowStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01SuccessionCategoryRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SuccessionRuleIDStruct> SuccessionRuleIDList;
    
    RS2RE_API FG01SuccessionCategoryRowStruct();
};

