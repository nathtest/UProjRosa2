#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01BattleEnemyCommandRoutineTableRow.generated.h"

class UG01BattleEnemyThinkTableRoutine;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEnemyCommandRoutineTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UG01BattleEnemyThinkTableRoutine> RoutineObjectClass;
    
    FG01BattleEnemyCommandRoutineTableRow();
};

