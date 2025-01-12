#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01DebugBattleAutoPlayUnit.h"
#include "Engine/DataTable.h"
#include "G01DebugBattleAutoPlayTableRow.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01DebugBattleAutoPlayTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IncludeOwnArts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01DebugBattleAutoPlayUnit> AutoPlayUnitList;
    
    FG01DebugBattleAutoPlayTableRow();
};

