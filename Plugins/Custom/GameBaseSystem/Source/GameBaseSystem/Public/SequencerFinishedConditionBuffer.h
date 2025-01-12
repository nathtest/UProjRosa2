#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h"
#include "SequencerFinishedConditionData.h"
#include "SequencerFinishedConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSequencerFinishedConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSequencerFinishedConditionData> Buffer;
    
    FSequencerFinishedConditionBuffer();
};

