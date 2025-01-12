#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.h"
#include "SequencerFinishedConditionParam.h"
#include "SequencerFinishedConditionData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSequencerFinishedConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequencerFinishedConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSequencerFinishedConditionParam Base;
    
    FSequencerFinishedConditionData();
};

