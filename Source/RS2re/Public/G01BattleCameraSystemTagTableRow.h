#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EG01BattleCameraPhaseType.h"
#include "G01BattleCameraSystemTagTableRow.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCameraSystemTagTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01BattleCameraPhaseType> PhaseTypeList;
    
    FG01BattleCameraSystemTagTableRow();
};

