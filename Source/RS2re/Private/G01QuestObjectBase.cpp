#include "G01QuestObjectBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo
#include "G01AbilityManagerAccessor.h"
#include "G01DestinationManagerAccessor.h"
#include "G01GamePlayDataManagerAccessor.h"
#include "G01HistoryManagerAccessor.h"
#include "G01PeriodManagerAccessor.h"
#include "G01QuestManagerAccessor.h"

AG01QuestObjectBase::AG01QuestObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
    this->DestinationManagerAccessor = CreateDefaultSubobject<UG01DestinationManagerAccessor>(TEXT("DestinationManagerAccessor"));
    this->AbilityManagerAccessor = CreateDefaultSubobject<UG01AbilityManagerAccessor>(TEXT("AbilityManagerAccessor"));
    this->FlagManagerAccessor = NULL;
    this->PeriodManagerAccessor = CreateDefaultSubobject<UG01PeriodManagerAccessor>(TEXT("PeriodManagerAccessor"));
    this->HistoryManagerAccessor = CreateDefaultSubobject<UG01HistoryManagerAccessor>(TEXT("HistoryManagerAccessor"));
    this->GamePlayDataManagerAccessor = CreateDefaultSubobject<UG01GamePlayDataManagerAccessor>(TEXT("GamePlayDataManagerAccessor"));
    this->G01QuestManagerAccessor = CreateDefaultSubobject<UG01QuestManagerAccessor>(TEXT("G01QuestManagerAccessor"));
}

FName AG01QuestObjectBase::GetDestinationKey() const {
    return NAME_None;
}

FG01DestinationInfo AG01QuestObjectBase::GetDestinationInfo() const {
    return FG01DestinationInfo{};
}

void AG01QuestObjectBase::GetConditionParam_EnemyDefeat(EQuestBufferIndex InBufferIndex, bool& IsCompleted, FG01EnemyDefeatNotifyParam& OutParam) {
}

void AG01QuestObjectBase::Cmd_ST_UpdateCharaVariation(FG01VariationCharaIDStruct InCharaID, EG01CharacterVariationType InType, bool InIsReset) {
}

void AG01QuestObjectBase::Cmd_ST_UpdateAbilityOpenLevel(const FG01QStackUpdateAbilityOpenLevelParam& InParam) {
}

void AG01QuestObjectBase::Cmd_ST_SetReleasePlayableClass(EG01FriendClass InPlayableClass) {
}

void AG01QuestObjectBase::Cmd_ST_SetReleaseFriendClass(EG01FriendClass InFriendClass) {
}

void AG01QuestObjectBase::Cmd_ST_RestoreParty(int32 InPartyIndex) {
}

void AG01QuestObjectBase::Cmd_ST_RecordEventInfoList(TArray<FG01EventTriggerID> InTriggerIDList) {
}

void AG01QuestObjectBase::Cmd_ST_RecordEventInfo(FG01EventTriggerID InEventTriggerID) {
}

void AG01QuestObjectBase::Cmd_ST_LeavePartyByPartyIndex(int32 InPartyIndex, bool InIsDeath) {
}

void AG01QuestObjectBase::Cmd_ST_LeavePartyByClassID(FG01CharaClassID InClassId, bool InIsDeath) {
}

void AG01QuestObjectBase::Cmd_ST_JoinPartyByClassID(FG01CharaClassID InClassId, int32 InPartyIndex) {
}

void AG01QuestObjectBase::Cmd_ST_JoinPartyByCharaID(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FG01CharacterID InCharacterId, int32 InJoinPartyIndex) {
}

void AG01QuestObjectBase::Cmd_ST_JoinParty(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FEditableLevelObjectID InJoinLevelObjectID, int32 InJoinPartyIndex) {
}

void AG01QuestObjectBase::Cmd_ST_DeactivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex) {
}

void AG01QuestObjectBase::Cmd_ST_ChangeIncomeEventFlag(FG01IncomeEventIDStruct InIncomeEventID, bool InIsActive) {
}

void AG01QuestObjectBase::Cmd_ST_CancelReleasePlayableClass(EG01FriendClass InPlayableClass) {
}

void AG01QuestObjectBase::Cmd_ST_CancelReleaseFriendClass(EG01FriendClass InFriendClass) {
}

void AG01QuestObjectBase::Cmd_ST_AddYears(int32 InYearsCount, bool InIsForcePeriodJump) {
}

void AG01QuestObjectBase::Cmd_ST_AddImperialForcePoint(FG01ImperialForcePointIDStruct InPointID) {
}

void AG01QuestObjectBase::Cmd_ST_AddEventPoint(FG01EventPointIDStruct InEventPointID, EG01QStackPeriodJumpType InJumpType) {
}

void AG01QuestObjectBase::Cmd_ST_AddCrown(bool InIsImperial, int32 InNum) {
}

void AG01QuestObjectBase::Cmd_ST_ActivityLaunch(FG01ActivityID InActivityID) {
}

void AG01QuestObjectBase::Cmd_ST_ActivityComplete(FG01ActivityID InActivityID) {
}

void AG01QuestObjectBase::Cmd_ST_ActivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex) {
}

void AG01QuestObjectBase::Cmd_RS_SetDestinationPrecedenced(bool InIsPrecedence) {
}

void AG01QuestObjectBase::Cmd_RS_CheckLevel(bool& OutIsTarget, const TArray<TSoftObjectPtr<UWorld>>& InTargetLevels) {
}

void AG01QuestObjectBase::Cmd_QA_UpdateCharaVariation(FG01VariationCharaIDStruct InCharaID, EG01CharacterVariationType InType, bool InIsReset) {
}

void AG01QuestObjectBase::Cmd_QA_SetReleasePlayableClass(EG01FriendClass InPlayableClass) {
}

void AG01QuestObjectBase::Cmd_QA_SetReleaseFriendClass(EG01FriendClass InFriendClass) {
}

void AG01QuestObjectBase::Cmd_QA_RestoreParty(int32 InPartyIndex) {
}

void AG01QuestObjectBase::Cmd_QA_RemoveStoryClearFlags(int32 InFlags) {
}

void AG01QuestObjectBase::Cmd_QA_RecordGeneration(EG01RecordGenerationType InRecordType, int32 InGeneration) {
}

void AG01QuestObjectBase::Cmd_QA_RecordEventInfoList(TArray<FG01EventTriggerID> InTriggerIDList) {
}

void AG01QuestObjectBase::Cmd_QA_RecordEventInfo(FG01EventTriggerID InEventTriggerID) {
}

void AG01QuestObjectBase::Cmd_QA_LeavePartyByPartyIndex(int32 InPartyIndex, bool InIsDeath) {
}

void AG01QuestObjectBase::Cmd_QA_LeavePartyByClassID(FG01CharaClassID InClassId, bool InIsDeath) {
}

void AG01QuestObjectBase::Cmd_QA_JoinPartyByClassID(FG01CharaClassID InClassId, int32 InPartyIndex) {
}

void AG01QuestObjectBase::Cmd_QA_JoinPartyByCharaID(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FG01CharacterID InCharacterId, int32 InJoinPartyIndex) {
}

void AG01QuestObjectBase::Cmd_QA_JoinParty(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FEditableLevelObjectID InJoinLevelObjectID, int32 InJoinPartyIndex) {
}

void AG01QuestObjectBase::Cmd_QA_GetPeriod(int32& OutPeriod) const {
}

void AG01QuestObjectBase::Cmd_QA_DeactivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex) {
}

void AG01QuestObjectBase::Cmd_QA_CheckStoryClearFlags(bool& OutHasAllFlags, int32 InFlags) {
}

void AG01QuestObjectBase::Cmd_QA_CheckReleaseFriendClass(EG01FriendClass InFriendClass, bool& OutIsRelease) {
}

void AG01QuestObjectBase::Cmd_QA_ChangeIncomeEventFlag(FG01IncomeEventIDStruct InIncomeEventID, bool InIsActive) {
}

void AG01QuestObjectBase::Cmd_QA_CancelReleasePlayableClass(EG01FriendClass InPlayableClass) {
}

void AG01QuestObjectBase::Cmd_QA_CancelReleaseFriendClass(EG01FriendClass InFriendClass) {
}

void AG01QuestObjectBase::Cmd_QA_AddYears(int32 InYearsCount, bool InIsForcePeriodJump) {
}

void AG01QuestObjectBase::Cmd_QA_AddStoryClearFlags(int32 InFlags) {
}

void AG01QuestObjectBase::Cmd_QA_AddEventPoint(FG01EventPointIDStruct InEventPointID, EG01QStackPeriodJumpType InJumpType) {
}

void AG01QuestObjectBase::Cmd_QA_AddCrown(bool InIsImperial, int32 InNum) {
}

void AG01QuestObjectBase::Cmd_QA_ActivityLaunch(FG01ActivityID InActivityID) {
}

void AG01QuestObjectBase::Cmd_QA_ActivityComplete(FG01ActivityID InActivityID) {
}

void AG01QuestObjectBase::Cmd_QA_ActivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex) {
}

void AG01QuestObjectBase::Cmd_QA_ActivateAbilitySystem() {
}

void AG01QuestObjectBase::Cmd_CA_PlayGoComplete() {
}

void AG01QuestObjectBase::Cmd_CA_PeriodJump(EQuestBufferIndex InBufferIndex) {
}

void AG01QuestObjectBase::Cmd_CA_PartyStatusLevelTotal(int32 InPartyIndex, TArray<EG01BattleArtsType> InArtsTypeList, int32 InLevel) {
}

void AG01QuestObjectBase::Cmd_CA_PartyStatusLevel(int32 InPartyIndex, EG01BattleArtsType InArtsType, int32 InLevel) {
}

void AG01QuestObjectBase::Cmd_CA_PartySpellLevelTotal(int32 InPartyIndex, int32 InLevel, FFlagIDListViewStruct InUmbroFlagID) {
}

void AG01QuestObjectBase::Cmd_CA_PartySkillLevelTotal(int32 InPartyIndex, int32 InLevel) {
}

void AG01QuestObjectBase::Cmd_CA_PartyChange(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FG01CharaClassID InClassId) {
}

void AG01QuestObjectBase::Cmd_CA_ItemCollect(EQuestBufferIndex InBufferIndex, FName InItemID, int32 InCollectItemNum, bool InIsCheckInventory) {
}

void AG01QuestObjectBase::Cmd_CA_ImperialLevel(int32 InLevel) {
}

void AG01QuestObjectBase::Cmd_CA_GenerationCount(EQuestBufferIndex InBufferIndex, int32 InGenerationCount, bool InIsTotal) {
}

void AG01QuestObjectBase::Cmd_CA_EnemyDefeat_Field(EQuestBufferIndex InBufferIndex, TSoftClassPtr<AG01FieldEnemyBase> InEnemyClass, EG01QCEnemyDefeatCheckSpace InCheckSpace, TSoftObjectPtr<UWorld> InCheckWorld, EG01QCEnemyDefeatTargetNumType InTargetNumType, int32 InDefeatNum) {
}

void AG01QuestObjectBase::Cmd_CA_EnemyDefeat_Battle(EQuestBufferIndex InBufferIndex, TSoftClassPtr<ACharacterVisualActor> InVisualActorClass, EG01QCEnemyDefeatCheckSpace InCheckSpace, TSoftObjectPtr<UWorld> InCheckWorld, EG01QCEnemyDefeatTargetNumType InTargetNumType, int32 InDefeatNum) {
}

void AG01QuestObjectBase::Cmd_CA_EmperorSuccession(FG01CharaClassID InClassId, EG01EmperorSuccessionType InType) {
}

void AG01QuestObjectBase::Cmd_CA_DevelopedEquipment(FG01BlackSmithMenuIDStruct InEquipID) {
}

void AG01QuestObjectBase::Cmd_CA_DefeatSevenHeroes(EQuestBufferIndex InBufferIndex, int32 InCount) {
}

void AG01QuestObjectBase::Cmd_CA_ClearAreaCount(EQuestBufferIndex InBufferIndex, int32 InCountNum, bool InIsTotalCount) {
}

void AG01QuestObjectBase::Cmd_CA_CheckDLC(int32 InDLCIndex, bool InIsEnable) {
}

void AG01QuestObjectBase::Cmd_CA_BlackSmithLevel(int32 InLevel) {
}

void AG01QuestObjectBase::Cmd_CA_BlackSmithEquipState(FG01BlackSmithMenuIDStruct InEquipID, EG01BlackSmithMenuStateEnum InState) {
}

void AG01QuestObjectBase::Cmd_CA_BattleEnd_Transient(FName InBattleID, int32 InEndTypeMask, int32 InEndCount, bool InIsLastEmperor) {
}

void AG01QuestObjectBase::Cmd_CA_BattleEnd(EQuestBufferIndex InBufferIndex, FName InBattleID, int32 InEndTypeMask, int32 InEndCount, bool InIsLastEmperor) {
}


