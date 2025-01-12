#pragma once
#include "CoreMinimal.h"
#include "QuestReceiveReserveParamInSectionRange.h"
#include "GeneratePointParam.generated.h"

class AGeneratePoint;

USTRUCT(BlueprintType)
struct FGeneratePointParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGeneratePoint> MGeneratePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestReceiveReserveParamInSectionRange MCondition;
    
    GAMEBASESYSTEM_API FGeneratePointParam();
};

