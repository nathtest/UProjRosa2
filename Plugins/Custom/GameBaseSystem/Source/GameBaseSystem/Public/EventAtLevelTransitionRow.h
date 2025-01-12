#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EventAtLevelTransition.h"
#include "EventAtLevelTransitionRow.generated.h"

class AEventObjectBase;

USTRUCT(BlueprintType)
struct FEventAtLevelTransitionRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AEventObjectBase>, FEventAtLevelTransition> MEvents;
    
    GAMEBASESYSTEM_API FEventAtLevelTransitionRow();
};

