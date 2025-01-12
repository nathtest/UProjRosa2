#pragma once
#include "CoreMinimal.h"
#include "QuestAvailablePeriodList.h"
#include "QuestFlagPrerequisiteList.h"
#include "QuestPrerequisiteList.h"
#include "QuestPrerequisiteParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestPrerequisiteParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestAvailablePeriodList> MAvailablePeriodList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestPrerequisiteList> MPrerequisiteQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestFlagPrerequisiteList> MPrerequisiteQuestFlags;
    
    FQuestPrerequisiteParam();
};

