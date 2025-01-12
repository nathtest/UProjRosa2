#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01EnemySightInfo.h"
#include "Engine/DataTable.h"
#include "G01EnemySightTableRow.generated.h"

USTRUCT(BlueprintType)
struct FG01EnemySightTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01EnemySightInfo EnemySightInfo;
    
    RS2RE_API FG01EnemySightTableRow();
};

