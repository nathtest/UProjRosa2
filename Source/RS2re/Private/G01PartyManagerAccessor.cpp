#include "G01PartyManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01PartyManagerAccessor::UG01PartyManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_PARTY;
}

void UG01PartyManagerAccessor::UnlockEmperorSuccession() {
}

void UG01PartyManagerAccessor::UnlockAbdication() {
}

void UG01PartyManagerAccessor::SwapFormation() {
}

void UG01PartyManagerAccessor::SetVariableStatus(const FG01CharacterID& InCharacterId, const FG01CharaVariableStatus& InStatus) {
}

void UG01PartyManagerAccessor::SetupPresetData(FName InKey) {
}

void UG01PartyManagerAccessor::SetSubFormation(const FG01PartyFormationData& InSub) {
}

void UG01PartyManagerAccessor::SetSlotSpell(const FG01CharacterID& InCharacterId, int32 InSlotIndex, const FG01PartyLearnArtsStruct& InArts) {
}

void UG01PartyManagerAccessor::SetSlotSkill(const FG01CharacterID& InCharacterId, int32 InSlotIndex, const FG01PartyLearnArtsStruct& InArts) {
}

void UG01PartyManagerAccessor::SetSlotFathom(const FG01CharacterID& InCharacterId, int32 InSlotIndex, const FG01PartyLearnArtsStruct& InArts) {
}

void UG01PartyManagerAccessor::SetReleasePlayableClass(EG01FriendClass InPlayableClass) {
}

void UG01PartyManagerAccessor::SetReleaseFriendClass(EG01FriendClass InFriendClass) {
}

void UG01PartyManagerAccessor::SetPlayerCharacterID(const FG01CharacterID& InCharaID) {
}

void UG01PartyManagerAccessor::SetPastJoinPartyClass(EG01FriendClass InClass) {
}

void UG01PartyManagerAccessor::SetMainFormation(const FG01PartyFormationData& InMain) {
}

void UG01PartyManagerAccessor::SetExplicitCommandMemento(const TMap<FG01CharacterID, FG01BattleExplicitCommandMementoStruct>& InCommand) {
}

void UG01PartyManagerAccessor::SetEmperorSuccessionType(const EG01EmperorSuccessionType InSuccessionType) {
}

void UG01PartyManagerAccessor::SetDeathCharacterByClassID(const FG01CharaClassID InClassId) {
}

void UG01PartyManagerAccessor::SetDeathCharacter(const FG01CharacterID& InCharaID) {
}

void UG01PartyManagerAccessor::ResetUsableFormationIDList() {
}

void UG01PartyManagerAccessor::ResetPlayerCharacterID() {
}

void UG01PartyManagerAccessor::ResetPartyData() {
}

void UG01PartyManagerAccessor::ResetOverFlowLearnArts(FG01CharacterID InCharacterId) {
}

void UG01PartyManagerAccessor::RequestEmperorSuccessionByClassID(const TArray<FG01CharaClassID> InPickupClassIDList) {
}

void UG01PartyManagerAccessor::RequestEmperorSuccession(EG01EmperorSuccessionType InEmperorSuccessionType) {
}

bool UG01PartyManagerAccessor::ReorderPartyMember(const FG01CharacterID& InCharaID1, const FG01CharacterID& InCharaID2) {
    return false;
}

void UG01PartyManagerAccessor::RemoveUsableFormationID(const FG01FormationIDStruct& InFormationId) {
}

void UG01PartyManagerAccessor::RemoveLearnArtsByIndex(int32 InPartyIndex, const FName& InArtsName) {
}

void UG01PartyManagerAccessor::RemoveLearnArts(FG01CharacterID InCharacterId, const FName& InArtsName) {
}

void UG01PartyManagerAccessor::RemoveAllLearnArts(FG01CharacterID InCharacterId) {
}

void UG01PartyManagerAccessor::RecoveryStatus() {
}

void UG01PartyManagerAccessor::RecoverLP() {
}

void UG01PartyManagerAccessor::RecoverHP() {
}

void UG01PartyManagerAccessor::RecoverBP() {
}

void UG01PartyManagerAccessor::ProvideTotalExp(const int32 InTotalExp) const {
}

void UG01PartyManagerAccessor::ProvideGrowthMasterLevelbyPreset(const EG01BattleArtsType InType, const int32 InExp) {
}

void UG01PartyManagerAccessor::LockEmperorSuccession() {
}

bool UG01PartyManagerAccessor::LeavePartyByPartyIndex(int32 InPartyIndex, bool InDeath) {
    return false;
}

bool UG01PartyManagerAccessor::LeavePartyByClassID(const FG01CharaClassID& InClassId, bool InDeath) {
    return false;
}

bool UG01PartyManagerAccessor::LeaveParty(const FG01CharacterID& InCharacterId, bool InDeath) {
    return false;
}

bool UG01PartyManagerAccessor::JoinPartyByPartyIndex(const FG01CharacterID& InCharacterId, int32 InPartyIndex) {
    return false;
}

void UG01PartyManagerAccessor::JoinPartyByClassIDList(const TArray<FG01CharaClassID>& InClassIDList) {
}

bool UG01PartyManagerAccessor::JoinPartyByClassID(const FG01CharaClassID& InClassId, int32 InPartyIndex) {
    return false;
}

bool UG01PartyManagerAccessor::JoinParty(const FG01CharacterID& InCharacterId) {
    return false;
}

void UG01PartyManagerAccessor::GetVariableStatus(const FG01CharacterID& InCharacterId, FG01CharaVariableStatus& OutStatus) {
}

TArray<FG01FormationIDStruct> UG01PartyManagerAccessor::GetUsableFormationIDList(bool InIsGetAllList) {
    return TArray<FG01FormationIDStruct>();
}

void UG01PartyManagerAccessor::GetTotalExp(int32& OutExp) {
}

bool UG01PartyManagerAccessor::GetTemporaryLeaveVariableStatus(const FG01CharacterID& InCharacterId, FG01CharaVariableStatus& OutStatus) {
    return false;
}

void UG01PartyManagerAccessor::GetTemporaryLeavePartyCharaIDList(TArray<FG01CharacterID>& OutCharacterIdList) {
}

void UG01PartyManagerAccessor::GetTemporaryGrowth(const FG01CharacterID& InCharacterId, FG01ExpGrowthStruct& OutGrowth) {
}

void UG01PartyManagerAccessor::GetSubFormation(FG01PartyFormationData& OutSub) {
}

FG01PartyLearnArtsStruct UG01PartyManagerAccessor::GetSlotSpell(const FG01CharacterID& InCharacterId, int32 InSlotIndex) const {
    return FG01PartyLearnArtsStruct{};
}

FG01PartyLearnArtsStruct UG01PartyManagerAccessor::GetSlotSkill(const FG01CharacterID& InCharacterId, int32 InSlotIndex) const {
    return FG01PartyLearnArtsStruct{};
}

FG01PartyLearnArtsStruct UG01PartyManagerAccessor::GetSlotFathom(const FG01CharacterID& InCharacterId, int32 InSlotIndex) const {
    return FG01PartyLearnArtsStruct{};
}

void UG01PartyManagerAccessor::GetSlotEquipByPartyNumber(const int32 InPartyNum, const EG01InventoryItemEquiomentType InEquipmentType, FG01InventoryItemStruct& OutEquipment) {
}

void UG01PartyManagerAccessor::GetSimulationStatus(const FG01CharacterID& InCharacterId, bool IsMinusWeight, const TArray<FName>& InEquipList, bool& OutExist, FG01CharaStatus& OutCharaStatus, FG01ItemArmorDataStruct& OutArmorData, FG01ItemShieldDataStruct& OutShieldData, int32& OutCommandSpeed) {
}

void UG01PartyManagerAccessor::GetReleasePlayableClassList(TArray<EG01FriendClass>& OutPlayableClassList) const {
}

void UG01PartyManagerAccessor::GetReleaseFriendClassList(TArray<EG01FriendClass>& OutFriendClassList) const {
}

FG01CharacterID UG01PartyManagerAccessor::GetPlayerCharacterID() {
    return FG01CharacterID{};
}

AG01PartyManager* UG01PartyManagerAccessor::GetPartyManager() {
    return NULL;
}

void UG01PartyManagerAccessor::GetPartyCharaInfo(const FG01CharacterID& InCharacterId, bool& OutExist, FG01PartyCharaInfoTableRow& OutCharaInfo) {
}

void UG01PartyManagerAccessor::GetPartyCharaIDList(TArray<FG01CharacterID>& OutCharacterIdList) {
}

void UG01PartyManagerAccessor::GetOverFlowLearnArts(FG01CharacterID InCharacterId, TArray<FG01PartyLearnArtsStruct>& OutLearnArtsList) {
}

void UG01PartyManagerAccessor::GetNextEmperorCharaPickupList(const EG01EmperorSuccessionType InSuccessionType, TArray<FG01CharacterID>& OutNextEmperorCharaPickupList) {
}

void UG01PartyManagerAccessor::GetNameText(const FG01CharacterID& InCharacterId, FText& OutNameText) {
}

int32 UG01PartyManagerAccessor::GetMaxSlotCountSpell() const {
    return 0;
}

int32 UG01PartyManagerAccessor::GetMaxSlotCountSkill() const {
    return 0;
}

int32 UG01PartyManagerAccessor::GetMaxSlotCountFathom() const {
    return 0;
}

void UG01PartyManagerAccessor::GetMasterLevel(FG01ExpGrowthMasterLevelStruct& OutGetMasterLevel, EG01BattleArtsType InArtsType) {
}

void UG01PartyManagerAccessor::GetMainFormation(FG01PartyFormationData& OutMain) {
}

void UG01PartyManagerAccessor::GetLearnArtsByIndex(int32 InPartyIndex, TArray<FG01PartyLearnArtsStruct>& OutLearnArtsList) {
}

void UG01PartyManagerAccessor::GetLearnArts(FG01CharacterID InCharacterId, TArray<FG01PartyLearnArtsStruct>& OutLearnArtsList) {
}

void UG01PartyManagerAccessor::GetGrowth(const FG01CharacterID& InCharacterId, FG01ExpGrowthStruct& OutGrowth) {
}

int32 UG01PartyManagerAccessor::GetFreeSlotCountSpell(const FG01CharacterID& InCharacterId) const {
    return 0;
}

int32 UG01PartyManagerAccessor::GetFreeSlotCountSkill(const FG01CharacterID& InCharacterId) const {
    return 0;
}

int32 UG01PartyManagerAccessor::GetFreeSlotCountFathom(const FG01CharacterID& InCharacterId) const {
    return 0;
}

void UG01PartyManagerAccessor::GetFormationTypeInfo(const FG01FormationIDStruct& InFormationId, FG01FormationTypeRowStruct& OutFormationTypeInfo) const {
}

void UG01PartyManagerAccessor::GetFormationInfo(const FG01FormationIDStruct& InFormationId, FG01FormationInfoRowStruct& OutFormationInfo) const {
}

void UG01PartyManagerAccessor::GetFormation(FG01PartyFormation& OutFormation) {
}

void UG01PartyManagerAccessor::GetExplicitCommandMemento(TMap<FG01CharacterID, FG01BattleExplicitCommandMementoStruct>& OutCommand) {
}

void UG01PartyManagerAccessor::GetEquipByPartyNumber(const int32 InPartyNum, TArray<FG01InventoryItemStruct>& OutEquipList) {
}

void UG01PartyManagerAccessor::GetEmperorSuccessionType(EG01EmperorSuccessionType& OutSuccessionType) const {
}

FG01CharaClassID UG01PartyManagerAccessor::GetEmperorClassID() {
    return FG01CharaClassID{};
}

FG01CharacterID UG01PartyManagerAccessor::GetEmperorCharaID() {
    return FG01CharacterID{};
}

void UG01PartyManagerAccessor::GetDefaultStatus(const FG01CharacterID& InCharacterId, bool& OutExist, FG01CharaStatus& OutCharaStatus) {
}

void UG01PartyManagerAccessor::GetDefaultSpellLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SpellLevel& OutSpellLevel) {
}

void UG01PartyManagerAccessor::GetDefaultSkillLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SkillLevel& OutSkillLevel) {
}

void UG01PartyManagerAccessor::GetCurrentStatus(const FG01CharacterID& InCharacterId, bool& OutExist, FG01CharaStatus& OutCharaStatus) {
}

void UG01PartyManagerAccessor::GetCurrentSpellLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SpellLevel& OutSpellLevel) {
}

void UG01PartyManagerAccessor::GetCurrentSkillLevel(const FG01CharacterID& InCharacterId, bool& OutExist, FG01SkillLevel& OutSkillLevel) {
}

FG01CharacterID UG01PartyManagerAccessor::GetCurrentCharaIDByClassID(const FG01CharaClassID& InClassId) {
    return FG01CharacterID{};
}

void UG01PartyManagerAccessor::GetClassID(const FG01CharacterID& InCharacterId, FG01CharaClassID& OutClassID) {
}

void UG01PartyManagerAccessor::GetCharacterID(int32 InPartyIndex, FG01CharacterID& OutCharacterId) {
}

void UG01PartyManagerAccessor::GetCategorizeLearnArtsByIndex(int32 InPartyIndex, FG01PartyCategorizeingLearnArtsStruct& OutLearnArts) {
}

void UG01PartyManagerAccessor::GetCategorizeLearnArts(FG01CharacterID InCharacterId, FG01PartyCategorizeingLearnArtsStruct& OutLearnArts) {
}

void UG01PartyManagerAccessor::GetCanJoinPartyCharacterIdList(TArray<FG01CharacterID>& OutCharacterIdList) const {
}

void UG01PartyManagerAccessor::GetArmorStatus(const FG01CharacterID& InCharacterId, bool& OutExist, FG01ItemArmorDataStruct& OutArmorData) {
}

void UG01PartyManagerAccessor::ForceCreateParty(const TArray<FG01CharacterID> InCharacterIdList) {
}

void UG01PartyManagerAccessor::ExecuteDarkStoneRingProcess() {
}

void UG01PartyManagerAccessor::CreateSuccessionStatus(const FG01CharacterID& InCharaID, FG01PartyCharaStatus& OutSuccessionPartyCharaStatus) {
}

FG01PartyCharaStatus UG01PartyManagerAccessor::CreatePartyCharaStatus(const FG01CharacterID& InCharacterId, const bool IsAdditionGrowth) {
    return FG01PartyCharaStatus{};
}

bool UG01PartyManagerAccessor::ContainsByClassID(FG01CharaClassID InClassId) const {
    return false;
}

bool UG01PartyManagerAccessor::ContainsByCharaID(FG01CharacterID InCharaID) const {
    return false;
}

bool UG01PartyManagerAccessor::CheckUsableFormationID(const FG01FormationIDStruct& InFormationId) {
    return false;
}

void UG01PartyManagerAccessor::CheckUnlockEmperorSuccession(bool& OutIsUnlock) const {
}

bool UG01PartyManagerAccessor::CheckReleasePlayableClass(EG01FriendClass InPlayableClass) {
    return false;
}

bool UG01PartyManagerAccessor::CheckReleaseFriendClass(EG01FriendClass InFriendClass) {
    return false;
}

bool UG01PartyManagerAccessor::CheckPastJoinPartyClass(EG01FriendClass InClass) {
    return false;
}

void UG01PartyManagerAccessor::CheckPartySuccession(const EG01EmperorSuccessionType InSuccessionType, bool& OutIsPartySuccession) const {
}

void UG01PartyManagerAccessor::CheckMeetConditionsOfLastEmperor(bool& OutIsMeet) const {
}

bool UG01PartyManagerAccessor::CheckDeathCharacter(const FG01CharacterID& InCharaID) const {
    return false;
}

void UG01PartyManagerAccessor::CheckAbdicationPossible(bool& OutResult) {
}

void UG01PartyManagerAccessor::ChangeGenerationClassCharacter() {
}

void UG01PartyManagerAccessor::ChangeEmperor(const FG01CharacterID& InCharaID, EG01EmperorSuccessionType InEmperorSuccessionType) {
}

void UG01PartyManagerAccessor::CancelReleasePlayableClass(EG01FriendClass InPlayableClass) {
}

void UG01PartyManagerAccessor::CancelReleaseFriendClass(EG01FriendClass InFriendClass) {
}

void UG01PartyManagerAccessor::CancelPastJoinPartyClass(EG01FriendClass InClass) {
}

void UG01PartyManagerAccessor::CancelDeathCharacterByClassID(const FName& InClassId) {
}

void UG01PartyManagerAccessor::CancelDeathCharacter(const FG01CharacterID& InCharaID) {
}

void UG01PartyManagerAccessor::AddUsableFormationID(const FG01FormationIDStruct& InFormationId) {
}

void UG01PartyManagerAccessor::AddLearnArtsByIndex(int32 InPartyIndex, const FName& InArtsName) {
}

void UG01PartyManagerAccessor::AddLearnArts(FG01CharacterID InCharacterId, const FName& InArtsName) {
}


