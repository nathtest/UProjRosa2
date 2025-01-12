#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionInfo.h"
#include "QuestStackObjectBase.h"
#include "QuestStackLevelTransition.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestStackLevelTransition : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfo MDestinationLevelInfo;
    
public:
    UQuestStackLevelTransition();

};

