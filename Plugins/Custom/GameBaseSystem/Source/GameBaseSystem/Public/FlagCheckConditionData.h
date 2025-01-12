#pragma once
#include "CoreMinimal.h"
#include "FlagCheckConditionParam.h"
#include "QuestConditionDataBase.h"
#include "FlagCheckConditionData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FFlagCheckConditionData : public FQuestConditionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagCheckConditionParam Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagCheckConditionParam Base;
    
    FFlagCheckConditionData();
};

