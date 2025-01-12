#pragma once
#include "CoreMinimal.h"
#include "RoomID.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomID -FallbackName=RoomID
#include "SaveGameDataBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveGameDataBase -FallbackName=SaveGameDataBase
#include "EG01BattleArtsType.h"
#include "G01BattleBossRecordDataStruct.h"
#include "G01BattleSaveInfo.h"
#include "G01CharacterSaveInfo.h"
#include "G01FieldSaveInfo.h"
#include "G01GamePlayDataSaveInfo.h"
#include "G01HistorySaveInfo.h"
#include "G01ImperialPowerSaveDataStruct.h"
#include "G01InventoryItemAutoReplenishStruct.h"
#include "G01InventoryItemLogStruct.h"
#include "G01InventoryItemStruct.h"
#include "G01InventorySubsystemExtractionStruct.h"
#include "G01LevelMoveSaveInfo.h"
#include "G01MapMaskParamInfo.h"
#include "G01MenuSortSaveDataStruct.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01PartySaveInfo.h"
#include "G01PeriodSaveInfo.h"
#include "G01QuestSaveInfo.h"
#include "G01SaveDataRomInfo.h"
#include "G01SaveLoadDataStruct.h"
#include "G01TutorialSaveInfo.h"
#include "G01SaveGameData.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01SaveGameData : public USaveGameDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SaveDataRomInfo> SaveRevisionCache;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01QuestSaveInfo QuestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PartySaveInfo PartySaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01LevelMoveSaveInfo LevelMoveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01InventorySubsystemExtractionStruct InventoryExtractionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemStruct> MItemInventoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemStruct> MMementoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemAutoReplenishStruct> AutoReplenishList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01InventoryItemLogStruct> ItemLogList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleSaveInfo BattleSaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01GamePlayDataSaveInfo GamePlayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01HistorySaveInfo History;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01PeriodSaveInfo PeriodSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MapMaskParamInfo MapMaskListInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01FieldSaveInfo FieldSaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> LearnFathomList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> LearnSkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> LearnSpellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> RegisterArtsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01PartyLearnArtsStruct> LearnArtsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForceArtsRegist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AchievementSkillList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AchievementSpellList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WorldMapVisibleIconIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FinishedDevelopItemIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> LatestItemDistributionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TutorialSaveInfo TutorialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MenuSortSaveDataStruct MenuSortIndexData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MenuSortSaveDataStruct ShopSortIndexData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01BattleArtsType, int32> PreviewMasterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ImperialPowerSaveDataStruct ImperialPowerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomID> CompletedMaskRoomList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01CharacterSaveInfo CharacterSaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> ShopItemStockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MainMenuTechArtNewList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01BattleBossRecordDataStruct> BattleBossRecordTable;
    
    UG01SaveGameData();

    UFUNCTION(BlueprintCallable)
    void SetShopSortIndexData(const FG01MenuSortSaveDataStruct InShopSortData);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewMasterLevelData(const TMap<EG01BattleArtsType, int32> InPreviewMasterLevelData);
    
    UFUNCTION(BlueprintCallable)
    void SetPeriodSaveData(const FG01PeriodSaveInfo& InData);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuSortIndexData(const FG01MenuSortSaveDataStruct InMenuSortData);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelMoveData(const FG01LevelMoveSaveInfo& InData);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryExtractionInfo(const FG01InventorySubsystemExtractionStruct& InData);
    
    UFUNCTION(BlueprintCallable)
    void SetImperialPowerData(const FG01ImperialPowerSaveDataStruct InShopSortData);
    
    UFUNCTION(BlueprintCallable)
    void SetHistory(const FG01HistorySaveInfo& InHistory);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldSaveInfo(const FG01FieldSaveInfo& InSaveInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSaveInfo(const FG01CharacterSaveInfo& InSaveInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSaveInfo(const FG01BattleSaveInfo& InSaveInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleBossRecordTable(const TMap<FName, FG01BattleBossRecordDataStruct>& InSaveInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrialClear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyStoryClear(int32 InFlags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllStoryClear(int32 InFlags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetWorldMapVisibleIconIdList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01TutorialSaveInfo GetTutorialData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FG01PartyLearnArtsStruct> GetSpellList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FG01PartyLearnArtsStruct> GetSkillList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, int32> GetShopStockDataList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01MenuSortSaveDataStruct GetShopSortIndexData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SaveLoadDataStruct GetSaveLoadDataStruct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FG01PartyLearnArtsStruct> GetRegisterArtsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01QuestSaveInfo GetQuestSaveInfo2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EG01BattleArtsType, int32> GetPreviewMasterLevelData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01PeriodSaveInfo GetPeriodSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01MenuSortSaveDataStruct GetMenuSortIndexData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01MapMaskParamInfo GetMapMaskListInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetMainMenuTechArtNewList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01LevelMoveSaveInfo GetLevelMoveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FG01PartyLearnArtsStruct> GetLearnArtsList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01InventorySubsystemExtractionStruct GetInventryExtractionInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01ImperialPowerSaveDataStruct GetImperialPowerData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01HistorySaveInfo GetHistory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01GamePlayDataSaveInfo GetGamePlayData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetFinishedDevelopItemIdList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01FieldSaveInfo GetFieldSaveInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FG01PartyLearnArtsStruct> GetFathomList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRoomID> GetCompleteMaskList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01CharacterSaveInfo GetCharacterSaveInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01BattleSaveInfo GetBattleSaveInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FG01BattleBossRecordDataStruct> GetBattleBossRecordTable() const;
    
};

