#pragma once
#include "CoreMinimal.h"
#include "EventResult.h"
#include "FlagChangedEventParam.h"
#include "LevelMoveObserverInf.h"
#include "LoadScreenManagerObserverInf.h"
#include "ManagerBase.h"
#include "OnAnyQuestUpdateDelegateDelegate.h"
#include "QuestCategory.h"
#include "QuestManagerInterface.h"
#include "QuestMap.h"
#include "QuestReceiveParamQuestBegin.h"
#include "QuestReceiveParamQuestFinish.h"
#include "QuestReceiveParamQuestOrdered.h"
#include "QuestReceiveParamQuestSectionChanged.h"
#include "QuestReceiveParamQuestSectionCompleted.h"
#include "QuestSkipOptions.h"
#include "SequencePlayFinishParam.h"
#include "QuestManager.generated.h"

class AActor;
class AQuestObjectBase;
class AQuestObjectCore;
class UCollisionObjManagerAccessCompo;
class UEventManagerAccessComponent;
class UFlagEventReceiveComponent;
class UFlagSystemManagerAccessCompo;
class ULoadScreenManagerAccessor;
class UObserverSubjectComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AQuestManager : public AManagerBase, public IQuestManagerInterface, public ILoadScreenManagerObserverInf, public ILevelMoveObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObserverSubjectComponent* ObserverSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEventManagerAccessComponent* MEventManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagEventReceiveComponent* MFlagEventReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFlagSystemManagerAccessCompo* MFlagManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCollisionObjManagerAccessCompo* MCollisionObjectManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULoadScreenManagerAccessor* MLoadScreenAccessor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyQuestUpdateDelegate OnAnyQuestUpdateDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FQuestCategory, FQuestMap> MQuestMapByCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FQuestCategory, FQuestMap> MQuestRemoveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuestSkipOptions SkipOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsDelayRestoreQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDuringRestoration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LevelLockCount;
    
public:
    AQuestManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AQuestObjectBase* QuestOrderByQuestID(FName InOriginalQuestID, FName InCustomQuestID);
    
    UFUNCTION(BlueprintCallable)
    AQuestObjectBase* QuestOrderByFullQuestID(FName InQuestID);
    
    UFUNCTION(BlueprintCallable)
    AQuestObjectBase* QuestOrderByClass(TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InCustomQuestID);
    
private:
    UFUNCTION(BlueprintCallable)
    void QuestDestroyedCallback(AActor* InDestroyActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQuestSectionChanged(const FQuestReceiveParamQuestSectionChanged& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQuestOrdered(const FQuestReceiveParamQuestOrdered& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQuestFinish(const FQuestReceiveParamQuestFinish& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQuestBegin(const FQuestReceiveParamQuestBegin& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQuestAllSectionCompleted(const FQuestReceiveParamQuestSectionCompleted& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQuestActiveListAllClear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreRestoreQuestBP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreQuestSectionChanged(const FQuestReceiveParamQuestSectionChanged& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostRestoreQuestBP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostQuestSectionChanged(const FQuestReceiveParamQuestSectionChanged& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAnyQuestUpdate(const TSoftClassPtr<AQuestObjectCore>& InQuestClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_SequencerFinished(const FSequencePlayFinishParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_QuestEndCondition(AQuestObjectBase* InEndQuest);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_FlagChanged(const FFlagChangedEventParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_EventEndCallback(const FEventResult& InEndResult);
    
public:
    UFUNCTION(BlueprintCallable)
    FName GetQuestSectionName(TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID);
    
    UFUNCTION(BlueprintCallable)
    void GetQuestListByCategory(int32 InOrderState, FQuestCategory InCategory, TArray<AQuestObjectBase*>& OutQuestList);
    
    UFUNCTION(BlueprintCallable)
    void GetQuestListAll(int32 InOrderState, TArray<AQuestObjectBase*>& OutQuestList);
    

    // Fix for true pure virtual functions not being implemented
};

