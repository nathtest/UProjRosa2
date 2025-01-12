#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01EnemyHearingInfo.h"
#include "Engine/DataTable.h"
#include "G01EnemyHearingTableRow.generated.h"

USTRUCT(BlueprintType)
struct FG01EnemyHearingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EnemyHearingInfo EnemyHearingInfo;
    
    RS2RE_API FG01EnemyHearingTableRow();
};

