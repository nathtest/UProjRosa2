#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01BattleEnemyCommandChangeTableRow.generated.h"

class UG01BattleEnemyThinkPatternChange;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEnemyCommandChangeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UG01BattleEnemyThinkPatternChange> ChangeObjectClass;
    
    FG01BattleEnemyCommandChangeTableRow();
};

