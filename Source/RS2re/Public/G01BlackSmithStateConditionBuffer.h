#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01BlackSmithStateConditionData.h"
#include "G01BlackSmithStateConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BlackSmithStateConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BlackSmithStateConditionData> Buffer;
    
    FG01BlackSmithStateConditionBuffer();
};

