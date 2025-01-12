#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01BattleTaskTableRow.generated.h"

class UG01BattleTask;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleTaskTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UG01BattleTask> BattleTaskClass;
    
    FG01BattleTaskTableRow();
};

