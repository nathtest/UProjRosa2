#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestStackObjectBase -FallbackName=QuestStackObjectBase
#include "G01QStackUpdateAbilityOpenLevelParam.h"
#include "G01QStackUpdateAbilityOpenLevel.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QStackUpdateAbilityOpenLevel : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01QStackUpdateAbilityOpenLevelParam Param;
    
public:
    UG01QStackUpdateAbilityOpenLevel();

};

