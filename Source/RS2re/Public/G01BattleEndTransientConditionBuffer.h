#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01BattleEndTransientConditionData.h"
#include "G01BattleEndTransientConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEndTransientConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01BattleEndTransientConditionData> Buffer;
    
    FG01BattleEndTransientConditionBuffer();
};

