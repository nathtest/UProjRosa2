#pragma once
#include "CoreMinimal.h"
#include "QuestConditionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestConditionObjectBase -FallbackName=QuestConditionObjectBase
#include "G01CharacterID.h"
#include "G01QCondPartyStatusLevel.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QCondPartyStatusLevel : public UQuestConditionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01CharacterID CachedCharacterID;
    
public:
    UG01QCondPartyStatusLevel();

};

