#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h"
#include "QuestProgressConditionParam.generated.h"

class AQuestObjectBase;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestProgressConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectBase> TargetQuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CustomQuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TargetSectionIndex;
    
    FQuestProgressConditionParam();
};

