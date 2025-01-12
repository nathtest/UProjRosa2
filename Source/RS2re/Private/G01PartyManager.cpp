#include "G01PartyManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ObserverSubjectComponent -FallbackName=ObserverSubjectComponent
#include "G01BattleArtsManagerAccessor.h"
#include "G01ExpManagerAccessor.h"
#include "G01GamePlayDataManagerAccessor.h"
#include "G01HistoryManagerAccessor.h"
#include "G01InventoryManagerAccessor.h"
#include "G01LearnArtsManagerAccessor.h"

AG01PartyManager::AG01PartyManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_PARTY;
    this->ObserverSubject = CreateDefaultSubobject<UObserverSubjectComponent>(TEXT("ObserverSubject"));
    this->InventoryManagerAccessor = CreateDefaultSubobject<UG01InventoryManagerAccessor>(TEXT("InventoryManagerAccessor"));
    this->HistoryManagerAccessor = CreateDefaultSubobject<UG01HistoryManagerAccessor>(TEXT("HistoryManagerAccessor"));
    this->ExpManagerAccessor = CreateDefaultSubobject<UG01ExpManagerAccessor>(TEXT("ExpManagerAccessor"));
    this->LearnArtsManagerAccessor = CreateDefaultSubobject<UG01LearnArtsManagerAccessor>(TEXT("LearnArtsManagerAccessor"));
    this->BattleArtsManagerAccessor = CreateDefaultSubobject<UG01BattleArtsManagerAccessor>(TEXT("BattleArtsManagerAccessor"));
    this->GamePlayDataManagerAccessor = CreateDefaultSubobject<UG01GamePlayDataManagerAccessor>(TEXT("GamePlayDataManagerAccessor"));
    this->MPartyCharaInfoTable = NULL;
    this->MPartyCharaBaseStatusTable = NULL;
    this->SuccessionCategoryTable = NULL;
    this->SuccessionRuleTable = NULL;
    this->GrowthParamHPTable = NULL;
    this->GrowthParamBPTable = NULL;
    this->DefaultFormationNumber.AddDefaulted(5);
    this->IsEnableCalcHPandBP = true;
    this->BelowAvgMasterLevelCoefficient = 0.00f;
}

void AG01PartyManager::UnlockEmperorSuccession() {
}

void AG01PartyManager::UnlockAbdication() {
}

void AG01PartyManager::SetEmperorSuccessionType(EG01EmperorSuccessionType InSuccessionType) {
}

void AG01PartyManager::SetDeathCharacterByClassID(const FG01CharaClassID& InClassId) {
}

void AG01PartyManager::SetDeathCharacter(const FG01CharacterID& InCharaID) {
}

void AG01PartyManager::SetClassGrowth() {
}

void AG01PartyManager::ResetPartyData() {
}

void AG01PartyManager::RequestEmperorSuccession_Implementation(const TArray<FG01CharaClassID>& InPickupClassIDList) {
}

void AG01PartyManager::LockEmperorSuccession() {
}

void AG01PartyManager::LockAbdication() {
}

bool AG01PartyManager::LeaveParty(const FG01CharacterID& InCharaID, bool InDeath) {
    return false;
}

void AG01PartyManager::GrowthBelowAvgMasterLevel() {
}

TArray<FG01FormationIDStruct> AG01PartyManager::GetUsableFormationIDList(bool InIsGetAllList) {
    return TArray<FG01FormationIDStruct>();
}

void AG01PartyManager::GetReleasePlayableClassList(TArray<EG01FriendClass>& OutPlayableClassList) const {
}

void AG01PartyManager::GetReleaseFriendClassList(TArray<EG01FriendClass>& OutFriendClass) const {
}

void AG01PartyManager::GetPartyCharaInfoTableRow(const FG01CharacterID& InCharaID, bool& IsExist, FG01PartyCharaInfoTableRow& OutPartyCharaInfo) {
}

void AG01PartyManager::GetNextEmperorCharaPickupList_Implementation(const EG01EmperorSuccessionType InSuccessionType, TArray<FG01CharacterID>& OutNextEmperorCharaPickupList) {
}

int32 AG01PartyManager::GetMemberCount() const {
    return 0;
}

bool AG01PartyManager::GetInexperiencedEmperorCharacterID_Implementation(const TArray<FG01CharacterID>& InAlreadyPickupList, FG01CharacterID& OutCharacterId) {
    return false;
}

void AG01PartyManager::GetHPGrowthCoefficient(int32 InBaseHp, float& OutCoefficient) {
}

EG01EmperorSuccessionType AG01PartyManager::GetEmperorSuccessionType() {
    return EG01EmperorSuccessionType::Dead;
}

FG01CharaClassID AG01PartyManager::GetEmperorClassID() const {
    return FG01CharaClassID{};
}

FG01CharacterID AG01PartyManager::GetEmperorCharaID() const {
    return FG01CharacterID{};
}

int32 AG01PartyManager::GetCurrentHPGrowthValue() const {
    return 0;
}

int32 AG01PartyManager::GetCurrentHPBasicValue() const {
    return 0;
}

int32 AG01PartyManager::GetCurrentBPGrowthValue() const {
    return 0;
}

int32 AG01PartyManager::GetCurrentBPBasicValue() const {
    return 0;
}

void AG01PartyManager::GetBPGrowthCoefficient(int32 InBaseBp, float& OutCoefficient) {
}

TArray<FG01PartyCharaStatus> AG01PartyManager::GetAllPartyCharaInfo() const {
    return TArray<FG01PartyCharaStatus>();
}

void AG01PartyManager::ExecuteDarkStoneRingProcess_Implementation() {
}

void AG01PartyManager::EquipmentJoinCharacter_Implementation(const FG01CharacterID InCharacterId) {
}

void AG01PartyManager::CheckUnlockEmperorSuccession(bool& OutIsUnlock) {
}

void AG01PartyManager::CheckUnlockAbdication(bool& OutIsUnlock) const {
}

bool AG01PartyManager::CheckPastJoinPartyClass(EG01FriendClass InClass) {
    return false;
}

void AG01PartyManager::CheckMeetConditionsOfLastEmperor_Implementation(bool& OutIsMeet) const {
}

bool AG01PartyManager::CheckIsUseMasterLevelToSpellLevel(uint8 InFlags, EG01PartyCharacterSpellType InSpellType) {
    return false;
}

bool AG01PartyManager::CheckIsUseMasterLevelToSkillLevel(uint8 InFlags, EG01PartyCharacterSkillType InSkillType) {
    return false;
}

bool AG01PartyManager::CheckDeathCharacter(const FG01CharacterID& InCharaID) const {
    return false;
}

bool AG01PartyManager::CheckCanLearnFormationID(const FG01FormationIDStruct& InFormationId) {
    return false;
}

void AG01PartyManager::ChangeEmperor(const FG01CharacterID& InCharaID, EG01EmperorSuccessionType InEmperorSuccessionType) {
}

void AG01PartyManager::CancelDeathCharacterByClassID(const FName& InClassId) {
}

void AG01PartyManager::CancelDeathCharacter(const FG01CharacterID& InCharaID) {
}

int32 AG01PartyManager::CalcInitialHP_Implementation(const FG01PartyCharaBaseStatusTableRow InPartyCharaBaseStatus) {
    return 0;
}

int32 AG01PartyManager::CalcInitialBP_Implementation(const FG01PartyCharaBaseStatusTableRow InPartyCharaBaseStatus) {
    return 0;
}


