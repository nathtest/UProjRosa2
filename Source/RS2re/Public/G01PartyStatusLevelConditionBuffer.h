#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01PartyStatusLevelConditionData.h"
#include "G01PartyStatusLevelConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01PartyStatusLevelConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyStatusLevelConditionData> Buffer;
    
    FG01PartyStatusLevelConditionBuffer();
};

