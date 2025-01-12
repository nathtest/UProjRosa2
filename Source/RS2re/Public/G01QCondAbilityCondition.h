#pragma once
#include "CoreMinimal.h"
#include "QuestConditionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionObjectBase -FallbackName=QuestConditionObjectBase
#include "G01CharaClassID.h"
#include "G01QCondAbilityCondition.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QCondAbilityCondition : public UQuestConditionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01CharaClassID> TargetClassIDs;
    
public:
    UG01QCondAbilityCondition();

};

