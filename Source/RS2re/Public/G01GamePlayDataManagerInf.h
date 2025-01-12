#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01FriendClass.h"
#include "EG01GameDifficultyType.h"
#include "EG01GamePlayModeType.h"
#include "EG01GameStoryClearFlags.h"
#include "EG01SaveLoadSevenHeroesType.h"
#include "G01CharacterID.h"
#include "G01EventPointIDStruct.h"
#include "G01ImperialForcePointIDStruct.h"
#include "G01IncomeEventIDStruct.h"
#include "G01SaveLoadDataStruct.h"
#include "G01SaveLoadPlayTimeStruct.h"
#include "G01GamePlayDataManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GamePlayDataManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01GamePlayDataManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_TryUpdateEnemyForcePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SubImperialCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SubCurrentEventPoint(const FG01EventPointIDStruct& InEventPointID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SubCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetUserInputName(const FText& InInputName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetUnderBossBreak(bool BossUnderBreak);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetShopStockData(const TMap<FName, int32>& InStockData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetSaveLoadData(FG01SaveLoadDataStruct InSaveLoadData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetPlayTime(const FG01SaveLoadPlayTimeStruct& InPlayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetLowestGameDifficultyType(EG01GameDifficultyType InDifficultyType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetLastEmperorCharacterIDByClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetLastEmperorCharacterID(FG01CharacterID InCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetImperialCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetGamePlayModeType(EG01GamePlayModeType InPlayMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetGameDifficultyType(EG01GameDifficultyType InDifficultyType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetBreakSevenHeroes(const TArray<EG01SaveLoadSevenHeroesType>& BreakSevenHeroesList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_SetBossBreak(bool BossBreak);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_ResetIncome();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_RemoveTechArtsNewIconData(FName InRemoveIconID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_RemoveStoryClearFlags(EG01GameStoryClearFlags InRemoveStory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01GamePlayDataManager_IsClearStory(EG01GameStoryClearFlags InStory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_GetUserInputName(FText& OutInputName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01GamePlayDataManager_GetUnderBossBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetTotalEventPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetTotalBattleWinCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetTotalBattleLoseCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetTotalBattleEscapeCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetTotalBattleCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> Inf_G01GamePlayDataManager_GetTechArtsNewIconData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01GamePlayDataManager_GetStopBattleWinCountOfTrial();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FName, int32> Inf_G01GamePlayDataManager_GetShopItemStockData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01SaveLoadDataStruct Inf_G01GamePlayDataManager_GetSaveLoadData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetQuestClearAreaCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetPreEventPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01SaveLoadPlayTimeStruct Inf_G01GamePlayDataManager_GetPlayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetPeriodBattleCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetNextLevelImperialPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetNextLevelEnemyForcePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetMinImperialLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetMinEnemyForceLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetMaxImperialPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetMaxImperialLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetMaxEnemyForcePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetMaxEnemyForceLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EG01GameDifficultyType Inf_G01GamePlayDataManager_GetLowestGameDifficultyType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01CharacterID Inf_G01GamePlayDataManager_GetLastEmperorCharacterID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetInitialImperialPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FG01IncomeEventIDStruct> Inf_G01GamePlayDataManager_GetIncomeEventIDList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_G01GamePlayDataManager_GetIncomeCoefficient();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetIncome();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetImperialPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetImperialLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetImperialIncome();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetImperialCrown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EG01GamePlayModeType Inf_G01GamePlayDataManager_GetGamePlayModeType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EG01GameDifficultyType Inf_G01GamePlayDataManager_GetGameDifficultyType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetGameClearCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetEnemyForcePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetEnemyForceLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetCurrentLevelImperialPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetCurrentLevelEnemyForcePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetCurrentEventPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetCrown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetClearAreaCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01GamePlayDataManager_GetBreakSevenHeroesNum();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<EG01SaveLoadSevenHeroesType> Inf_G01GamePlayDataManager_GetBreakSevenHeroesList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01GamePlayDataManager_GetBossBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_Debug_SetImperialPoint(int32 InPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_Debug_ResetTotalEventPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_Debug_ResetEventPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_CheckCanGetIncomeByBattleWin(bool& OutFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_CheckCanGetIncomeByBattleLose(bool& OutFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_CheckCanGetIncomeByBattleEscape(bool& OutFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_ChangeIncomeEventFlag(FG01IncomeEventIDStruct InIncomeEventID, bool InIsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_CalcPlayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_AddTechArtsNewIconData(FName InAddIconID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_AddStoryClearFlags(EG01GameStoryClearFlags InAddStory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_AddIncome(FG01IncomeEventIDStruct InIncomeEventID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_AddImperialForcePoint(FG01ImperialForcePointIDStruct InPointID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_AddImperialCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_AddGameClearCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_AddCurrentEventPoint(const FG01EventPointIDStruct& InEventPointID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GamePlayDataManager_AddCrown(int32 InNum);
    
};

