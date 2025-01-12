#pragma once
#include "CoreMinimal.h"
#include "QuestConditionBufferBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionBufferBase -FallbackName=QuestConditionBufferBase
#include "G01EquipCompleteConditionData.h"
#include "G01EquipCompleteConditionBuffer.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01EquipCompleteConditionBuffer : public FQuestConditionBufferBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01EquipCompleteConditionData> Buffer;
    
    FG01EquipCompleteConditionBuffer();
};

