#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "G01StoryHistoryCategoryTableRow.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01StoryHistoryCategoryTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChoiceNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PulldownTooltip;
    
    FG01StoryHistoryCategoryTableRow();
};

