#pragma once
#include "CoreMinimal.h"
#include "QuestStackObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=QuestStackObjectBase -FallbackName=QuestStackObjectBase
#include "G01EventTriggerID.h"
#include "G01QuestStackRecordEventInfo.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01QuestStackRecordEventInfo : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01EventTriggerID> EventTriggerIdList;
    
public:
    UG01QuestStackRecordEventInfo();

};

