#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "G01BattleCharacterObserverInf.h"
#include "G01BattleCommandManagerObserverInf.h"
#include "G01BattleCommandUnit.h"
#include "G01BattleDirectorObserverInf.h"
#include "G01BattleEnemyCommandTableRow.h"
#include "G01BattleManagerObserverInf.h"
#include "G01BattleTaskBridgeComponentObserverInf.h"
#include "G01BattleTaskControllerObserverInf.h"
#include "G01BattleDirectorOfCharacterControlComponent.generated.h"

class AActor;
class AG01BattleDirectorController;
class UG01BattleDirectorOfCharacterControlComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleDirectorOfCharacterControlComponent : public UActorComponent, public IG01BattleCharacterObserverInf, public IG01BattleManagerObserverInf, public IG01BattleCommandManagerObserverInf, public IG01BattleDirectorObserverInf, public IG01BattleTaskControllerObserverInf, public IG01BattleTaskBridgeComponentObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PrepareLoadArtsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
public:
    UG01BattleDirectorOfCharacterControlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TakeRevive(float InHpRate);
    
    UFUNCTION(BlueprintCallable)
    void TakeDamage(int32 InDamage, bool InEnableReaction, bool InEnableDeadNotify);
    
    UFUNCTION(BlueprintCallable)
    void StartPrepareArtsResource();
    
    UFUNCTION(BlueprintCallable)
    void SetUpNextTurnSpeedForActionCountID(int32 InSpeed, bool InFast, bool InDelay, int32 InActionCountID);
    
    UFUNCTION(BlueprintCallable)
    void SetUpNextTurnSpeed(int32 InSpeed, bool InFast, bool InDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacter(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void RequestCommandPattern(FName InID, bool IsImmediate);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNextTurnCommandTask(FName InTaskId, AActor* InSource, AActor* InTarget, int32 InActionCountID, bool InIsCaution);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCommandTask(FName InTaskId, AActor* InSource, AActor* InTarget, int32 InActionCountID, bool InIsCaution);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterAvairable();
    
    UFUNCTION(BlueprintCallable)
    void GetNextTurnCommandList(bool& ReFound, TArray<FG01BattleCommandUnit>& ReCommandList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNextCommandPattern(FG01BattleEnemyCommandTableRow& OutPattern);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMaxHP(int32& OutMaxHP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHPRate(float& OutHpRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHP(int32& OutHP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AG01BattleDirectorController* GetDirector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentCommandPattern(FG01BattleEnemyCommandTableRow& OutPattern);
    
    UFUNCTION(BlueprintCallable)
    void GetCommandList(bool& ReFound, TArray<FG01BattleCommandUnit>& ReCommandList);
    
    UFUNCTION(BlueprintCallable)
    UG01BattleDirectorOfCharacterControlComponent* GetCharacterControl(FName InID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCharacter(AActor*& OutActor);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCommandPattern(FName InID);
    

    // Fix for true pure virtual functions not being implemented
};

