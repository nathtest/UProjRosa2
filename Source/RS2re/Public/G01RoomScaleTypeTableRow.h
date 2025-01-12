#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "G01RoomScaleParam.h"
#include "G01RoomScaleType.h"
#include "G01RoomScaleTypeTableRow.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01RoomScaleTypeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01RoomScaleType Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01RoomScaleParam Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01RoomScaleParam CachedParam;
    
    FG01RoomScaleTypeTableRow();
};

