#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h"
#include "QuestEndConditionData.h"
#include "QuestEndConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestEndConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestEndConditionData> Buffer;
    
    FQuestEndConditionBuffer();
};

