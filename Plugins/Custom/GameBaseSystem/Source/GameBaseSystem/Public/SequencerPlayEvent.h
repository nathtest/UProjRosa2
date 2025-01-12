#pragma once
#include "CoreMinimal.h"
#include "EventObjectUnitBase.h"
#include "LoadScreenManagerObserverInf.h"
#include "SequenceControllerUserInf.h"
#include "SequencerPlayEventParam.h"
#include "ScreenTransitionManagerAccessor.h"
#include "SequencerPlayEvent.generated.h"

class AActor;
class ASequenceController;
class ULoadScreenManagerAccessor;
class UScreenTransitionManagerAccessor;
class USequencerManagerAccessCompo;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequencerPlayEvent : public AEventObjectUnitBase, public ISequenceControllerUserInf, public ILoadScreenManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USequencerManagerAccessCompo* MSequencerManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULoadScreenManagerAccessor* LoadScreenManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScreenTransitionManagerAccessor* ScreenTransitionManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASequenceController* MSequenceController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSequencerPlayEventParam PlayParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ChoiceResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ElapsedWaitTime;
    
public:
    ASequencerPlayEvent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnDestroyedController(AActor* InController);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableSequence();
    
    UFUNCTION(BlueprintCallable)
    bool CheckSequenceAvailable();
    

    // Fix for true pure virtual functions not being implemented
};

