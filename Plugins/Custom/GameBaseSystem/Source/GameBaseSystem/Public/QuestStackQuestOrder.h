#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h"
#include "QuestStackOptionQuest.h"
#include "QuestStackQuestOrder.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestStackQuestOrder : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStackOptionQuest Option;
    
public:
    UQuestStackQuestOrder();

};

