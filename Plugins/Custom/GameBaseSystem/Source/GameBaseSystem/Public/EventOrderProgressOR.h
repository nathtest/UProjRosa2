#pragma once
#include "CoreMinimal.h"
#include "EventOrderProgressAND.h"
#include "EventOrderProgressOR.generated.h"

USTRUCT(BlueprintType)
struct FEventOrderProgressOR {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventOrderProgressAND> MQuestProgressOR;
    
    GAMEBASESYSTEM_API FEventOrderProgressOR();
};

