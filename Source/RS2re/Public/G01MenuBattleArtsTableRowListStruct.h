#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsTableRow.h"
#include "G01MenuBattleArtsTableRowListStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01MenuBattleArtsTableRowListStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleArtsTableRow> BattleArtsTableRowList;
    
    FG01MenuBattleArtsTableRowListStruct();
};

