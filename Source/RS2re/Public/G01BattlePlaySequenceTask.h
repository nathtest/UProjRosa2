#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SequenceController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=OnSequenceFinished__DelegateSignature -FallbackName=OnSequenceFinishedDelegate
#include "SequenceControllerUserInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceControllerUserInf -FallbackName=SequenceControllerUserInf
#include "G01BattlePlaySequenceTaskInf.h"
#include "G01BattleTask.h"
#include "G01BattlePlaySequenceTask.generated.h"

class AActor;
class ASequenceController;

UCLASS(Blueprintable)
class RS2RE_API UG01BattlePlaySequenceTask : public UG01BattleTask, public IG01BattlePlaySequenceTaskInf, public ISequenceControllerUserInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceController* SequenceCtrl;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOnSequenceFinished> FinishedDelegateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OriginActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OriginActorOffset;
    
public:
    UG01BattlePlaySequenceTask();

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedSequence(ASequenceController* InSequence);
    

    // Fix for true pure virtual functions not being implemented
};

