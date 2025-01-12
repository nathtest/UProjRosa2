#pragma once
#include "CoreMinimal.h"
#include "QuestSectionNameView.h"
#include "QuestPrerequisite.generated.h"

class AQuestObjectBase;

USTRUCT(BlueprintType)
struct FQuestPrerequisite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectBase> MPrerequisiteQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MPrerequisiteSectionName;
    
    GAMEBASESYSTEM_API FQuestPrerequisite();
};

