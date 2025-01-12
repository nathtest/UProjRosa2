#pragma once
#include "CoreMinimal.h"
#include "EventEndParams.h"
#include "QuestConditionParamBase.h"
#include "EventEndConditionParam.generated.h"

class AEventObjectBase;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FEventEndConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEventObjectBase> TargetEventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEventEndParams EndParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsWaitCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsWaitEnd;
    
    FEventEndConditionParam();
};

