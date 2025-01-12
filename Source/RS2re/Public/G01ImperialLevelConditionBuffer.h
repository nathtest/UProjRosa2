#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01ImperialLevelConditionData.h"
#include "G01ImperialLevelConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ImperialLevelConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ImperialLevelConditionData> Buffer;
    
    FG01ImperialLevelConditionBuffer();
};

