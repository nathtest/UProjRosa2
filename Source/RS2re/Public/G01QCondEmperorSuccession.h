#pragma once
#include "CoreMinimal.h"
#include "QuestConditionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionObjectBase -FallbackName=QuestConditionObjectBase
#include "G01QCondEmperorSuccession.generated.h"

class UG01PartyManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API UG01QCondEmperorSuccession : public UQuestConditionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01PartyManagerAccessor* PartyManagerAccessor;
    
public:
    UG01QCondEmperorSuccession();

};

