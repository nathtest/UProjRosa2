#pragma once
#include "CoreMinimal.h"
#include "QuestConditionDataBase.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FQuestConditionDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRestored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsed;
    
public:
    FQuestConditionDataBase();
};

