#pragma once
#include "CoreMinimal.h"
#include "QuestSectionNameView.h"
#include "QuestAvailablePeriod.generated.h"

class AQuestObjectBase;

USTRUCT(BlueprintType)
struct FQuestAvailablePeriod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectBase> MTargetQuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MBeginSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSectionNameView MEndSectionName;
    
    GAMEBASESYSTEM_API FQuestAvailablePeriod();
};

