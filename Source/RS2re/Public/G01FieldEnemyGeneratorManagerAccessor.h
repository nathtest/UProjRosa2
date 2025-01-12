#pragma once
#include "CoreMinimal.h"
#include "EAIState.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAIState -FallbackName=EAIState
#include "LevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelObjectID -FallbackName=LevelObjectID
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01CharacterID.h"
#include "G01EnemyCharaInfoTableRow.h"
#include "G01FieldEnemyGeneratorManagerAccessor.generated.h"

class AActor;
class AG01FieldEnemyBase;
class AGimmickObjectBase;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01FieldEnemyGeneratorManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01FieldEnemyGeneratorManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleEnableEnemyEncount();
    
    UFUNCTION(BlueprintCallable)
    void SetReturnPositionEnemy();
    
    UFUNCTION(BlueprintCallable)
    void SetInterlockGimmick(const FString& InLevelObjectFullID, AGimmickObjectBase* InInterlockGimmick);
    
    UFUNCTION(BlueprintCallable)
    void SetEncountEnemyActor(AG01FieldEnemyBase* InEnemyActor);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTickAllEnemy(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugEnableEncount(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAIStateByFullID(const FString& InLevelObjectFullID, EAIState InCurrentAIState, EAIState InChangeAIState);
    
    UFUNCTION(BlueprintCallable)
    void SetAIStateAllEnemy(EAIState InAiState);
    
    UFUNCTION(BlueprintCallable)
    void SetAIState(const FLevelObjectID& InLevelObjectID, EAIState InCurrentAIState, EAIState InChangeAIState);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFollowMoveEnemy(AG01FieldEnemyBase* InEnemyActor);
    
    UFUNCTION(BlueprintCallable)
    void NotifyDefeatEnemy(const AG01FieldEnemyBase* InDefeatEnemy);
    
    UFUNCTION(BlueprintCallable)
    void MimicBattle();
    
    UFUNCTION(BlueprintCallable)
    void LoseSightPlayer(USceneComponent* InPositionComponent, AActor* InEnemyActor);
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldEnemyBase*> GetEnemyListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable)
    TArray<AG01FieldEnemyBase*> GetEnemyList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnableTickCount() const;
    
    UFUNCTION(BlueprintCallable)
    void FindEnemyCharaInfoByClass(const TSoftClassPtr<AG01FieldEnemyBase>& InEnemyClass, bool& ReIsFound, FG01EnemyCharaInfoTableRow& ReResult);
    
    UFUNCTION(BlueprintCallable)
    void FindEnemyCharaInfo(const FG01CharacterID& InCharaID, bool& ReIsFound, FG01EnemyCharaInfoTableRow& ReResult);
    
    UFUNCTION(BlueprintCallable)
    void EnableTickAllEnemyGenerator();
    
    UFUNCTION(BlueprintCallable)
    void EnableEnemyEncount();
    
    UFUNCTION(BlueprintCallable)
    void DiscoverPlayer(USceneComponent* InPositionComponent, AActor* InEnemyActor);
    
    UFUNCTION(BlueprintCallable)
    void DisableTickAllEnemyGenerator();
    
    UFUNCTION(BlueprintCallable)
    void DisableEnemyEncount();
    
    UFUNCTION(BlueprintCallable)
    void DeleteEncountEnemyActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckEnableEnemyEncount(bool& OutIsEnableEnemyEncount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckDebugEnableEnemyEncount(bool& OutIsEnable) const;
    
    UFUNCTION(BlueprintCallable)
    void AddFollowMoveEnemy(AG01FieldEnemyBase* InEnemyActor);
    
};

