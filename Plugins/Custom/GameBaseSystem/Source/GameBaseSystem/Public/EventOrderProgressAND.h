#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveReserveParamInSectionRange.h"
#include "EventOrderProgressAND.generated.h"

USTRUCT(BlueprintType)
struct FEventOrderProgressAND {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestReceiveReserveParamInSectionRange> MQuestProgressAND;
    
    GAMEBASESYSTEM_API FEventOrderProgressAND();
};

