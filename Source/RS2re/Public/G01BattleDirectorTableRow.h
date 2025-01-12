#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01BattleDirectorTableRow.generated.h"

class AG01BattleDirectorController;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleDirectorTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AG01BattleDirectorController> DirectorClass;
    
    FG01BattleDirectorTableRow();
};

