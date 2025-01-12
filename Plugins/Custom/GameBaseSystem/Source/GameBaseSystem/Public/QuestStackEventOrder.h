#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h"
#include "QuestStackOptionEvent.h"
#include "QuestStackEventOrder.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestStackEventOrder : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStackOptionEvent MOption;
    
public:
    UQuestStackEventOrder();

};

