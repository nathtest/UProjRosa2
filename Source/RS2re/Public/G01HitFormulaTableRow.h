#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Templates/SubclassOf.h"
#include "G01HitFormulaTableRow.generated.h"

class UG01HitFormulaBase;

USTRUCT(BlueprintType)
struct RS2RE_API FG01HitFormulaTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UG01HitFormulaBase> MFormulaObject;
    
    FG01HitFormulaTableRow();
};

