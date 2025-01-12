#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "G01UiTextInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01UiTextInfoStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ConvertText;
    
    FG01UiTextInfoStruct();
};

