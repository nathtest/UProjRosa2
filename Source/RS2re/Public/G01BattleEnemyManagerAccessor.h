#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
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
#include "G01BattleEnemyManagerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleEnemyManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01BattleEnemyManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RobEnemyDropItem(AActor* InActor, int32 InDropSlotNo, bool& OutSuccess, FG01BattleDropItemResult& OutDropItem);
    
    UFUNCTION(BlueprintCallable)
    void ResetCommandThink(AActor* InActor, UPARAM(Ref) FG01BattleEnemyCommandThinkStruct& InThink);
    
    UFUNCTION(BlueprintCallable)
    void MakeCommandThink(AActor* InActor, const FG01BattleEnemyCommandTableRow& InCommandRow, FG01BattleEnemyCommandThinkStruct& OutThink);
    
    UFUNCTION(BlueprintCallable)
    void LotteryEnemyDropItem(TArray<FG01BattleDropItemResult>& OutDropItemList);
    
    UFUNCTION(BlueprintCallable)
    void LotteryCommandTarget(AActor* InActor, int32 InActionCountID, FName InArtsID, AActor*& OutTarget);
    
    UFUNCTION(BlueprintCallable)
    void LotteryCommand(AActor* InActor, int32 InActionCountID, FName& OutArtsID, AActor*& OutTarget);
    
    UFUNCTION(BlueprintCallable)
    void GetOriginalIDList(TArray<FName>& OutOriginalIdList);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyIDByCharacterID(FG01CharacterID InCharacterId, FName& OutEnemyID);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyDropItemOpenFlag(FName InBattleCharaId, TArray<bool>& OutOpenFlag);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyDefeatMap(TMap<FName, int32>& OutDefeatMap);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyConfirmMap(TMap<FName, int32>& OutConfirmMap);
    
    UFUNCTION(BlueprintCallable)
    void GetEnemyAffinityOpenFlag(FName InBattleCharaId, TArray<bool>& OutOpenFlag);
    
    UFUNCTION(BlueprintCallable)
    void GetCommandPattern(FName InEnemyID, TArray<FG01BattleEnemyCommandTableRow>& OutPatternList);
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterIDByEnemyID(FName InEnemyID, FG01CharacterID& OutCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void FindBattleEnemyFormation(FName InRowName, bool& OutFound, FG01BattleEnemyFormationTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void FindBattleEnemyEnhance(const FG01BattleEnemyEnhanceFindKey& InFindKey, bool& OutFound, FName& OutRowName, FG01BattleEnemyEnhanceTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void FindBattleEnemy(FName InRowName, bool& OutFound, FG01BattleEnemyTableRow& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void DeleteCommandThink(AActor* InActor, UPARAM(Ref) FG01BattleEnemyCommandThinkStruct& InThink);
    
    UFUNCTION(BlueprintCallable)
    void DecideEnemyTeam(UPARAM(Ref) FG01BattleData& InBattleData, bool& OutLotFormation, bool& OutLotSubEnemy);
    
    UFUNCTION(BlueprintCallable)
    void ConvertOriginalID(FName InBattleCharaId, FName& OutOriginalID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CollectEnemyAppearList(FName InLocationId, FRoomID InRoomId, bool InCurrentQuestSection, TArray<FG01BattleEnemyAppearTableRow>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void CalcTargetWeight(AActor* InTarget, int32& OutTargetWeight);
    
};

