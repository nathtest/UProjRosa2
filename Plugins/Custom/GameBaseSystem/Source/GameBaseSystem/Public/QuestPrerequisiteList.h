#pragma once
#include "CoreMinimal.h"
#include "QuestPrerequisite.h"
#include "QuestPrerequisiteList.generated.h"

USTRUCT(BlueprintType)
struct FQuestPrerequisiteList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestPrerequisite> MPrerequisiteQuests;
    
    GAMEBASESYSTEM_API FQuestPrerequisiteList();
};

