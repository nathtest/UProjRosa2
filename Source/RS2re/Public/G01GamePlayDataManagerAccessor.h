#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "ManagerAccessor.h"
#include "EG01FriendClass.h"
#include "EG01GameDifficultyType.h"
#include "EG01GamePlayModeType.h"
#include "EG01GameStoryClearFlags.h"
#include "EG01SaveLoadSevenHeroesType.h"
#include "G01CharacterID.h"
#include "G01ImperialForcePointIDStruct.h"
#include "G01IncomeEventIDStruct.h"
#include "G01SaveLoadDataStruct.h"
#include "G01SaveLoadPlayTimeStruct.h"
#include "G01GamePlayDataManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01GamePlayDataManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01GamePlayDataManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryUpdateEnemyForcePoint();
    
    UFUNCTION(BlueprintCallable)
    void SubImperialCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void SubCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void SetUserInputName(const FText& InInputName);
    
    UFUNCTION(BlueprintCallable)
    void SetUnderBossBreak(bool BossUnderBreak);
    
    UFUNCTION(BlueprintCallable)
    void SetShopStockData(TMap<FName, int32> InStockData);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveLoadData(const FG01SaveLoadDataStruct& SaveLoadDataStruct);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayTime(const FG01SaveLoadPlayTimeStruct& InPlayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLowestGameDifficultyType(EG01GameDifficultyType InDifficultyType);
    
    UFUNCTION(BlueprintCallable)
    void SetLastEmperorCharacterIDByClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable)
    void SetLastEmperorCharacterID(FG01CharacterID InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void SetImperialCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePlayModeType(EG01GamePlayModeType InPlayMode);
    
    UFUNCTION(BlueprintCallable)
    void SetGameDifficultyType(EG01GameDifficultyType InDifficultyType);
    
    UFUNCTION(BlueprintCallable)
    void SetCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakSevenHeroesList(const TArray<EG01SaveLoadSevenHeroesType>& BreakSevenHeroesList);
    
    UFUNCTION(BlueprintCallable)
    void SetBossBreak(bool BossBreak);
    
    UFUNCTION(BlueprintCallable)
    void ResetIncome();
    
    UFUNCTION(BlueprintCallable)
    void RemoveStoryClearFlags(EG01GameStoryClearFlags InRemoveStory);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMenuTechArtsNewIconData(FName InRemoveIconID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClearStory(EG01GameStoryClearFlags InStory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetUserInputName() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetUnderBossBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalBattleWinCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalBattleLoseCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalBattleEscapeCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalBattleCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStopBattleWinCountOfTrial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, int32> GetShopItemStockData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SaveLoadDataStruct GetSaveLoadStruct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SaveLoadPlayTimeStruct GetPlayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPeriodBattleCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextLevelImperialPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextLevelEnemyForcePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinImperialLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinEnemyForceLevel() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetMenuTechArtsNewIconDataList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxImperialPiont() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxImperialLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxEnemyForcePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxEnemyForceLevel() const;
    
    UFUNCTION(BlueprintCallable)
    EG01GameDifficultyType GetLowestGameDifficultyType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01CharacterID GetLastEmperorCharacterID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitialImperialPoint() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FG01IncomeEventIDStruct> GetIncomeEventIDList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIncomeCoefficient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetImperialPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetImperialLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetImperialIncome() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetImperialCrown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameQuestClearCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EG01GamePlayModeType GetGamePlayModeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EG01GameDifficultyType GetGameDifficultyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameClearCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyForcePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyForceLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevelImperialPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevelEnemyForcePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCrown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearAreaCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBreakSevenHeroesNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EG01SaveLoadSevenHeroesType> GetBreakSevenHeroesList() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetBossBreak();
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetImperialPoint(int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    void ChangeIncomeEventFlag(FG01IncomeEventIDStruct InEventID, const bool InIsActive);
    
    UFUNCTION(BlueprintCallable)
    void AddStoryClearFlags(EG01GameStoryClearFlags InAddStory);
    
    UFUNCTION(BlueprintCallable)
    void AddMenuTechArtsNewIconData(FName InAddIconID);
    
    UFUNCTION(BlueprintCallable)
    void AddIncome(FG01IncomeEventIDStruct InIncomeEventID);
    
    UFUNCTION(BlueprintCallable)
    void AddImperialForcePoint(FG01ImperialForcePointIDStruct InPointID);
    
    UFUNCTION(BlueprintCallable)
    void AddImperialCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void AddGameClearCount();
    
    UFUNCTION(BlueprintCallable)
    void AddCrown(int32 InNum);
    
};

