#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01PartyChangeConditionData.h"
#include "G01PartyChangeConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01PartyChangeConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyChangeConditionData> Buffer;
    
    FG01PartyChangeConditionBuffer();
};

