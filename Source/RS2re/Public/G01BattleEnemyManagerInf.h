#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "G01BattleData.h"
#include "G01BattleDropItemResult.h"
#include "G01BattleEnemyAppearTableRow.h"
#include "G01BattleEnemyCommandTableRow.h"
#include "G01BattleEnemyCommandThinkStruct.h"
#include "G01BattleEnemyEnhanceFindKey.h"
#include "G01BattleEnemyEnhanceTableRow.h"
#include "G01BattleEnemyFormationTableRow.h"
#include "G01BattleEnemyTableRow.h"
#include "G01CharacterID.h"
#include "G01BattleEnemyManagerInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleEnemyManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleEnemyManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_RobEnemyDropItem(AActor* InActor, int32 InDropSlotNo, bool& OutSuccess, FG01BattleDropItemResult& OutDropItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_ResetCommandThink(AActor* InActor, UPARAM(Ref) FG01BattleEnemyCommandThinkStruct& InThink);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_MakeCommandThink(AActor* InActor, const FG01BattleEnemyCommandTableRow& InCommandRow, FG01BattleEnemyCommandThinkStruct& OutThink);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_LotteryEnemyDropItem(TArray<FG01BattleDropItemResult>& OutDropItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_LotteryCommandTarget(AActor* InActor, int32 InActionCountID, FName InArtsID, AActor*& OutTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_LotteryCommand(AActor* InActor, int32 InActionCountID, FName& OutArtsID, AActor*& OutTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_GetOriginalIDList(TArray<FName>& OutOriginalIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_GetEnemyIDByCharacterID(FG01CharacterID InCharacterId, FName& OutEnemyID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_GetEnemyDropItemOpenFlag(FName InBattleCharaId, TArray<bool>& OutOpenFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_GetEnemyDefeatMap(TMap<FName, int32>& OutDefeatMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_GetEnemyConfirmMap(TMap<FName, int32>& OutConfirmMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_GetEnemyAffinityOpenFlag(FName InBattleCharaId, TArray<bool>& OutOpenFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_GetCommandPattern(FName InEnemyID, TArray<FG01BattleEnemyCommandTableRow>& OutPatternList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_GetCharacterIDByEnemyID(FName InEnemyID, FG01CharacterID& OutCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_FindBattleEnemyFormation(FName InRowName, bool& OutFound, FG01BattleEnemyFormationTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_FindBattleEnemyEnhance(const FG01BattleEnemyEnhanceFindKey& InFindKey, bool& OutFound, FName& OutRowName, FG01BattleEnemyEnhanceTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_FindBattleEnemy(FName InRowName, bool& OutFound, FG01BattleEnemyTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_DeleteCommandThink(AActor* InActor, UPARAM(Ref) FG01BattleEnemyCommandThinkStruct& InThink);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_DecideEnemyTeam(UPARAM(Ref) FG01BattleData& InBattleData, bool& OutLotFormation, bool& OutLotSubEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_ConvertOriginalID(FName InBattleCharaId, FName& OutOriginalID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_CollectEnemyAppearList(FName InLocationId, FRoomID InRoomId, bool InCurrentQuestSection, TArray<FG01BattleEnemyAppearTableRow>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_CalcTargetWeight(AActor* InTarget, int32& OutTargetWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemyManager_AcceptDropItemByEscape(AActor* InActor);
    
};

