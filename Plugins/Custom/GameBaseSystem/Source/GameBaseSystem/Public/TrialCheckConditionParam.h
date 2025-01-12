#pragma once
#include "CoreMinimal.h"
#include "QuestConditionParamBase.h"
#include "TrialCheckConditionParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FTrialCheckConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTrial;
    
    FTrialCheckConditionParam();
};

