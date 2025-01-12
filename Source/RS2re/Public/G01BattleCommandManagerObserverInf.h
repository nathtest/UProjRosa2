#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleCommandUnit.h"
#include "G01BattleLinkCommandStruct.h"
#include "G01BattleCommandManagerObserverInf.generated.h"

class AActor;
class UG01BattleTask;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleCommandManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleCommandManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnStartedCommandSelect(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnStartedCommand(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnRevivedInNextCommand(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnRequestedNonActiveForNextTurn(const FG01BattleCommandUnit& InCommand, bool InNonActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnRequestedNonActive(const FG01BattleCommandUnit& InCommand, bool InNonActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnPrepareCommandExec(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnLinkCommandRegistered(const FG01BattleLinkCommandStruct& InCommand, AActor* InTargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnHiddenInNextCommand(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnFinishedCommand(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnDeniedCommand(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnDecideCommand(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnCommandUnregistered(const FG01BattleCommandUnit& InCommand, int32 InOldIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnCommandRegisteredNextTurn(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnCommandRegistered(const FG01BattleCommandUnit& InCommand, int32 InOldIndex, int32 InNewIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnCommandInsertNextTurn(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnCommandInsert(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnChangedNextCommandList(const TArray<int32>& InChangedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnChangedCommandList(const TArray<int32>& InChangedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCommandManager_OnCancelledCommand(const FG01BattleCommandUnit& InCommand);
    
};

