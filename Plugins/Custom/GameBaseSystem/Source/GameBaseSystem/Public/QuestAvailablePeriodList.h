#pragma once
#include "CoreMinimal.h"
#include "QuestAvailablePeriod.h"
#include "QuestAvailablePeriodList.generated.h"

USTRUCT(BlueprintType)
struct FQuestAvailablePeriodList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestAvailablePeriod> MAvailablePeriods;
    
    GAMEBASESYSTEM_API FQuestAvailablePeriodList();
};

