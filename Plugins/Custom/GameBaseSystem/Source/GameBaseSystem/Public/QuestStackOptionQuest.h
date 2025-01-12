#pragma once
#include "CoreMinimal.h"
#include "QuestStackOptionQuest.generated.h"

USTRUCT(BlueprintType)
struct FQuestStackOptionQuest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWaitQuestEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FullQuestID;
    
    GAMEBASESYSTEM_API FQuestStackOptionQuest();
};

