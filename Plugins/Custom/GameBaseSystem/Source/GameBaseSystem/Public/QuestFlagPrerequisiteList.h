#pragma once
#include "CoreMinimal.h"
#include "QuestFlagPrerequisite.h"
#include "QuestFlagPrerequisiteList.generated.h"

USTRUCT(BlueprintType)
struct FQuestFlagPrerequisiteList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestFlagPrerequisite> MPrerequisiteQuestFlags;
    
    GAMEBASESYSTEM_API FQuestFlagPrerequisiteList();
};

