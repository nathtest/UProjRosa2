#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "EventEndParams.h"
#include "EventFlowWaitUnitEventParam.h"
#include "EventObjectBase.h"
#include "EventResult.h"
#include "EventUnitCustomCacheKey.h"
#include "QuestSectionNameView.h"
#include "QuestSkipOptions.h"
#include "ScreenTransitionManagerObserverInf.h"
#include "SequenceControllerUserInf.h"
#include "SequencerPlayEventParam.h"
#include "SequencerPlayEventResult.h"
#include "EventObjectFlowBase.generated.h"

class AEventObjectUnitBase;
class AQuestObjectBase;
class UObject;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AEventObjectFlowBase : public AEventObjectBase, public ISequenceControllerUserInf, public IScreenTransitionManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MAsyncEventRequestCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, AEventObjectUnitBase*> MActiveEventUnitStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MCustomWaitKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, AEventObjectUnitBase*> MAllUnitEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FEventUnitCustomCacheKey, UObject*> MUnitUseObjectCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FEventUnitCustomCacheKey, UObject*> MControllerUseObjectCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventFlowWaitUnitEventParam> MOrderedAsyncCreateUnitParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MUnitCreateRequestCoutnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventEndParams MWaitEventEndParams;
    
public:
    AEventObjectFlowBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="InWorldContext"))
    void WaitStackCmdEventEnd(const UObject* InWorldContext, FLatentActionInfo InLatentInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReceiveStackEventFinish(const FEventResult& InEndResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStackEventEnd(int32 InEvetKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllStackEventEnd() const;
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="InWorldContext"))
    void Cmd_FA_WaitScreenHide(const UObject* InWorldContext, FLatentActionInfo InLatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_QuestSectionTransition(TSoftClassPtr<AQuestObjectBase> InQuestClass, FQuestSectionNameView InDestSection, const FQuestSkipOptions& InOptions);
    
    UFUNCTION(BlueprintCallable)
    AQuestObjectBase* Cmd_FA_QuestOrder(TSoftClassPtr<AQuestObjectBase> InQuestClass);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_GetSequenceResult(int32 InEventKey, FSequencerPlayEventResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_EventOrderWithArgs(TSoftClassPtr<AEventObjectBase> InEventClass, const TMap<FName, FString>& InArgs);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_FA_EventOrder(TSoftClassPtr<AEventObjectBase> InEventClass);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cmd_EV_OnOrderedEventObject(AEventObjectBase* InNewEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Cmd_CU_PlaySequencer(int32& OutEventKey, FSequencerPlayEventParam InParam);
    

    // Fix for true pure virtual functions not being implemented
};

