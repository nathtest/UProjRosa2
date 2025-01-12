#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionInfo.h"
#include "QuestConditionObjectBase.h"
#include "LevelTransitionConditionObject.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ULevelTransitionConditionObject : public UQuestConditionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfo TargetLevelInfo;
    
public:
    ULevelTransitionConditionObject();

};

