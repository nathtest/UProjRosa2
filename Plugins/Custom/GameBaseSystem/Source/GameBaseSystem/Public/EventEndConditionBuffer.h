#pragma once
#include "CoreMinimal.h"
#include "EventEndConditionData.h"
#include "QuestConditionBufferBase.h"
#include "EventEndConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FEventEndConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventEndConditionData> Buffer;
    
    FEventEndConditionBuffer();
};

