#pragma once
#include "CoreMinimal.h"
#include "QuestData.h"
#include "QuestSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastTargetQuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetQuestIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestData> Datas;
    
    FQuestSaveInfo();
};

