#pragma once
#include "CoreMinimal.h"
#include "EAIState.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAIState -FallbackName=EAIState
#include "LevelMoveObserverInf.h"  //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelMoveObserverInf -FallbackName=LevelMoveObserverInf
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01EnemyDefeatNotifyParam.h"
#include "G01FieldEnemyGeneratorManagerInterface.h"
#include "G01FieldGeneratorBaseManager.h"
#include "OnEnemyDefeatDelegateDelegate.h"
#include "G01FieldEnemyGeneratorManager.generated.h"

class AActor;
class AG01CrowdActionDirectorBase;
class AG01FieldEnemyBase;
class AG01FieldEnemyGeneratorBase;
class UDataTable;
class UG01RoomManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API AG01FieldEnemyGeneratorManager : public AG01FieldGeneratorBaseManager, public IG01FieldEnemyGeneratorManagerInterface, public ILevelMoveObserverInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableEnemyEncount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01FieldEnemyBase* PlayerFieldAttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableTickAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMimicBattle;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyDefeatDelegate MOnEnemyDefeatDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AG01FieldEnemyBase* MEncountEnemyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MEnemySizeDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MRespawnDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MCrowdEncountTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MSightDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MHearingDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AG01FieldEnemyGeneratorBase*> UpdateFieldEnemyGeneratorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AG01CrowdActionDirectorBase*> UpdateCrowdActionDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AG01FieldEnemyBase*> FollowMoveEnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AG01FieldEnemyGeneratorBase*> CrowdEncountList;
    
public:
    AG01FieldEnemyGeneratorManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleEnableEnemyEncount();
    
    UFUNCTION(BlueprintCallable)
    void StopSenseEnemy(TArray<FRoomID> InRoomIDList);
    
    UFUNCTION(BlueprintCallable)
    void SetReturnPositionEnemy();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerFieldAttackTarget(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void SetEncountEnemyActor(AG01FieldEnemyBase* InEnemyActor);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTick(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAIStateAllEnemy(EAIState InAiState);
    
    UFUNCTION(BlueprintCallable)
    void ResetFollowMoveEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingTypeSynopsis();
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldEnemyBase*> GetEnemyListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldEnemyBase*> GetEnemyList();
    
    UFUNCTION(BlueprintCallable)
    void EnableTickEnemyByRoomID(UG01RoomManagerAccessor* InRoomManagerAccessor, bool InIsDisp);
    
    UFUNCTION(BlueprintCallable)
    void EnableTickAllEnemyGenerator();
    
    UFUNCTION(BlueprintCallable)
    void EnableTickAllCrowdActionDirector();
    
    UFUNCTION(BlueprintCallable)
    void EnableEnemyEncount();
    
    UFUNCTION(BlueprintCallable)
    void DisableTickAllEnemy(bool InIsHide);
    
    UFUNCTION(BlueprintCallable)
    void DisableTickAllCrowdActionDirector();
    
    UFUNCTION(BlueprintCallable)
    void DisableEnemyEncount();
    
    UFUNCTION(BlueprintCallable)
    void DisableEnemyEncounCommand();
    
    UFUNCTION(BlueprintCallable)
    void DeleteEncountEnemyActor();
    
    UFUNCTION(BlueprintCallable)
    void DeleteCrowdEncountList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEnableEnemyEncount() const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastEnemyDefeat(const FG01EnemyDefeatNotifyParam& InParam);
    

    // Fix for true pure virtual functions not being implemented
};

