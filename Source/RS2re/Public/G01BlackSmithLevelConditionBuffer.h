#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01BlackSmithLevelConditionData.h"
#include "G01BlackSmithLevelConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BlackSmithLevelConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BlackSmithLevelConditionData> Buffer;
    
    FG01BlackSmithLevelConditionBuffer();
};

