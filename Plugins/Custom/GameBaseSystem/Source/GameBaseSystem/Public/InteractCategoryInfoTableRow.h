#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EInteractPriorityType.h"
#include "Engine/DataTable.h"
#include "InteractCategoryInfoTableRow.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FInteractCategoryInfoTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractPriorityType Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Comment;
    
    FInteractCategoryInfoTableRow();
};

