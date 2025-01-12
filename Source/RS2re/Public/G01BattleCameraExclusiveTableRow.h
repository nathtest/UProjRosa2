#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01BattleCameraExclusiveTableRow.generated.h"

class UG01BattleCameraJudgeBase;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCameraExclusiveTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UG01BattleCameraJudgeBase>, FName> JudgeSettingMap;
    
    FG01BattleCameraExclusiveTableRow();
};

