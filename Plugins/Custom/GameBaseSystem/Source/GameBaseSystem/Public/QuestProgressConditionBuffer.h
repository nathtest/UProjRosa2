#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h"
#include "QuestProgressConditionData.h"
#include "QuestProgressConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestProgressConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestProgressConditionData> Buffer;
    
    FQuestProgressConditionBuffer();
};

