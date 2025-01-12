#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EManagerID.h"
#include "Engine/DataTable.h"
#include "LevelObjectAccessInfoTableRow.generated.h"

USTRUCT(BlueprintType)
struct FLevelObjectAccessInfoTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EManagerID MAccessManagerID;
    
    GAMEBASESYSTEM_API FLevelObjectAccessInfoTableRow();
};

