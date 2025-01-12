#pragma once
#include "CoreMinimal.h"
#include "QuestMap.generated.h"

class AQuestObjectCore;

USTRUCT(BlueprintType)
struct FQuestMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AQuestObjectCore*> MQuests;
    
    GAMEBASESYSTEM_API FQuestMap();
};

