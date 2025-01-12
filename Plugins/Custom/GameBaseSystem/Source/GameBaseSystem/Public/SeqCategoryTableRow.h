#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "SeqCategoryTableRow.generated.h"

USTRUCT(BlueprintType)
struct FSeqCategoryTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryID;
    
    GAMEBASESYSTEM_API FSeqCategoryTableRow();
};

