#pragma once
#include "CoreMinimal.h"
#include "EQuestEndCheckType.h"
#include "QuestConditionParamBase.h"
#include "QuestEndConditionParam.generated.h"

class AQuestObjectBase;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestEndConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuestObjectBase> TargetQuestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EQuestEndCheckType::Type> EndCheckType;
    
    FQuestEndConditionParam();
};

