#pragma once
#include "CoreMinimal.h"
#include "VFXLoadInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=VFXLoadInfo -FallbackName=VFXLoadInfo
#include "EG01BattleTaskSlot.h"
#include "G01BattleArtsEffectSetting.h"
#include "G01BattleSystemController.h"
#include "G01BattleTaskControllerInf.h"
#include "G01BattleTaskController.generated.h"

class AActor;
class UDataTable;
class UG01BattleArtsManagerAccessor;
class UG01BattleCommandManagerAccessor;
class UG01BattleEnemyManagerAccessor;
class UG01BattleManagerAccessor;
class UG01BattleTask;

UCLASS(Blueprintable)
class RS2RE_API AG01BattleTaskController : public AG01BattleSystemController, public IG01BattleTaskControllerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleManagerAccessor* MBattleManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleCommandManagerAccessor* MBattleCommandManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleEnemyManagerAccessor* MBattleEnemyManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01BattleArtsManagerAccessor* MBattleArtsManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BattleTaskTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> BattleTaskClassCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01BattleTask*> MTaskList_Playback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01BattleTask*> MTaskList_Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleTask* MCurrentTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MLatestCommandSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MLatestPlaybackSource;
    
public:
    AG01BattleTaskController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TaskIndexOf(EG01BattleTaskSlot InSlot, AActor* InSourceActor, bool& ReFound, int32& ReIndex);
    
    UFUNCTION(BlueprintCallable)
    void TaskEnd();
    
    UFUNCTION(BlueprintCallable)
    void LoadRequestPlaybackResource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsLoadedPlaybackResource(bool& ReIsLoaded);
    
    UFUNCTION(BlueprintCallable)
    void IsActiveCurrentTask(bool& ReIsActive);
    
    UFUNCTION(BlueprintCallable)
    void InsertTask(UG01BattleTask* InTask, EG01BattleTaskSlot InSlot, int32 InIndex, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasPlaybackTask(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasLinkPlayBackTask(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasCommandTask(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasAnyTask(EG01BattleTaskSlot InSlot, bool& Re);
    
    UFUNCTION(BlueprintCallable)
    void GetStackTaskNum(EG01BattleTaskSlot InSlot, int32& ReNum);
    
    UFUNCTION(BlueprintCallable)
    void GetNextTask(EG01BattleTaskSlot InSlot, UG01BattleTask*& ReTask);
    
    UFUNCTION(BlueprintCallable)
    void GetLatestTaskSource(EG01BattleTaskSlot InSlot, TArray<AActor*>& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentSlot(EG01BattleTaskSlot& Re);
    
    UFUNCTION(BlueprintCallable)
    void FindTaskEffectSetting(UG01BattleTask* InTask, bool& ReFound, FG01BattleArtsEffectSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable)
    void FindCurrentTaskEffectSetting(bool& ReFound, FG01BattleArtsEffectSetting& ReSetting);
    
    UFUNCTION(BlueprintCallable)
    void ExecutionNextTask(EG01BattleTaskSlot InSlot, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void CreateTaskObject(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& OutTask);
    
    UFUNCTION(BlueprintCallable)
    void CreateLoadTaskObject(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& OutTask);
    
    UFUNCTION(BlueprintCallable)
    void CreateLoadEffectTaskObject(AActor* InSourceActor, const FVFXLoadInfo& InInfo, UG01BattleTask*& OutTask);
    
    UFUNCTION(BlueprintCallable)
    void CreateArtsTaskObject(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& OutTask);
    
    UFUNCTION(BlueprintCallable)
    void ClearTaskList(EG01BattleTaskSlot InSlot);
    
    UFUNCTION(BlueprintCallable)
    void ClearLatestTaskSource(EG01BattleTaskSlot InSlot);
    
    UFUNCTION(BlueprintCallable)
    void CheckRelateionCurrentTask(AActor* InCharacter, bool& ReIsRelated, bool& ReIsSource, bool& ReIsTarget, int32& ReTargetIndex);
    
    UFUNCTION(BlueprintCallable)
    void CancelTaskOnSourceCharacter(AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable)
    void CancelTaskBySource(EG01BattleTaskSlot InSlot, const TArray<AActor*>& InSourceList);
    
    UFUNCTION(BlueprintCallable)
    void CancelTask(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void BindTask(bool InIsBind, UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void AddTask(UG01BattleTask* InTask, EG01BattleTaskSlot InSlot, bool& ReSuccess);
    

    // Fix for true pure virtual functions not being implemented
};

