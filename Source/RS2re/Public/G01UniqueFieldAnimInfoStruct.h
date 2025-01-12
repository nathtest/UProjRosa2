#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine\DataTable.h"
#include "G01UniqueFieldAnimInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01UniqueFieldAnimInfoStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Comment;
    
    FG01UniqueFieldAnimInfoStruct();
};

