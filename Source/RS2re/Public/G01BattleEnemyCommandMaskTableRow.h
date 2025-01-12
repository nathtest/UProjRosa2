#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01BattleEnemyCommandMaskUnit.h"
#include "G01BattleEnemyCommandMaskTableRow.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEnemyCommandMaskTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleEnemyCommandMaskUnit> MaskUnitList;
    
    FG01BattleEnemyCommandMaskTableRow();
};

