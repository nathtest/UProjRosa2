#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "LevelEventListTableRowData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FLevelEventListTableRowData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MEventListDataTable;
    
    GAMEBASESYSTEM_API FLevelEventListTableRowData();
};

