#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestStackObjectBase -FallbackName=QuestStackObjectBase
#include "G01QStackJoinPartyParams.h"
#include "G01QuestStackJoinParty.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QuestStackJoinParty : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01QStackJoinPartyParams JoinPartyParams;
    
public:
    UG01QuestStackJoinParty();

};

