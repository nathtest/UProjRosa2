#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01ClearAreaCountConditionData.h"
#include "G01ClearAreaCountConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ClearAreaCountConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ClearAreaCountConditionData> Buffer;
    
    FG01ClearAreaCountConditionBuffer();
};

