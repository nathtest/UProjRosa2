#pragma once
#include "CoreMinimal.h"
#include "SequenceControllerUserInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceControllerUserInf -FallbackName=SequenceControllerUserInf
#include "G01BattleCharacterViewSwitcherOwnerInf.h"
#include "G01BattleInspirationTaskInf.h"
#include "G01BattlePlaySequenceTaskInf.h"
#include "G01BattleTask.h"
#include "G01BattleArtsInspirationTask.generated.h"

class ASequenceController;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleArtsInspirationTask : public UG01BattleTask, public IG01BattleInspirationTaskInf, public IG01BattlePlaySequenceTaskInf, public IG01BattleCharacterViewSwitcherOwnerInf, public ISequenceControllerUserInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceController* SequenceCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArtsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseArtsId;
    
public:
    UG01BattleArtsInspirationTask();

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedSequence(ASequenceController* InSequence);
    

    // Fix for true pure virtual functions not being implemented
};

