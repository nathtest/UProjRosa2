#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01ItemCollectConditionData.h"
#include "G01ItemCollectConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ItemCollectConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ItemCollectConditionData> Buffer;
    
    FG01ItemCollectConditionBuffer();
};

