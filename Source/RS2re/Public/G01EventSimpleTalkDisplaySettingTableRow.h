#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "G01EventSimpleTalkDisplaySettingTableRow.generated.h"

USTRUCT(BlueprintType)
struct FG01EventSimpleTalkDisplaySettingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowMaxLength;
    
    RS2RE_API FG01EventSimpleTalkDisplaySettingTableRow();
};

