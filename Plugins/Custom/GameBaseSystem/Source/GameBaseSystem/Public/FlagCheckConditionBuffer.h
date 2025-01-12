#pragma once
#include "CoreMinimal.h"
#include "FlagCheckConditionData.h"
#include "QuestConditionBufferBase.h"
#include "FlagCheckConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FFlagCheckConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlagCheckConditionData> Buffer;
    
    FFlagCheckConditionBuffer();
};

