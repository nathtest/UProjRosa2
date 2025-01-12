#pragma once
#include "CoreMinimal.h"
#include "FlagSetupDataRow.h"
#include "QuestFlagRowData.generated.h"

USTRUCT(BlueprintType)
struct FQuestFlagRowData : public FFlagSetupDataRow {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FQuestFlagRowData();
};

