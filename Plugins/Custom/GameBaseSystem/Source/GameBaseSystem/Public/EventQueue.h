#pragma once
#include "CoreMinimal.h"
#include "EventQueueParam.h"
#include "EventQueue.generated.h"

USTRUCT(BlueprintType)
struct FEventQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventQueueParam> MEventQueue;
    
    GAMEBASESYSTEM_API FEventQueue();
};

