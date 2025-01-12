#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestStackObjectBase -FallbackName=QuestStackObjectBase
#include "G01AbilityActivateParams.h"
#include "G01QStackActivateAbility.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QStackActivateAbility : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01AbilityActivateParams Params;
    
public:
    UG01QStackActivateAbility();

};

