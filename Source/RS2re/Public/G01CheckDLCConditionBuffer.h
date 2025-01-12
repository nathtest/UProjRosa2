#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01CheckDLCConditionData.h"
#include "G01CheckDLCConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01CheckDLCConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01CheckDLCConditionData> Buffer;
    
    FG01CheckDLCConditionBuffer();
};

