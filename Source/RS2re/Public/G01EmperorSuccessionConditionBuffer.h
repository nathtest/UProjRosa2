#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01EmperorSuccessionConditionData.h"
#include "G01EmperorSuccessionConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01EmperorSuccessionConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01EmperorSuccessionConditionData> Buffer;
    
    FG01EmperorSuccessionConditionBuffer();
};

