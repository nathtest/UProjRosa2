#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01BattleEndConditionData.h"
#include "G01BattleEndConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEndConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleEndConditionData> Buffer;
    
    FG01BattleEndConditionBuffer();
};

