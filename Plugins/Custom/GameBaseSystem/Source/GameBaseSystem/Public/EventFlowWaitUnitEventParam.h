#pragma once
#include "CoreMinimal.h"
#include "EventArguments.h"
#include "EventFlowWaitUnitEventParam.generated.h"

class AEventObjectUnitBase;

USTRUCT(BlueprintType)
struct FEventFlowWaitUnitEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventArguments MArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEventObjectUnitBase* MCreatedCache;
    
    GAMEBASESYSTEM_API FEventFlowWaitUnitEventParam();
};

