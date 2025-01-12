#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EventCatTableRow.generated.h"

USTRUCT(BlueprintType)
struct FEventCatTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MName;
    
    GAMEBASESYSTEM_API FEventCatTableRow();
};

