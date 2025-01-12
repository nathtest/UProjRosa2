#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01BattleArtsType.h"
#include "EG01EmperorSuccessionType.h"
#include "EG01FriendClass.h"
#include "EG01InventoryItemEquiomentType.h"
#include "G01BattleExplicitCommandMementoStruct.h"
#include "G01CharaClassID.h"
#include "G01CharaStatus.h"
#include "G01CharaVariableStatus.h"
#include "G01CharacterID.h"
#include "G01ExpGrowthMasterLevelStruct.h"
#include "G01ExpGrowthStruct.h"
#include "G01FormationIDStruct.h"
#include "G01FormationInfoRowStruct.h"
#include "G01FormationTypeRowStruct.h"
#include "G01InventoryItemStruct.h"
#include "G01ItemArmorDataStruct.h"
#include "G01ItemShieldDataStruct.h"
#include "G01PartyCategorizeingLearnArtsStruct.h"
#include "G01PartyCharaInfoTableRow.h"
#include "G01PartyCharaStatus.h"
#include "G01PartyFormation.h"
#include "G01PartyFormationData.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "G01PartyManagerAccessor.generated.h"

class AG01PartyManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01PartyManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01PartyManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockEmperorSuccession();
    
    UFUNCTION(BlueprintCallable)
    void UnlockAbdication();
    
    UFUNCTION(BlueprintCallable)
    void SwapFormation();
    
    UFUNCTION(BlueprintCallable)
    void SetVariableStatus(const FG01CharacterID& InCharacterId, const FG01CharaVariableStatus& InStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetupPresetData(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void SetSubFormation(const FG01PartyFormationData& InSub);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotSpell(const FG01CharacterID& InCharacterId, int32 InSlotIndex, const FG01PartyLearnArtsStruct& InArts);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotSkill(const FG01CharacterID& InCharacterId, int32 InSlotIndex, const FG01PartyLearnArtsStruct& InArts);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotFathom(const FG01CharacterID& InCharacterId, int32 InSlotIndex, const FG01PartyLearnArtsStruct& InArts);
    
    UFUNCTION(BlueprintCallable)
    void SetReleasePlayableClass(EG01FriendClass InPlayableClass);
    
    UFUNCTION(BlueprintCallable)
    void SetReleaseFriendClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerCharacterID(const FG01CharacterID& InCharaID);
    
    UFUNCTION(BlueprintCallable)
    void SetPastJoinPartyClass(EG01FriendClass InClass);
    
    UFUNCTION(BlueprintCallable)
    void SetMainFormation(const FG01PartyFormationData& InMain);
    
    UFUNCTION(BlueprintCallable)
    void SetExplicitCommandMemento(const TMap<FG01CharacterID, FG01BattleExplicitCommandMementoStruct>& InCommand);
    
    UFUNCTION(BlueprintCallable)
    void SetEmperorSuccessionType(const EG01EmperorSuccessionType InSuccessionType);
    
    UFUNCTION(BlueprintCallable)
    void SetDeathCharacterByClassID(const FG01CharaClassID InClassId);
    
    UFUNCTION(BlueprintCallable)
    void SetDeathCharacter(const FG01CharacterID& InCharaID);
    
    UFUNCTION(BlueprintCallable)
    void ResetUsableFormationIDList();
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerCharacterID();
    
    UFUNCTION(BlueprintCallable)
    void ResetPartyData();
    
    UFUNCTION(BlueprintCallable)
    void ResetOverFlowLearnArts(FG01CharacterID InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void RequestEmperorSuccessionByClassID(const TArray<FG01CharaClassID> InPickupClassIDList);
    
    UFUNCTION(BlueprintCallable)
    void RequestEmperorSuccession(EG01EmperorSuccessionType InEmperorSuccessionType);
    
    UFUNCTION(BlueprintCallable)
    bool ReorderPartyMember(const FG01CharacterID& InCharaID1, const FG01CharacterID& InCharaID2);
    
    UFUNCTION(BlueprintCallable)
    void RemoveUsableFormationID(const FG01FormationIDStruct& InFormationId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLearnArtsByIndex(int32 InPartyIndex, const FName& InArtsName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLearnArts(FG01CharacterID InCharacterId, const FName& InArtsName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllLearnArts(FG01CharacterID InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void RecoveryStatus();
    
    UFUNCTION(BlueprintCallable)
    void RecoverLP();
    
    UFUNCTION(BlueprintCallable)
    void RecoverHP();
    
    UFUNCTION(BlueprintCallable)
    void RecoverBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ProvideTotalExp(const int32 InTotalExp) const;
    
    UFUNCTION(BlueprintCallable)
    void ProvideGrowthMasterLevelbyPreset(const EG01BattleArtsType InType, const int32 InExp);
    
    UFUNCTION(BlueprintCallable)
    void LockEmperorSuccession();
    
    UFUNCTION(BlueprintCallable)
    bool LeavePartyByPartyIndex(int32 InPartyIndex, bool InDeath);
    
    UFUNCTION(BlueprintCallable)
    bool LeavePartyByClassID(const FG01CharaClassID& InClassId, bool InDeath);
    
    UFUNCTION(BlueprintCallable)
    bool LeaveParty(const FG01CharacterID& InCharacterId, bool InDeath);
    
    UFUNCTION(BlueprintCallable)
    bool JoinPartyByPartyIndex(const FG01CharacterID& InCharacterId, int32 InPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    void JoinPartyByClassIDList(const TArray<FG01CharaClassID>& InClassIDList);
    
    UFUNCTION(BlueprintCallable)
    bool JoinPartyByClassID(const FG01CharaClassID& InClassId, int32 InPartyIndex);
    
    UFUNCTION(BlueprintCallable)
    bool JoinParty(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void GetVariableStatus(const FG01CharacterID& InCharacterId, FG01CharaVariableStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    TArray<FG01FormationIDStruct> GetUsableFormationIDList(bool InIsGetAllList);
    
    UFUNCTION(BlueprintCallable)
    void GetTotalExp(int32& OutExp);
    
    UFUNCTION(BlueprintCallable)
    bool GetTemporaryLeaveVariableStatus(const FG01CharacterID& InCharacterId, FG01CharaVariableStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    void GetTemporaryLeavePartyCharaIDList(TArray<FG01CharacterID>& OutCharacterIdList);
    
    UFUNCTION(BlueprintCallable)
    void GetTemporaryGrowth(const FG01CharacterID& InCharacterId, FG01ExpGrowthStruct& OutGrowth);
    
    UFUNCTION(BlueprintCallable)
    void GetSubFormation(FG01PartyFormationData& OutSub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01PartyLearnArtsStruct GetSlotSpell(const FG01CharacterID& InCharacterId, int32 InSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01PartyLearnArtsStruct GetSlotSkill(const FG01CharacterID& InCharacterId, int32 InSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01PartyLearnArtsStruct GetSlotFathom(const FG01CharacterID& InCharacterId, int32 InSlotIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void GetSlotEquipByPartyNumber(const int32 InPartyNum, const EG01InventoryItemEquiomentType InEquipmentType, FG01InventoryItemStruct& OutEquipment);
    
    UFUNCTION(BlueprintCallable)
    void GetSimulationStatus(const FG01CharacterID& InCharacterId, bool IsMinusWeight, const TArray<FName>& InEquipList, bool& OutExist, FG01CharaStatus& OutCharaStatus, FG01ItemArmorDataStruct& OutArmorData, FG01ItemShieldDataStruct& OutShieldData, int32& OutCommandSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetReleasePlayableClassList(TArray<EG01FriendClass>& OutPlayableClassList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetReleaseFriendClassList(TArray<EG01FriendClass>& OutFriendClassList) const;
    
    UFUNCTION(BlueprintCallable)
    FG01CharacterID GetPlayerCharacterID();
    
    UFUNCTION(BlueprintCallable)
    AG01PartyManager* GetPartyManager();
    
    UFUNCTION(BlueprintCallable)
    void GetPartyCharaInfo(const FG01CharacterID& InCharacterId, bool& OutExist, FG01PartyCharaInfoTableRow& OutCharaInfo);
    
    UFUNCTION(BlueprintCallable)
    void GetPartyCharaIDList(TArray<FG01CharacterID>& OutCharacterIdList);
    
    UFUNCTION(BlueprintCallable)
    void GetOverFlowLearnArts(FG01CharacterID InCharacterId, TArray<FG01PartyLearnArtsStruct>& OutLearnArtsList);
    
    UFUNCTION(BlueprintCallable)
    void GetNextEmperorCharaPickupList(const EG01EmperorSuccessionType InSuccessionType, TArray<FG01CharacterID>& OutNextEmperorCharaPickupList);
    
    UFUNCTION(BlueprintCallable)
    void GetNameText(const FG01CharacterID& InCharacterId, FText& OutNameText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSlotCountSpell() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSlotCountSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSlotCountFathom() const;
    
    UFUNCTION(BlueprintCallable)
    void GetMasterLevel(FG01ExpGrowthMasterLevelStruct& OutGetMasterLevel, EG01BattleArtsType InArtsType);
    
    UFUNCTION(BlueprintCallable)
    void GetMainFormation(FG01PartyFormationData& OutMain);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnArtsByIndex(int32 InPartyIndex, TArray<FG01PartyLearnArtsStruct>& OutLearnArtsList);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnArts(FG01CharacterID InCharacterId, TArray<FG01PartyLearnArtsStruct>& OutLearnArtsList);
    
    UFUNCTION(BlueprintCallable)
    void GetGrowth(const FG01CharacterID& InCharacterId, FG01ExpGrowthStruct& OutGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreeSlotCountSpell(const FG01CharacterID& InCharacterId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreeSlotCountSkill(const FG01CharacterID& InCharacterId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreeSlotCountFathom(const FG01CharacterID& InCharacterId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFormationTypeInfo(const FG01FormationIDStruct& InFormationId, FG01FormationTypeRowStruct& OutFormationTypeInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFormationInfo(const FG01FormationIDStruct& InFormationId, FG01FormationInfoRowStruct& OutFormationInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void GetFormation(FG01PartyFormation& OutFormation);
    
    UFUNCTION(BlueprintCallable)
    void GetExplicitCommandMemento(TMap<FG01CharacterID, FG01BattleExplicitCommandMementoStruct>& OutCommand);
    
    UFUNCTION(BlueprintCallable)
    void GetEquipByPartyNumber(const int32 InPartyNum, TArray<FG01InventoryItemStruct>& OutEquipList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEmperorSuccessionType(EG01EmperorSuccessionType& OutSuccessionType) const;
    
    UFUNCTION(BlueprintCallable)
    FG01CharaClassID GetEmperorClassID();
    
    UFUNCTION(BlueprintCallable)
    FG01CharacterID GetEmperorCharaID();
    
    UFUNCTION(BlueprintCallable)
    void GetDefaultStatus(const FG01CharacterID& InCharacterId, bool& OutExist, FG01CharaStatus& OutCharaStatus);
    
    UFUNCTION(BlueprintCallable)
    void GetDefaultSpellLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SpellLevel& OutSpellLevel);
    
    UFUNCTION(BlueprintCallable)
    void GetDefaultSkillLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SkillLevel& OutSkillLevel);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentStatus(const FG01CharacterID& InCharacterId, bool& OutExist, FG01CharaStatus& OutCharaStatus);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentSpellLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SpellLevel& OutSpellLevel);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentSkillLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SkillLevel& OutSkillLevel);
    
    UFUNCTION(BlueprintCallable)
    FG01CharacterID GetCurrentCharaIDByClassID(const FG01CharaClassID& InClassId);
    
    UFUNCTION(BlueprintCallable)
    void GetClassID(const FG01CharacterID& InCharacterId, FG01CharaClassID& OutClassID);
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterID(int32 InPartyIndex, FG01CharacterID& OutCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void GetCategorizeLearnArtsByIndex(int32 InPartyIndex, FG01PartyCategorizeingLearnArtsStruct& OutLearnArts);
    
    UFUNCTION(BlueprintCallable)
    void GetCategorizeLearnArts(FG01CharacterID InCharacterId, FG01PartyCategorizeingLearnArtsStruct& OutLearnArts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCanJoinPartyCharacterIdList(TArray<FG01CharacterID>& OutCharacterIdList) const;
    
    UFUNCTION(BlueprintCallable)
    void GetArmorStatus(const FG01CharacterID& InCharacterId, bool& OutExist, FG01ItemArmorDataStruct& OutArmorData);
    
    UFUNCTION(BlueprintCallable)
    void ForceCreateParty(const TArray<FG01CharacterID> InCharacterIdList);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteDarkStoneRingProcess();
    
    UFUNCTION(BlueprintCallable)
    void CreateSuccessionStatus(const FG01CharacterID& InCharaID, FG01PartyCharaStatus& OutSuccessionPartyCharaStatus);
    
    UFUNCTION(BlueprintCallable)
    FG01PartyCharaStatus CreatePartyCharaStatus(const FG01CharacterID& InCharacterId, const bool IsAdditionGrowth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsByClassID(FG01CharaClassID InClassId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsByCharaID(FG01CharacterID InCharaID) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckUsableFormationID(const FG01FormationIDStruct& InFormationId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckUnlockEmperorSuccession(bool& OutIsUnlock) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckReleasePlayableClass(EG01FriendClass InPlayableClass);
    
    UFUNCTION(BlueprintCallable)
    bool CheckReleaseFriendClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable)
    bool CheckPastJoinPartyClass(EG01FriendClass InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckPartySuccession(const EG01EmperorSuccessionType InSuccessionType, bool& OutIsPartySuccession) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckMeetConditionsOfLastEmperor(bool& OutIsMeet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDeathCharacter(const FG01CharacterID& InCharaID) const;
    
    UFUNCTION(BlueprintCallable)
    void CheckAbdicationPossible(bool& OutResult);
    
    UFUNCTION(BlueprintCallable)
    void ChangeGenerationClassCharacter();
    
    UFUNCTION(BlueprintCallable)
    void ChangeEmperor(const FG01CharacterID& InCharaID, EG01EmperorSuccessionType InEmperorSuccessionType);
    
    UFUNCTION(BlueprintCallable)
    void CancelReleasePlayableClass(EG01FriendClass InPlayableClass);
    
    UFUNCTION(BlueprintCallable)
    void CancelReleaseFriendClass(EG01FriendClass InFriendClass);
    
    UFUNCTION(BlueprintCallable)
    void CancelPastJoinPartyClass(EG01FriendClass InClass);
    
    UFUNCTION(BlueprintCallable)
    void CancelDeathCharacterByClassID(const FName& InClassId);
    
    UFUNCTION(BlueprintCallable)
    void CancelDeathCharacter(const FG01CharacterID& InCharaID);
    
    UFUNCTION(BlueprintCallable)
    void AddUsableFormationID(const FG01FormationIDStruct& InFormationId);
    
    UFUNCTION(BlueprintCallable)
    void AddLearnArtsByIndex(int32 InPartyIndex, const FName& InArtsName);
    
    UFUNCTION(BlueprintCallable)
    void AddLearnArts(FG01CharacterID InCharacterId, const FName& InArtsName);
    
};

