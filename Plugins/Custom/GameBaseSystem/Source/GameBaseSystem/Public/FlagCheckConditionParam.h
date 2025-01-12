#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h"
#include "QuestConditionParamBase.h"
#include "FlagCheckConditionParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FFlagCheckConditionParam : public FQuestConditionParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagAccessParam FlagAccessParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ChangedValue;
    
    FFlagCheckConditionParam();
};

