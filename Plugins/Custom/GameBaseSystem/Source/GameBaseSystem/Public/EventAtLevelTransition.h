#pragma once
#include "CoreMinimal.h"
#include "EventOrderProgressOR.h"
#include "EventAtLevelTransition.generated.h"

USTRUCT(BlueprintType)
struct FEventAtLevelTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventOrderProgressOR MQuestProgress;
    
    GAMEBASESYSTEM_API FEventAtLevelTransition();
};

