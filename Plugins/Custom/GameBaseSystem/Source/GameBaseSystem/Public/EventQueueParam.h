#pragma once
#include "CoreMinimal.h"
#include "EventArguments.h"
#include "EventQueueParam.generated.h"

class AEventObjectBase;

USTRUCT(BlueprintType)
struct FEventQueueParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEventObjectBase> MEventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventArguments MEventArgs;
    
    GAMEBASESYSTEM_API FEventQueueParam();
};

