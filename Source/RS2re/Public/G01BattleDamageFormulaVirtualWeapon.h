#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01BattleDamageFormulaVirtualWeapon.generated.h"

USTRUCT(BlueprintType)
struct FG01BattleDamageFormulaVirtualWeapon : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    RS2RE_API FG01BattleDamageFormulaVirtualWeapon();
};

