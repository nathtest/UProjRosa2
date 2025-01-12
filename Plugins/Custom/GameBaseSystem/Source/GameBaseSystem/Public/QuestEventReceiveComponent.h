#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnReceiveQuestBeginDelegate.h"
#include "OnReceiveQuestFinishDelegate.h"
#include "OnReceiveQuestOrderedDelegate.h"
#include "OnReceiveQuestSectionChangeBeginDelegate.h"
#include "OnReceiveQuestSectionChangeEndDelegate.h"
#include "OnReceiveQuestSectionCompletedDelegate.h"
#include "QuestReceiveReserveParamBegin.h"
#include "QuestReceiveReserveParamFinish.h"
#include "QuestReceiveReserveParamInSectionRange.h"
#include "QuestReceiveReserveParamOrdered.h"
#include "QuestReceiveReserveParamQuestSectionCompleted.h"
#include "QuestReceiveReserveParamSectionChanged.h"
#include "ReceiveQuestParam.h"
#include "QuestEventReceiveComponent.generated.h"

class AQuestManager;
class AQuestObjectCore;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API UQuestEventReceiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceiveQuestOrdered MOnQuestOrdered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceiveQuestBegin MOnQuestBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceiveQuestFinish MOnQuestFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceiveQuestSectionCompleted MOnQuestSectionCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceiveQuestSectionChangeBegin MOnQuestSectionChangeBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceiveQuestSectionChangeEnd MOnQuestSectionChangeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestReceiveReserveParamOrdered> MOrderedReserveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestReceiveReserveParamBegin> MBeginReserveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestReceiveReserveParamFinish> MFinishReserveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestReceiveReserveParamQuestSectionCompleted> MSectionCompletedReserveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestReceiveReserveParamSectionChanged> MSectionChangedReserveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestReceiveReserveParamInSectionRange> MInSectionRangeReserveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AQuestObjectCore>, FReceiveQuestParam> MTargetQuestClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestManager* MQuestManager;
    
public:
    UQuestEventReceiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveEventReceiveQuestSectionCompleted(const FQuestReceiveReserveParamQuestSectionCompleted& InSectionCompletedParam);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEventReceiveQuestSectionChanged(const FQuestReceiveReserveParamSectionChanged& InSectionChangedParam);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEventReceiveQuestOrdered(const FQuestReceiveReserveParamOrdered& InOrderedParam);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEventReceiveQuestInSectionRange(const FQuestReceiveReserveParamInSectionRange& InSectionRangeParam);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEventReceiveQuestFinish(const FQuestReceiveReserveParamFinish& InFinishParam);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEventReceiveQuestBegin(const FQuestReceiveReserveParamBegin& InBeginParam);
    
    UFUNCTION(BlueprintCallable)
    void AddEventReceiveQuestSectionCompleted(const FQuestReceiveReserveParamQuestSectionCompleted& InSectionCompletedParam);
    
    UFUNCTION(BlueprintCallable)
    void AddEventReceiveQuestSectionChanged(const FQuestReceiveReserveParamSectionChanged& InSectionChangedParam);
    
    UFUNCTION(BlueprintCallable)
    void AddEventReceiveQuestOrdered(const FQuestReceiveReserveParamOrdered& InOrderedParam);
    
    UFUNCTION(BlueprintCallable)
    void AddEventReceiveQuestInSectionRange(const FQuestReceiveReserveParamInSectionRange& InSectionRangeParam);
    
    UFUNCTION(BlueprintCallable)
    void AddEventReceiveQuestFinish(const FQuestReceiveReserveParamFinish& InFinishParam);
    
    UFUNCTION(BlueprintCallable)
    void AddEventReceiveQuestBegin(const FQuestReceiveReserveParamBegin& InBeginParam);
    
};

