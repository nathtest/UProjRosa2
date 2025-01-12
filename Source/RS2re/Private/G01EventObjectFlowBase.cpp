#include "G01EventObjectFlowBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LoadScreenManagerAccessor -FallbackName=LoadScreenManagerAccessor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ScreenTransitionManagerAccessor -FallbackName=ScreenTransitionManagerAccessor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiManagerAccessor -FallbackName=UiManagerAccessor
#include "G01BattleManagerAccessor.h"
#include "G01BlackSmithManagerAccessor.h"
#include "G01CharacterManagerAccessor.h"
#include "G01ChronologyUiControllerAccessor.h"
#include "G01ClassInfoManagerAccessor.h"
#include "G01ClearAreaManagerAccessor.h"
#include "G01EnvironmentManagerAccessor.h"
#include "G01FacilityDevelopmentUiControllerAccessor.h"
#include "G01FieldEnemyGeneratorManagerAccessor.h"
#include "G01FieldNpcGeneratorManagerAccessor.h"
#include "G01FieldPlayerManagerAccessor.h"
#include "G01GameForceFeedbackManagerAccessor.h"
#include "G01GamePlayDataManagerAccessor.h"
#include "G01GameSystemDataManagerAccessor.h"
#include "G01HerosMemoryUiControllerAccessor.h"
#include "G01HistoryManagerAccessor.h"
#include "G01InventoryManagerAccessor.h"
#include "G01MainMenuManagerAccessor.h"
#include "G01MusicAppreciationUiControllerAccessor.h"
#include "G01PartyFormationManagerAccessor.h"
#include "G01PartyManagerAccessor.h"
#include "G01PeriodManagerAccessor.h"
#include "G01QuestManagerAccessor.h"
#include "G01ReasonUiControllerAccessor.h"
#include "G01RoomManagerAccessor.h"
#include "G01SaveDataManagerAccessor.h"
#include "G01SaveLoadManagerAccessor.h"
#include "G01ShopUiControllerAccessor.h"
#include "G01SkillArtsDojoManagerAccessor.h"
#include "G01SpellInstituteManagerAccessor.h"
#include "G01StaffRollUiControllerAccessor.h"
#include "G01UniversityManagerAccessor.h"
#include "G01WalletUiControllerAccessor.h"
#include "Templates/SubclassOf.h"

AG01EventObjectFlowBase::AG01EventObjectFlowBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MBattleManagerAccessor = CreateDefaultSubobject<UG01BattleManagerAccessor>(TEXT("BattleManagerAccessor"));
    this->PartyManagerAccessor = CreateDefaultSubobject<UG01PartyManagerAccessor>(TEXT("PartyManagerAccessor"));
    this->CharacterManagerAccessor = CreateDefaultSubobject<UG01CharacterManagerAccessor>(TEXT("CharacterManagerAccessor"));
    this->G01QuestManagerAccessor = CreateDefaultSubobject<UG01QuestManagerAccessor>(TEXT("G01QuestManagerAccessor"));
    this->PeriodManagerAccessor = CreateDefaultSubobject<UG01PeriodManagerAccessor>(TEXT("PeriodManagerAccessor"));
    this->GamePlayDataManagerAccessor = CreateDefaultSubobject<UG01GamePlayDataManagerAccessor>(TEXT("GamePlayDataManagerAccessor"));
    this->FieldPlayerManagerAccessor = CreateDefaultSubobject<UG01FieldPlayerManagerAccessor>(TEXT("FieldPlayerManagerAccessor"));
    this->MGimmickManagerAccessor = NULL;
    this->InventoryManagerAccessor = CreateDefaultSubobject<UG01InventoryManagerAccessor>(TEXT("InventoryManagerAccessor"));
    this->ClassInfoManagerAccessor = CreateDefaultSubobject<UG01ClassInfoManagerAccessor>(TEXT("ClassInfoManagerAccessor"));
    this->EnvironmentManagerAccessor = CreateDefaultSubobject<UG01EnvironmentManagerAccessor>(TEXT("EnvironmentManagerAccessor"));
    this->FieldEnemyGeneratorManagerAccessor = CreateDefaultSubobject<UG01FieldEnemyGeneratorManagerAccessor>(TEXT("FieldEnemyGeneratorManagerAccessor"));
    this->FieldNpcGeneratorManagerAccessor = CreateDefaultSubobject<UG01FieldNpcGeneratorManagerAccessor>(TEXT("FieldNpcGeneratorManagerAccessor"));
    this->ClearAreaManagerAccessor = CreateDefaultSubobject<UG01ClearAreaManagerAccessor>(TEXT("ClearAreaManagerAccessor"));
    this->PartyFormationManagerAccessor = CreateDefaultSubobject<UG01PartyFormationManagerAccessor>(TEXT("PartyFormationManagerAccessor"));
    this->SaveLoadManagerAccessor = CreateDefaultSubobject<UG01SaveLoadManagerAccessor>(TEXT("SaveLoadManagerAccessor"));
    this->UniversityManagerAccessor = CreateDefaultSubobject<UG01UniversityManagerAccessor>(TEXT("UniversityManagerAccessor"));
    this->MusicAppreciationUiControllerAccessor = CreateDefaultSubobject<UG01MusicAppreciationUiControllerAccessor>(TEXT("MusicAppreciationUiControllerAccessor"));
    this->WalletUiControllerAccessor = CreateDefaultSubobject<UG01WalletUiControllerAccessor>(TEXT("WalletUiControllerAccessor"));
    this->RoomManagerAccessor = CreateDefaultSubobject<UG01RoomManagerAccessor>(TEXT("RoomManagerAccessor"));
    this->ScreenTransitionManagerAccesser = CreateDefaultSubobject<UScreenTransitionManagerAccessor>(TEXT("ScreenTransitionManagerAccesser"));
    this->ShopUiControllerAccessor = CreateDefaultSubobject<UG01ShopUiControllerAccessor>(TEXT("ShopUiControllerAccessor"));
    this->MainMenuManagerAccessor = CreateDefaultSubobject<UG01MainMenuManagerAccessor>(TEXT("MainMenuManagerAccessor"));
    this->LoadScreenManagerAccessor = CreateDefaultSubobject<ULoadScreenManagerAccessor>(TEXT("LoadScreenManagerAccessor"));
    this->ReasonUiControllerAccessor = CreateDefaultSubobject<UG01ReasonUiControllerAccessor>(TEXT("ReasonUiControllerAccesser"));
    this->FacilityDevelopmentAccessor = CreateDefaultSubobject<UG01FacilityDevelopmentUiControllerAccessor>(TEXT("FacilityDevelopmentAccessor"));
    this->HistoryManagerAccessor = CreateDefaultSubobject<UG01HistoryManagerAccessor>(TEXT("HistoryManagerAccessor"));
    this->G01SaveDataManagerAccessor = CreateDefaultSubobject<UG01SaveDataManagerAccessor>(TEXT("G01SaveDataManagerAccessor"));
    this->StaffRollAccessor = CreateDefaultSubobject<UG01StaffRollUiControllerAccessor>(TEXT("StaffRollAccessor"));
    this->ChronologyAccessor = CreateDefaultSubobject<UG01ChronologyUiControllerAccessor>(TEXT("ChronologyAccessor"));
    this->GameSystemAccessor = CreateDefaultSubobject<UG01GameSystemDataManagerAccessor>(TEXT("GameSystemAccessor"));
    this->BlackSmithManagerAccessor = CreateDefaultSubobject<UG01BlackSmithManagerAccessor>(TEXT("BlackSmithManagerAccessor"));
    this->SkillArtsDojoManagerAccessor = CreateDefaultSubobject<UG01SkillArtsDojoManagerAccessor>(TEXT("SkillArtsDojoManagerAccessor"));
    this->SpellInstituteManagerAccessor = CreateDefaultSubobject<UG01SpellInstituteManagerAccessor>(TEXT("SpellInstituteManagerAccessor"));
    this->HerosMemoryMenuAccessor = CreateDefaultSubobject<UG01HerosMemoryUiControllerAccessor>(TEXT("HerosMemoryMenuAccessor"));
    this->GameForceFeedbackManagerAccessor = CreateDefaultSubobject<UG01GameForceFeedbackManagerAccessor>(TEXT("GameForceFeedbackManagerAccessor"));
    this->UiManagerAccessor = CreateDefaultSubobject<UUiManagerAccessor>(TEXT("UiManagerAccessor"));
    this->IsDisablePlayerInput = false;
    this->IsPlayingMontage = false;
    this->IsCloseToParty = false;
}

void AG01EventObjectFlowBase::Cmd_FA_WalletCalcCrown(int32 InValue, bool InIsEnd) {
}

void AG01EventObjectFlowBase::Cmd_FA_WalletActive(bool InIsActive) {
}

void AG01EventObjectFlowBase::Cmd_FA_WaitDialogClose() {
}

void AG01EventObjectFlowBase::Cmd_FA_WaitBattleEnd(const FName InBattleID, bool& OutIsTargetBattle) {
}

void AG01EventObjectFlowBase::Cmd_FA_UnlockEmperorSuccession() {
}

void AG01EventObjectFlowBase::Cmd_FA_UnlockAchievementProgress(FG01AchievementID InAchievementID, float InProgress) {
}

void AG01EventObjectFlowBase::Cmd_FA_UnlockAchievement(FG01AchievementID InAchievementID) {
}

void AG01EventObjectFlowBase::Cmd_FA_StopPlayerTurnOnTarget() {
}

void AG01EventObjectFlowBase::Cmd_FA_StopNpcReaction(FEditableLevelObjectID InLevelObjectID) {
}

void AG01EventObjectFlowBase::Cmd_FA_StopForceFeedback(const FForceFeedbackCommonParams& InParams) {
}

void AG01EventObjectFlowBase::Cmd_FA_StartReadyMove(const FTransform& InTransform, const float InTime) {
}

void AG01EventObjectFlowBase::Cmd_FA_StartPointCamera(const FVector& InLocation, const float InAlpha) {
}

void AG01EventObjectFlowBase::Cmd_FA_StartPlayerTurnOnTarget(FEditableLevelObjectID InLevelObjectID) {
}

void AG01EventObjectFlowBase::Cmd_FA_StartForceMove(const FVector& InLocation, const float InToleranceDistance, bool InIsWait, EAISpeed InMoveType, bool InPausedCamera) {
}

void AG01EventObjectFlowBase::Cmd_FA_StartCameraShake(TSubclassOf<UCameraShakeBase> InShakeClass, bool InIsDisablePlayerInput) {
}

void AG01EventObjectFlowBase::Cmd_FA_SetupEnvironmentByEnvPresetDataAsset(FG01EnvPresetDataAssetID InEnvPresetDataAssetID) const {
}

void AG01EventObjectFlowBase::Cmd_FA_SetTalkReaction(FEditableLevelObjectID InLevelObjectID, FG01NpcReactionAnimIDStruct InNpcReactionAnimID) {
}

void AG01EventObjectFlowBase::Cmd_FA_SetReleaseFriendClass(EG01FriendClass InFriendClass) {
}

void AG01EventObjectFlowBase::Cmd_FA_SetPlayerCharacterID(const FName InCharacterId) {
}

void AG01EventObjectFlowBase::Cmd_FA_SetIsClear(bool InIsClear) {
}

void AG01EventObjectFlowBase::Cmd_FA_SetEnemyAIState(FEditableLevelObjectID InEnemyLevelObjectID, EAIState InCurrentAIState, EAIState InChangeAIState) {
}

void AG01EventObjectFlowBase::Cmd_FA_SetEnableGaze(bool InEnable) {
}

void AG01EventObjectFlowBase::Cmd_FA_SetDreadQueenDungeonDiskParameter(const FName InName, float InValue) {
}

void AG01EventObjectFlowBase::Cmd_FA_SetDeathCharacterByClassID(const FG01CharaClassID InClassId) {
}

void AG01EventObjectFlowBase::Cmd_FA_SetDeathCharacter(const FG01CharacterID InCharaID) {
}

void AG01EventObjectFlowBase::Cmd_FA_SetCharacterVisualType(FG01CharacterID InCharacterId, EG01CharacterVisualType InVisualType) {
}

void AG01EventObjectFlowBase::Cmd_FA_SetCharacterVariationType(FG01VariationCharaIDStruct InVariationCharacterID, EG01CharacterVariationType InVariationType) {
}

void AG01EventObjectFlowBase::Cmd_FA_ScreenTransitionOut(float InTime) {
}

void AG01EventObjectFlowBase::Cmd_FA_ScreenTransitionIn(EScreenTransitionType InType, float InTime) {
}

void AG01EventObjectFlowBase::Cmd_FA_RestoreParty(int32 InPartyIndex) {
}

void AG01EventObjectFlowBase::Cmd_FA_ResetPlayerCharacterID() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestWaitBattleSealed() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestTeacherMenu() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestStaffRoll() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestSpellInstitute(AActor* Actor) {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestSkillArtsDojo(AActor* Actor) {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestSimpleLoad() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestShopMenu(FG01ShopIDStruct ShopID, AActor* Actor) {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestSaveScreen() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestReturnToTitleSave() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestReason() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestPartyFormationFriendFromBlackSmith(AActor* Actor, FG01CharacterID CharacterID) {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestPartyFormationFriend(AActor* Actor, FG01CharacterID CharacterID) {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestPartyFormation(AActor* Actor, FG01PartyFormationReactionTypeIDStruct ReactionID) {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestMusicAppreciation() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestLoseBattleAnimation() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestLoadScreen() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestImperialUniversityMenu(AActor* Actor) {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestHerosMemoryMenu() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestHerosMemoryLoad() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestFirstImperialTest() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestFacilityDevelop() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestEmperorSuccessionByClassID(const TArray<FG01CharaClassID> InPickupClassIDList) {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestEmperorSuccession(EG01EmperorSuccessionType InEmperorSuccessionType) {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestDemoPageFinish() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestClearArea(EG01AreaId InAreaID) {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestChronology() {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestButtonNavi(FInputMappingName InputParam, FText TextID, float DispTime, bool PushErase) {
}

void AG01EventObjectFlowBase::Cmd_FA_RequestBlackSmith(AActor* Actor, bool IsFirst) {
}

void AG01EventObjectFlowBase::Cmd_FA_RemoveStoryClearFlags(int32 InFlags) {
}

void AG01EventObjectFlowBase::Cmd_FA_RemoveInventoryItem(int32& OutRemainNum, FName InItemID, int32 InRemoveNum) {
}

void AG01EventObjectFlowBase::Cmd_FA_RemoveButtonNavi() {
}

void AG01EventObjectFlowBase::Cmd_FA_RegenerateFriendNpcDirect() {
}

void AG01EventObjectFlowBase::Cmd_FA_RegenerateFriendNpc() {
}

void AG01EventObjectFlowBase::Cmd_FA_RecordEventInfo(FG01EventTriggerID InEventTriggerID) {
}

void AG01EventObjectFlowBase::Cmd_FA_PlayNpcReaction(FEditableLevelObjectID InLevelObjectID, FG01NpcReactionAnimIDStruct InNpcReactionAnimID, FName InSectionName, FLatentActionInfo InLatentInfo) {
}

void AG01EventObjectFlowBase::Cmd_FA_PlayForceFeedback(const FForceFeedbackPlayParams& InParams) {
}

void AG01EventObjectFlowBase::Cmd_FA_PlayEffect(FEditableLevelObjectID InLevelObjectID, FVFXID InEffectID, FVFXExternalParam InParam) {
}

void AG01EventObjectFlowBase::Cmd_FA_LockEmperorSuccession() {
}

void AG01EventObjectFlowBase::Cmd_FA_LeavePartyByPartyIndex(int32 InPartyIndex, bool InIsDeath) {
}

void AG01EventObjectFlowBase::Cmd_FA_LeavePartyByClassID(FG01CharaClassID InClassId, bool InIsDeath) {
}

void AG01EventObjectFlowBase::Cmd_FA_JoinPartyByClassID(FG01CharaClassID InClassId, int32 InPartyIndex) {
}

void AG01EventObjectFlowBase::Cmd_FA_JoinPartyByCharaID(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FG01CharacterID InCharacterId, int32 InJoinPartyIndex) {
}

void AG01EventObjectFlowBase::Cmd_FA_JoinParty(TEnumAsByte<EG01PartyJoinType::Type> InJoinType, FEditableLevelObjectID InJoinLevelObjectID, int32 InJoinPartyIndex) {
}

FG01NpcReactionAnimIDStruct AG01EventObjectFlowBase::Cmd_FA_GetTalkReaction(FEditableLevelObjectID InLevelObjectID) {
    return FG01NpcReactionAnimIDStruct{};
}

AActor* AG01EventObjectFlowBase::Cmd_FA_GetPlayerTurnTarget() {
    return NULL;
}

void AG01EventObjectFlowBase::Cmd_FA_GetPlayerCharacterID(FG01CharacterID& OutCharacterId) {
}

void AG01EventObjectFlowBase::Cmd_FA_GetPartyMemberStatus(int32 InPartyIndex, FG01CharaStatus& OutDefaultStatus, FG01CharaStatus& OutCurrentStatus) {
}

void AG01EventObjectFlowBase::Cmd_FA_GetPartyClassInfo(int32 InPartyIndex, bool& OutIsExist, FG01ClassInfoTableRow& OutInfo) {
}

bool AG01EventObjectFlowBase::Cmd_FA_GetMaxDamageWeapon(FName InWeaponCategory, FG01InventoryItemStruct& OutData) {
    return false;
}

void AG01EventObjectFlowBase::Cmd_FA_GetLeaveCollisionLocation(FVector& OutLocation) {
}

void AG01EventObjectFlowBase::Cmd_FA_GetIsClear(bool& OutIsClear) {
}

void AG01EventObjectFlowBase::Cmd_FA_GetEventRecord(FG01EventHistoryRecord& OutEventRecord, FG01EventTriggerID InEventTriggerID, bool InIsConvertToGeneration) {
}

bool AG01EventObjectFlowBase::Cmd_FA_GetEnableGaze() {
    return false;
}

void AG01EventObjectFlowBase::Cmd_FA_GetEmperorClassID(FG01CharaClassID& OutClassID) {
}

void AG01EventObjectFlowBase::Cmd_FA_GetEmperorCharacterID(FG01CharacterID& OutCharacterId) {
}

void AG01EventObjectFlowBase::Cmd_FA_GetDifficultyType(EG01GameDifficultyType& OutDifficultyType) const {
}

void AG01EventObjectFlowBase::Cmd_FA_GetCurrentYears(int32& OutYears) {
}

FLevelTransitionInfo AG01EventObjectFlowBase::Cmd_FA_GetCurrentLevelInfo() {
    return FLevelTransitionInfo{};
}

void AG01EventObjectFlowBase::Cmd_FA_GetClearAreaNum(int32& OutClearAreaNum) {
}

void AG01EventObjectFlowBase::Cmd_FA_GetChoiceWindowResult(int32 InEventKey, int32& OutSelectedIndex) {
}

void AG01EventObjectFlowBase::Cmd_FA_GetCharacterVisualType(FG01CharacterID InCharacterId, EG01CharacterVisualType& OutVisualType) {
}

void AG01EventObjectFlowBase::Cmd_FA_GetCharacterVariationType(FG01VariationCharaIDStruct InVariationCharacterID, EG01CharacterVariationType& OutVariationType) {
}

void AG01EventObjectFlowBase::Cmd_FA_GetBattleResult(FG01BattleEndNotifyData& OutResult) {
}

void AG01EventObjectFlowBase::Cmd_FA_ExecuteDarkStoneRingProcess() {
}

void AG01EventObjectFlowBase::Cmd_FA_EquipmentInventoryItem(FG01CharacterID InCharacterId, FName InItemID, EG01InventoryItemEquiomentType InEquipmentType) {
}

void AG01EventObjectFlowBase::Cmd_FA_EnableInputPlayer() {
}

void AG01EventObjectFlowBase::Cmd_FA_DisableInputPlayer() {
}

void AG01EventObjectFlowBase::Cmd_FA_DeactivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex) {
}

void AG01EventObjectFlowBase::Cmd_FA_CloseWindow() {
}

void AG01EventObjectFlowBase::Cmd_FA_CheckUnlockEmperorSuccession(bool& OutIsUnlock) {
}

bool AG01EventObjectFlowBase::Cmd_FA_CheckTransitionFromSaveRestore() const {
    return false;
}

void AG01EventObjectFlowBase::Cmd_FA_CheckStoryClearFlags(bool& OutHasAllFlags, int32 InFlags) {
}

void AG01EventObjectFlowBase::Cmd_FA_CheckReleasePlayableClass(EG01FriendClass InPlayableClass, bool& OutIsRelease) const {
}

void AG01EventObjectFlowBase::Cmd_FA_CheckReleaseFriendClass(EG01FriendClass InFriendClass, bool& OutIsRelease) const {
}

void AG01EventObjectFlowBase::Cmd_FA_CheckPlayGoCompleted(bool& OutIsCompleted) const {
}

void AG01EventObjectFlowBase::Cmd_FA_CheckPartyMemberClass(int32 InPartyIndex, FG01CharaClassID InClassId, bool& OutIsSame) const {
}

void AG01EventObjectFlowBase::Cmd_FA_CheckInventoryItem(bool& OutResult, FName InItemID, EGeneralCompareOperator InOperator, int32 InCompareNum) const {
}

void AG01EventObjectFlowBase::Cmd_FA_CheckEquipmentItem(bool& OutResult, FName InItemID) const {
}

void AG01EventObjectFlowBase::Cmd_FA_CheckEnvironment(FG01EnvPresetDataAssetID InPresetID, bool& OutIsSame) const {
}

void AG01EventObjectFlowBase::Cmd_FA_CheckCrownNum(bool& OutResult, bool InIsImperial, EGeneralCompareOperator InOperator, int32 InCompareNum) const {
}

void AG01EventObjectFlowBase::Cmd_FA_CheckActiveTalkCamera(bool& OutIsActive, AActor*& OutTalkTargetActor) {
}

void AG01EventObjectFlowBase::Cmd_FA_ChangeTalkCamera(const AActor* InOverrideTalkTargetActor) {
}

void AG01EventObjectFlowBase::Cmd_FA_ChangeRoom(FRoomID InRoomId, bool InForceNotify) {
}

void AG01EventObjectFlowBase::Cmd_FA_ChangeIncomeEventFlag(FG01IncomeEventIDStruct InIncomeEventID, bool InIsActive) {
}

void AG01EventObjectFlowBase::Cmd_FA_ChangeEmperor(const FName InCharacterId, EG01EmperorSuccessionType InEmperorSuccessionType) {
}

void AG01EventObjectFlowBase::Cmd_FA_CancelTalkCamera() {
}

void AG01EventObjectFlowBase::Cmd_FA_CancelReleaseFriendClass(EG01FriendClass InFriendClass) {
}

void AG01EventObjectFlowBase::Cmd_FA_CancelDeathCharacter(const FG01CharacterID InCharaID) {
}

void AG01EventObjectFlowBase::Cmd_FA_BeginStoneShrineEffectFadeOut() {
}

void AG01EventObjectFlowBase::Cmd_FA_BeginStoneShrineEffectFadeIn() {
}

void AG01EventObjectFlowBase::Cmd_FA_BattleStartOnName(const FName InBattleID) {
}

void AG01EventObjectFlowBase::Cmd_FA_BattleStartOnData(const FG01BattleSetupData& InData) {
}

void AG01EventObjectFlowBase::Cmd_FA_AddYears(int32 InYears, bool InIsForcePeriodJump) {
}

void AG01EventObjectFlowBase::Cmd_FA_AddStoryClearFlags(int32 InFlags) {
}

void AG01EventObjectFlowBase::Cmd_FA_AddInventoryItem(int32& OutRemainNum, FName InItemID, int32 InAddNum) {
}

void AG01EventObjectFlowBase::Cmd_FA_AddEventPoint(bool& OutIsPeriodJumped, FG01EventPointIDStruct InEventPointID, bool InIsAllowPeriodJump) {
}

void AG01EventObjectFlowBase::Cmd_FA_AddCrown(bool InIsImperial, int32 InNum) {
}

void AG01EventObjectFlowBase::Cmd_FA_ActivityLaunch(FG01ActivityID InActivityID) {
}

void AG01EventObjectFlowBase::Cmd_FA_ActivityComplete(FG01ActivityID InActivityID) {
}

void AG01EventObjectFlowBase::Cmd_FA_ActivateChronicle(TSoftClassPtr<AQuestObjectBase> InQuestClass, int32 InChronicleIndex) {
}

void AG01EventObjectFlowBase::Cmd_CU_Talk(FEditableLevelObjectID InSpeakerLevelObjectID, FName InMessageTextID, FG01TextFindArgs InArgs, bool InIsAutoClose, bool InIsChangeAIState) {
}

void AG01EventObjectFlowBase::Cmd_CU_SimpleTalk(FEditableLevelObjectID InSpeakerLevelObjectID, FName InMessageTextID, FG01TextFindArgs InArgs, FG01EventSimpleTalkDisplayPreset InDisplayPreset, float InMinDisplayTime, float InMaxDisplayDistance) {
}

void AG01EventObjectFlowBase::Cmd_CU_ShowMsgWindow(TEnumAsByte<ETextJustify::Type> InJustify, FName InMessageTextID, FG01TextFindArgs InArgs) {
}

void AG01EventObjectFlowBase::Cmd_CU_ShowChoiceWindow(FEditableLevelObjectID InSpeakerLevelObjectID, const TArray<FName>& InChoiceMessageIDList, int32& OutEventKey) {
}


