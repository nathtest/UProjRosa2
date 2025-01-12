#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestStackObjectBase -FallbackName=QuestStackObjectBase
#include "EG01QStackPeriodJumpType.h"
#include "G01EventPointIDStruct.h"
#include "G01QuestStackAddEventPoint.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QuestStackAddEventPoint : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01EventPointIDStruct EventPointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01QStackPeriodJumpType PeriodJumpType;
    
public:
    UG01QuestStackAddEventPoint();

};

