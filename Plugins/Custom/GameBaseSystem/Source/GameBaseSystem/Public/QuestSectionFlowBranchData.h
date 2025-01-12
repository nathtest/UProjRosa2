#pragma once
#include "CoreMinimal.h"
#include "QuestSectionFlowBase.h"
#include "QuestSectionFlowBranchData.generated.h"

USTRUCT(BlueprintType)
struct FQuestSectionFlowBranchData : public FQuestSectionFlowBase {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FQuestSectionFlowBranchData();
};

