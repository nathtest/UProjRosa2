#pragma once
#include "CoreMinimal.h"
#include "EventCategory.h"
#include "EventManagerInf.h"
#include "EventObjectList.h"
#include "EventResult.h"
#include "InteractColliderTag.h"
#include "LevelMoveObserverInf.h"
#include "LevelTransitionInfo.h"
#include "LoadScreenManagerObserverInf.h"
#include "LoadScreenManagerAccessor.h"
#include "ManagerBase.h"
#include "EventObjectManager.generated.h"

class AActor;
class AEventObjectBase;
class UDataTable;
class ULoadScreenManagerAccessor;
class UObserverSubjectComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AEventObjectManager : public AManagerBase, public IEventManagerInf, public ILoadScreenManagerObserverInf, public ILevelMoveObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractColliderTag MInteractAutoTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MAllEventParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MEventAtLevelTransitionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULoadScreenManagerAccessor* MLoadScreenAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObserverSubjectComponent* ObserverSubjectComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FEventCategory, FEventObjectList> MActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEventObjectBase*> MEndEventRemoveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MEventCreateLockActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsDelayRequestQueueEvent;
    
public:
    AEventObjectManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockCreateEvent(AActor* InLockActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReceiveEventEnd(const FEventResult& InEndResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreRequestQueueEventBP(const FLevelTransitionInfo& InTransitionLevelInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreExecuteQueueEventBP(int32 InExecuteIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostRequestQueueEventBP(const FLevelTransitionInfo& InTransitionLevelInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPostGameStart();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostExecuteQueueEventBP(int32 InExecuteIndex, bool InIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExecuteEndQueueEventBP(int32 InExecuteNum);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteTeleportInLevel(const FLevelTransitionInfo& InTransitionLevelInfo);
    

    // Fix for true pure virtual functions not being implemented
};

