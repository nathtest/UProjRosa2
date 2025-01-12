#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h"
#include "SequencerFinishedConditionParam.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSequencerFinishedConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> TargetSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ChoiceIndexResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCheckFromFront;
    
    FSequencerFinishedConditionParam();
};

