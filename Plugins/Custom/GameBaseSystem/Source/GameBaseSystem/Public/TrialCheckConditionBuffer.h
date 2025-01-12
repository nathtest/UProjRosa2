#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h"
#include "TrialCheckConditionData.h"
#include "TrialCheckConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FTrialCheckConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrialCheckConditionData> Buffer;
    
    FTrialCheckConditionBuffer();
};

