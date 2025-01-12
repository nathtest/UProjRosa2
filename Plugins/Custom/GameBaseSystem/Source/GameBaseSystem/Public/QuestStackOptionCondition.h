#pragma once
#include "CoreMinimal.h"
#include "QuestStackOptionCondition.generated.h"

USTRUCT(BlueprintType)
struct FQuestStackOptionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAndCondition;
    
    GAMEBASESYSTEM_API FQuestStackOptionCondition();
};

