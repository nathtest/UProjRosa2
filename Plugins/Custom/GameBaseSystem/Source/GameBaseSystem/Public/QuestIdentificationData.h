#pragma once
#include "CoreMinimal.h"
#include "QuestCategory.h"
#include "QuestIdentificationData.generated.h"

USTRUCT(BlueprintType)
struct FQuestIdentificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MQuestIndex;
    
    GAMEBASESYSTEM_API FQuestIdentificationData();
};

