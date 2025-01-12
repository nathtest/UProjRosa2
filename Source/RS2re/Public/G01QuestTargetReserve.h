#pragma once
#include "CoreMinimal.h"
#include "G01QuestTargetReserve.generated.h"

USTRUCT(BlueprintType)
struct FG01QuestTargetReserve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetQuestID;
    
    RS2RE_API FG01QuestTargetReserve();
};

