#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "EPlatformType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EPlatformType -FallbackName=EPlatformType
#include "Components/RichTextBlockImageDecorator.h" //CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichImageRow -FallbackName=RichImageRow
#include "G01RichButtonImageRow.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01RichButtonImageRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlatformType, FRichImageRow> Images;
    FG01RichButtonImageRow();
};

