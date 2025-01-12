#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EAIState.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EAIState -FallbackName=EAIState
#include "LevelObjectID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelObjectID -FallbackName=LevelObjectID
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01CharacterID.h"
#include "G01EnemyCharaInfoTableRow.h"
#include "G01FieldEnemyGeneratorManagerInterface.generated.h"

class AActor;
class AG01FieldEnemyBase;
class AGimmickObjectBase;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01FieldEnemyGeneratorManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01FieldEnemyGeneratorManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_ToggleEnableEnemyEncount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_SetReturnPositionEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_SetInterlockGimmick(const FString& InLevelObjectFullID, AGimmickObjectBase* InInterlockGimmick);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_SetEncountEnemyActor(AG01FieldEnemyBase* InEnemyActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_SetEnableTickAllEnemy(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_SetDebugEnableEncount(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_SetAIStateByFullID(const FString& InLevelObjectFullID, EAIState InCurrentAIState, EAIState InChangeAIState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_SetAIStateAllEnemy(EAIState InAiState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_SetAIState(const FLevelObjectID& InLevelObjectID, EAIState InCurrentAIState, EAIState InChangeAIState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_RemoveFollowMoveEnemy(AG01FieldEnemyBase* InEnemyActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_NotifyDefeatEnemy(const AG01FieldEnemyBase* InDefeatEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_MimicBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_LoseSightPlayer(USceneComponent* InPositionComponent, AActor* InEnemyActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AG01FieldEnemyBase*> Inf_G01FieldEnemyGeneratorManagerInterface_GetEnemyListByRoomID(FRoomID InRoomId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AG01FieldEnemyBase*> Inf_G01FieldEnemyGeneratorManagerInterface_GetEnemyList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01FieldEnemyGeneratorManagerInterface_GetEnableTickCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_FindEnemyCharaInfoByClass(const TSoftClassPtr<AG01FieldEnemyBase>& InEnemyClass, bool& ReIsFound, FG01EnemyCharaInfoTableRow& ReResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_FindEnemyCharaInfo(const FG01CharacterID& InCharaID, bool& ReIsFound, FG01EnemyCharaInfoTableRow& ReResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_EnableTickAllEnemyGenerator();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_EnableEnemyEncount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_DiscoverPlayer(USceneComponent* InPositionComponent, AActor* InEnemyActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_DisableTickAllEnemyGenerator();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_DisableEnemyEncount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_DeleteEncountEnemyActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_CheckEnableEnemyEncount(bool& OutIsEnableEnemyEncount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_CheckDebugEnableEncount(bool& OutEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01FieldEnemyGeneratorManagerInterface_AddFollowMoveEnemy(AG01FieldEnemyBase* InEnemyActor);
    
};

