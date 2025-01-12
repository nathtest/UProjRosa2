#pragma once
#include "CoreMinimal.h"
#include "G01QuestDestCheckResult.generated.h"

class AG01QuestObjectBase;

USTRUCT(BlueprintType)
struct FG01QuestDestCheckResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01QuestObjectBase* QuestObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDestinationTarget;
    
    RS2RE_API FG01QuestDestCheckResult();
};

