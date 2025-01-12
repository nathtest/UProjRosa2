#pragma once
#include "CoreMinimal.h"
#include "QuestSectionLogData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestSectionLogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionIndex;
    
    FQuestSectionLogData();
};

