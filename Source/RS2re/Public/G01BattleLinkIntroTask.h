#pragma once
#include "CoreMinimal.h"
#include "G01BattleCharacterViewSwitcherOwnerInf.h"
#include "G01BattlePlaySequenceTaskInf.h"
#include "G01BattleTask.h"
#include "G01BattleLinkIntroTask.generated.h"

class ASequenceController;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleLinkIntroTask : public UG01BattleTask, public IG01BattlePlaySequenceTaskInf, public IG01BattleCharacterViewSwitcherOwnerInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceController* SequenceCtrl;
    
public:
    UG01BattleLinkIntroTask();

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedSequence(ASequenceController* InSequence);
    

    // Fix for true pure virtual functions not being implemented
};

