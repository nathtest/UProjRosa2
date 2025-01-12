#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01PlayGoCompleteConditionData.h"
#include "G01PlayGoCompleteConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01PlayGoCompleteConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PlayGoCompleteConditionData> Buffer;
    
    FG01PlayGoCompleteConditionBuffer();
};

