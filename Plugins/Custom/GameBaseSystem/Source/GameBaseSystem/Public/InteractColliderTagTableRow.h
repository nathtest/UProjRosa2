#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "InteractColliderTagTableRow.generated.h"

USTRUCT(BlueprintType)
struct FInteractColliderTagTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MComment;
    
    GAMEBASESYSTEM_API FInteractColliderTagTableRow();
};

