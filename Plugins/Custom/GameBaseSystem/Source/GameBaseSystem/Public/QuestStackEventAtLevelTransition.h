#pragma once
#include "CoreMinimal.h"
#include "LevelTransitionInfoView.h"
#include "QuestStackObjectBase.h"
#include "QuestStackEventAtLevelTransition.generated.h"

class AEventObjectBase;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API UQuestStackEventAtLevelTransition : public UQuestStackObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelTransitionInfoView MLevelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEventObjectBase> MEventClass;
    
public:
    UQuestStackEventAtLevelTransition();

};

