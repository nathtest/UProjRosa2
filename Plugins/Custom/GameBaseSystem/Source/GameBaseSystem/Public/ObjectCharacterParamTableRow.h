#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "ObjectCharacterParamTableRow.generated.h"

USTRUCT(BlueprintType)
struct FObjectCharacterParamTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MNameID;
    
    GAMEBASESYSTEM_API FObjectCharacterParamTableRow();
};

