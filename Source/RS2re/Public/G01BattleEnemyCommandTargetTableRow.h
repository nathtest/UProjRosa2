#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01BattleEnemyCommandTargetTableRow.generated.h"

class UG01BattleEnemyThinkTargetSelect;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEnemyCommandTargetTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UG01BattleEnemyThinkTargetSelect> TargetObjectClass;
    
    FG01BattleEnemyCommandTargetTableRow();
};

