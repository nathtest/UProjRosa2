#pragma once
#include "CoreMinimal.h"
#include "ActorVisibilityControlInf.h"
#include "AppActor.h"
#include "FlagChangedEventParam.h"
#include "GenerateConditions.h"
#include "GeneratePointParams.h"
#include "GeneratorBaseInterface.h"
#include "GeneratorConditionCache.h"
#include "LevelObjectID.h"
#include "OnCreatedGeneratorTargetActorDelegate.h"
#include "OnDestroyGeneratorTargetActorDelegate.h"
#include "QuestReceiveParamQuestSectionChanged.h"
#include "LoadControlActorComponent.h"
#include "GeneratorBase.generated.h"

class AActor;
class AGeneratePoint;
class UFlagEventReceiveComponent;
class ULoadControlActorComponent;
class UObject;
class UQuestEventReceiveComponent;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGeneratorBase : public AAppActor, public IGeneratorBaseInterface, public IActorVisibilityControlInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestEventReceiveComponent* MQuestEventReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlagEventReceiveComponent* MFlagEventReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadControlActorComponent* MLoadControlComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreatedGeneratorTargetActor MOnCreatedTargetActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDestroyGeneratorTargetActor MOnDestroyTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MCreateObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> MGenerateLockObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGeneratePoint> MGeneratePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGeneratePoint* MDefaultGeneratePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MCreatedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MHiddenInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsLockedTransformUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelObjectID MLevelObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenerateConditions MGenerateConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneratePointParams MGeneratePointParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGeneratorConditionCache MConditionCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPendingDestory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MMovingReservation;
    
public:
    AGeneratorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGenerateObjectVisibility(bool InIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void RequestObject();
    
    UFUNCTION(BlueprintCallable)
    void RequestDestroyObject();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTransformBP(AActor* InCreateActor, const AGeneratePoint* InGeneratePoint);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestSectionChangeEnd(FQuestReceiveParamQuestSectionChanged InSectionChangedParam);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestSectionChangeBegin(FQuestReceiveParamQuestSectionChanged InSectionChangedParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreGameStartBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreDestoryObjectBP(AActor* InCreateActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostDestroyObjectBP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFlagChanged(const FFlagChangedEventParam& InParam);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreatedObjectBP(AActor* InCreateActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeVisibilityBP(AActor* InCreateActor, bool InIsVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreateActorLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftClassPtr<AActor> GetCreateObjectSoftPtr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCreatedActor() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckGenerateCondition();
    

    // Fix for true pure virtual functions not being implemented
};

