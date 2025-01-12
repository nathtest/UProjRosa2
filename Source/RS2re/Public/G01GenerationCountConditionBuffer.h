#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01GenerationCountConditionData.h"
#include "G01GenerationCountConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01GenerationCountConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01GenerationCountConditionData> Buffer;
    
    FG01GenerationCountConditionBuffer();
};

