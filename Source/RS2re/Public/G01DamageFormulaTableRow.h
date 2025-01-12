#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "G01DamageFormulaTableRow.generated.h"

class UG01DamageFormulaBase;

USTRUCT(BlueprintType)
struct RS2RE_API FG01DamageFormulaTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01DamageFormulaBase> MFormulaObject;
    
    FG01DamageFormulaTableRow();
};

