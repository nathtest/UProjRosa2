#pragma once
#include "CoreMinimal.h"
#include "QuestConditionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionObjectBase -FallbackName=QuestConditionObjectBase
#include "G01QuestEquipCompleteCondition.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QuestEquipCompleteCondition : public UQuestConditionObjectBase {
    GENERATED_BODY()
public:
    UG01QuestEquipCompleteCondition();

};

