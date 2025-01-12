#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EG01BlackSmithMenuItemCategoryEnum.h"
#include "G01BlackSmithMenuItemDataStruct.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BlackSmithMenuItemDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BlackSmithMenuItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryExplanationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BlackSmithMenuItemCategoryEnum Category;
    
    FG01BlackSmithMenuItemDataStruct();
};

