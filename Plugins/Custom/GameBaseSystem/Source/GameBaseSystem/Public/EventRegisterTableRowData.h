#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Engine/DataTable.h"
#include "EventRegisterTableRowData.generated.h"

class AEventObjectBase;

USTRUCT(BlueprintType)
struct FEventRegisterTableRowData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEventObjectBase> MEventSoftReference;
    
    GAMEBASESYSTEM_API FEventRegisterTableRowData();
};

