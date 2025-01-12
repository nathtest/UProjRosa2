#pragma once
#include "CoreMinimal.h"
#include "EventEndConditionParam.h"
#include "QuestConditionDataBase.h"
#include "EventEndConditionData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FEventEndConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventEndConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEventEndConditionParam Base;
    
    FEventEndConditionData();
};

