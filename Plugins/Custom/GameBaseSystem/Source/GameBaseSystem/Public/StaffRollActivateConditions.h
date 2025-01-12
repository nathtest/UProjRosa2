#pragma once
#include "CoreMinimal.h"
#include "GenerateConditions.h"
#include "StaffRollActivateConditions.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FStaffRollActivateConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenerateConditions QuestAndFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Sequence;
    
    FStaffRollActivateConditions();
};

