#pragma once
#include "CoreMinimal.h"
#include "GamePlayDataSubsystem.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GamePlayDataSubsystem -FallbackName=GamePlayDataSubsystem
#include "SaveDataRequestInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataRequestInfo -FallbackName=SaveDataRequestInfo
#include "EG01GameDifficultyType.h"
#include "EG01SaveLoadSevenHeroesType.h"
#include "G01BattleBossRecordDataStruct.h"
#include "G01GamePlayDataSaveInfo.h"
#include "G01IncomeEventIDStruct.h"
#include "G01SaveLoadDataCache.h"
#include "G01SaveLoadPlayTimeStruct.h"
#include "G01GamePlayDataSubsystem.generated.h"

class UG01GamePlayDataSubsystemHelper;

UCLASS(Blueprintable)
class RS2RE_API UG01GamePlayDataSubsystem : public UGamePlayDataSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01GamePlayDataSubsystemHelper* MyHelperObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01GamePlayDataSaveInfo Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> ShopItemStockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> MainMenuTechArtNewList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01SaveLoadDataCache> CachedSaveLoadData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WorldMapVisibleIconIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FinishedDevelopItemIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> LatestItemDistributionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FText> QuestDipsPrevTextList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleBossRecordDataStruct> BattleBossRecordTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastestBossTurnCount;
    
    UG01GamePlayDataSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetUnderBossBreak(bool BossUnderBreak);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalBattleWinCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalBattleLoseCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalBattleEscapeCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalBattleCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetShopStockData(TMap<FName, int32> InStockData);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveLoadDataCache(const TArray<FG01SaveLoadDataCache>& InCacheData);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayTime(FG01SaveLoadPlayTimeStruct PlayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPeriodBattleCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetMainMenuTechArtNewList(TArray<FName> TechArtsList);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTrialClear(bool InClear);
    
    UFUNCTION(BlueprintCallable)
    void SetIncomeCoefficient(float InCoefficient);
    
    UFUNCTION(BlueprintCallable)
    void SetIncome(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void SetImperialPoint(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void SetImperialLevel(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void SetImperialIncome(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void SetImperialCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void SetGameDifficultyType(EG01GameDifficultyType InDifficultyType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyForcePoint(int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyForceLevel(int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetCrown(int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    void SetClearAreaCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetBreakSevenHeroes(TArray<EG01SaveLoadSevenHeroesType> SevenHeroesList);
    
    UFUNCTION(BlueprintCallable)
    void SetBossBreak(bool BossBreak);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSaveData(const FSaveDataRequestInfo& InRequest);
    
    UFUNCTION(BlueprintCallable)
    bool GetUnderBossBreak() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalBattleWinCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalBattleLoseCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalBattleEscapeCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalBattleCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStopBattleWinCountOfTrial() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, int32> GetShopItemStockData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FG01SaveLoadDataCache> GetSaveLoadDataCache() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuestClearAreaCount() const;
    
    UFUNCTION(BlueprintCallable)
    FG01SaveLoadPlayTimeStruct GetPlayTime() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPeriodBattleCount() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetMainMenuTechArtNewList() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetInitialImperialPoint() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FG01IncomeEventIDStruct> GetIncomeEventIDList();
    
    UFUNCTION(BlueprintCallable)
    float GetIncomeCoefficient() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetIncome() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetImperialPoint() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetImperialLevel() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetImperialIncome() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetImperialCrown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHelperObject(UG01GamePlayDataSubsystemHelper*& OutHelper);
    
    UFUNCTION(BlueprintCallable)
    EG01GameDifficultyType GetGameDifficultyType() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyForcePoint() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyForceLevel() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCrown() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetClearAreaCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetBreakSevenHeroesNum() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<EG01SaveLoadSevenHeroesType> GetBreakSevenHeroesList() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetBossBreak() const;
    
    UFUNCTION(BlueprintCallable)
    void AddQuestClearCount();
    
    UFUNCTION(BlueprintCallable)
    void AddIncomeEventID(FG01IncomeEventIDStruct InEventID);
    
};

