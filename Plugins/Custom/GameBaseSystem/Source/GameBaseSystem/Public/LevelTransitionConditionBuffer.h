#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionConditionData.h"
#include "QuestConditionBufferBase.h"
#include "LevelTransitionConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FLevelTransitionConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelTransitionConditionData> Buffer;
    
    FLevelTransitionConditionBuffer();
};

