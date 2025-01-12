#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestStackObjectBase -FallbackName=QuestStackObjectBase
#include "EG01QStackActivityTaskType.h"
#include "G01ActivityID.h"
#include "G01QStackActivityTask.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QStackActivityTask : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01ActivityID ActivityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01QStackActivityTaskType Type;
    
public:
    UG01QStackActivityTask();

};

