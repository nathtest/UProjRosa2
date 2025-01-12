#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h"
#include "QuestStackOptionCondition.h"
#include "QuestStackConditions.generated.h"

class UQuestConditionObjectBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestStackConditions : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStackOptionCondition MOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestConditionObjectBase*> MConditionObjects;
    
public:
    UQuestStackConditions();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Debug_GetConditions(TArray<UQuestConditionObjectBase*>& OutConditions) const;
    
};

