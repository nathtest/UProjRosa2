#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h"
#include "QuestFlagPrerequisite.generated.h"

USTRUCT(BlueprintType)
struct FQuestFlagPrerequisite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct MQuestFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MValue;
    
    GAMEBASESYSTEM_API FQuestFlagPrerequisite();
};

