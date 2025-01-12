#pragma once
#include "CoreMinimal.h"
#include "FlagIDListViewStruct.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagIDListViewStruct -FallbackName=FlagIDListViewStruct
#include "FlagSystemObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemObserverInf -FallbackName=FlagSystemObserverInf
#include "LevelObjectFindInterface.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelObjectFindInterface -FallbackName=LevelObjectFindInterface
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "EG01EmperorSuccessionType.h"
#include "EG01FriendClass.h"
#include "EG01PartyCharacterSkillType.h"
#include "EG01PartyCharacterSpellType.h"
#include "G01AchievementID.h"
#include "G01CharaClassID.h"
#include "G01CharacterID.h"
#include "G01FieldPlayerManagerObserverInf.h"
#include "G01FormationIDStruct.h"
#include "G01PartyCharaBaseStatusTableRow.h"
#include "G01PartyCharaInfoTableRow.h"
#include "G01PartyCharaStatus.h"
#include "G01PartyManagerInterface.h"
#include "G01PartyManagerObserverInf.h"
#include "G01PartyManagerOwnerInf.h"
#include "G01PartyTemporarySaveObserverInf.h"
#include "G01PeriodManagerObserverInf.h"
#include "G01PartyManager.generated.h"

class UDataTable;
class UG01BattleArtsManagerAccessor;
class UG01ExpManagerAccessor;
class UG01GamePlayDataManagerAccessor;
class UG01HistoryManagerAccessor;
class UG01InventoryManagerAccessor;
class UG01LearnArtsManagerAccessor;
class UObserverSubjectComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01PartyManager : public AManagerBase, public ILevelObjectFindInterface, public IG01PartyManagerInterface, public IG01PartyManagerOwnerInf, public IG01PartyManagerObserverInf, public IFlagSystemObserverInf, public IG01PeriodManagerObserverInf, public IG01PartyTemporarySaveObserverInf, public IG01FieldPlayerManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UObserverSubjectComponent* ObserverSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01InventoryManagerAccessor* InventoryManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01HistoryManagerAccessor* HistoryManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01ExpManagerAccessor* ExpManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01LearnArtsManagerAccessor* LearnArtsManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01BattleArtsManagerAccessor* BattleArtsManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01GamePlayDataManagerAccessor* GamePlayDataManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MPartyCharaInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MPartyCharaBaseStatusTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SuccessionCategoryTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SuccessionRuleTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GrowthParamHPTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GrowthParamBPTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DefaultFormationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01FriendClass> IgnoreAchievementCLassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01FormationIDStruct> IgnoreAchievementFormationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableCalcHPandBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01CharacterID, int32> CacheHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01CharacterID, int32> CacheBp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BelowAvgMasterLevelCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagIDListViewStruct MNewGamePlusActiveFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01AchievementID> FriendClassAchievementList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01AchievementID> FormationAchievementList;
    
public:
    AG01PartyManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UnlockEmperorSuccession();
    
    UFUNCTION(BlueprintCallable)
    void UnlockAbdication();
    
    UFUNCTION(BlueprintCallable)
    void SetEmperorSuccessionType(EG01EmperorSuccessionType InSuccessionType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDeathCharacterByClassID(const FG01CharaClassID& InClassId);
    
    UFUNCTION(BlueprintCallable)
    void SetDeathCharacter(const FG01CharacterID& InCharaID);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetClassGrowth();
    
    UFUNCTION(BlueprintCallable)
    void ResetPartyData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestEmperorSuccession(const TArray<FG01CharaClassID>& InPickupClassIDList);
    
private:
    UFUNCTION(BlueprintCallable)
    void LockEmperorSuccession();
    
    UFUNCTION(BlueprintCallable)
    void LockAbdication();
    
public:
    UFUNCTION(BlueprintCallable)
    bool LeaveParty(const FG01CharacterID& InCharaID, bool InDeath);
    
private:
    UFUNCTION(BlueprintCallable)
    void GrowthBelowAvgMasterLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FG01FormationIDStruct> GetUsableFormationIDList(bool InIsGetAllList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetReleasePlayableClassList(TArray<EG01FriendClass>& OutPlayableClassList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetReleaseFriendClassList(TArray<EG01FriendClass>& OutFriendClass) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void GetPartyCharaInfoTableRow(const FG01CharacterID& InCharaID, bool& IsExist, FG01PartyCharaInfoTableRow& OutPartyCharaInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetNextEmperorCharaPickupList(const EG01EmperorSuccessionType InSuccessionType, TArray<FG01CharacterID>& OutNextEmperorCharaPickupList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMemberCount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetInexperiencedEmperorCharacterID(const TArray<FG01CharacterID>& InAlreadyPickupList, FG01CharacterID& OutCharacterId);
    
private:
    UFUNCTION(BlueprintCallable)
    void GetHPGrowthCoefficient(int32 InBaseHp, float& OutCoefficient);
    
    UFUNCTION(BlueprintCallable)
    EG01EmperorSuccessionType GetEmperorSuccessionType();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01CharaClassID GetEmperorClassID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01CharacterID GetEmperorCharaID() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHPGrowthValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHPBasicValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBPGrowthValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBPBasicValue() const;
    
    UFUNCTION(BlueprintCallable)
    void GetBPGrowthCoefficient(int32 InBaseBp, float& OutCoefficient);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FG01PartyCharaStatus> GetAllPartyCharaInfo() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteDarkStoneRingProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EquipmentJoinCharacter(const FG01CharacterID InCharacterId);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckUnlockEmperorSuccession(bool& OutIsUnlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckUnlockAbdication(bool& OutIsUnlock) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool CheckPastJoinPartyClass(EG01FriendClass InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void CheckMeetConditionsOfLastEmperor(bool& OutIsMeet) const;
    
private:
    UFUNCTION(BlueprintCallable)
    static bool CheckIsUseMasterLevelToSpellLevel(uint8 InFlags, EG01PartyCharacterSpellType InSpellType);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckIsUseMasterLevelToSkillLevel(uint8 InFlags, EG01PartyCharacterSkillType InSkillType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDeathCharacter(const FG01CharacterID& InCharaID) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckCanLearnFormationID(const FG01FormationIDStruct& InFormationId);
    
    UFUNCTION(BlueprintCallable)
    void ChangeEmperor(const FG01CharacterID& InCharaID, EG01EmperorSuccessionType InEmperorSuccessionType);
    
    UFUNCTION(BlueprintCallable)
    void CancelDeathCharacterByClassID(const FName& InClassId);
    
    UFUNCTION(BlueprintCallable)
    void CancelDeathCharacter(const FG01CharacterID& InCharaID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalcInitialHP(const FG01PartyCharaBaseStatusTableRow InPartyCharaBaseStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CalcInitialBP(const FG01PartyCharaBaseStatusTableRow InPartyCharaBaseStatus);
    

    // Fix for true pure virtual functions not being implemented
};

