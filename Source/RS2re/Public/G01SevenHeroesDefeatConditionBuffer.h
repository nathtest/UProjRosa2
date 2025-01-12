#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01SevenHeroesDefeatConditionData.h"
#include "G01SevenHeroesDefeatConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SevenHeroesDefeatConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SevenHeroesDefeatConditionData> Buffer;
    
    FG01SevenHeroesDefeatConditionBuffer();
};

