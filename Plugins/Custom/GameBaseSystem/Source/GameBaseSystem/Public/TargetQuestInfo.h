#pragma once
#include "CoreMinimal.h"
#include "TargetQuestInfo.generated.h"

class UQuestCoreData;

USTRUCT(BlueprintType)
struct FTargetQuestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestCoreData* CoreData;
    
    GAMEBASESYSTEM_API FTargetQuestInfo();
};

