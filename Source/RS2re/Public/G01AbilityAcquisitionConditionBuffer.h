#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01AbilityAcquisitionConditionData.h"
#include "G01AbilityAcquisitionConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityAcquisitionConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01AbilityAcquisitionConditionData> Buffer;
    
    FG01AbilityAcquisitionConditionBuffer();
};

