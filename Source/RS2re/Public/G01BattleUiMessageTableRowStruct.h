#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01BattleUiMessageTableRowStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleUiMessageTableRowStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Dummy;
    
    FG01BattleUiMessageTableRowStruct();
};

