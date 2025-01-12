#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01EnemyRespawnConditionInfo.h"
#include "Engine/DataTable.h"
#include "G01EnemyRespawnTableRow.generated.h"

USTRUCT(BlueprintType)
struct FG01EnemyRespawnTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EnemyRespawnConditionInfo RespawnData;
    
    RS2RE_API FG01EnemyRespawnTableRow();
};

