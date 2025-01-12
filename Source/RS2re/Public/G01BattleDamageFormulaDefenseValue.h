#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01BattleDamageFormulaDefenseValue.generated.h"

USTRUCT(BlueprintType)
struct FG01BattleDamageFormulaDefenseValue : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    RS2RE_API FG01BattleDamageFormulaDefenseValue();
};

