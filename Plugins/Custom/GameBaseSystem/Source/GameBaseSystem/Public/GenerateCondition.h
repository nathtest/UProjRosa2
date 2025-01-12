#pragma once
#include "CoreMinimal.h"
#include "EGenConditonCheckType.h"
#include "QuestReceiveReserveParamInSectionRange.h"
#include "GenerateCondition.generated.h"

USTRUCT(BlueprintType)
struct FGenerateCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGenConditonCheckType MCheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReceiveReserveParamInSectionRange MCondition;
    
    GAMEBASESYSTEM_API FGenerateCondition();
};

