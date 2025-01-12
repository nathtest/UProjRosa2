#pragma once
#include "CoreMinimal.h"
#include "EventQueue.h"
#include "EventPriorityQueue.generated.h"

USTRUCT(BlueprintType)
struct FEventPriorityQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventQueue> MEventPriorityQueue;
    
    GAMEBASESYSTEM_API FEventPriorityQueue();
};

