#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01BattleTaskInf.h"
#include "TaskEndDispatcherDelegate.h"
#include "G01BattleTask.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleTask : public UObject, public IG01BattleTaskInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MTaskOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MTaskId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MSourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MTargetActorList;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaskEndDispatcher ED_TaskEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SourceActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnablePoisonEndCheckTask;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> OwnerObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsCompleted;
    
public:
    UG01BattleTask();

    UFUNCTION(BlueprintCallable)
    void SetTaskOrder(int32 InTaskOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetTaskId(FName InTaskId);
    
    UFUNCTION(BlueprintCallable)
    void SetPoisonEndCheckTask(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMainTarget(AActor* InMainTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetMainSource(AActor* InMainSource);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalTarget(UPARAM(Ref) TArray<AActor*>& InAdditionalTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalSource(const TArray<AActor*>& InAdditionalSource);
    
    UFUNCTION(BlueprintCallable)
    void OverrideAdditionalSource(const TArray<AActor*>& InAdditionalSource);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPoisonEndCheckTask(bool& OutIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void Execute();
    
    UFUNCTION(BlueprintCallable)
    void Complete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCompleted() const;
    

    // Fix for true pure virtual functions not being implemented
};

