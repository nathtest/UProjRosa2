#include "G01BattleLinkController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequencerManagerAccessCompo -FallbackName=SequencerManagerAccessCompo
#include "G01AbilityManagerAccessor.h"
#include "G01BattleArtsManagerAccessor.h"
#include "G01BattleCommandManagerAccessor.h"
#include "G01TeacherManagerAccessor.h"

AG01BattleLinkController::AG01BattleLinkController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BattleArtsManagerAccessor = CreateDefaultSubobject<UG01BattleArtsManagerAccessor>(TEXT("BattleArtsManagerAccessor"));
    this->BattleCommandManagerAccessor = CreateDefaultSubobject<UG01BattleCommandManagerAccessor>(TEXT("BattleCommandManagerAccessor"));
    this->BattleManagerAccessor = NULL;
    this->AbilityManagerAccessor = CreateDefaultSubobject<UG01AbilityManagerAccessor>(TEXT("AbilityManagerAccessor"));
    this->SequencerManagerAccessor = CreateDefaultSubobject<USequencerManagerAccessCompo>(TEXT("SequencerManagerAccessor"));
    this->FlagSystemManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagSystemManagerAccessor"));
    this->TeacherManagerAccessor = CreateDefaultSubobject<UG01TeacherManagerAccessor>(TEXT("TeacherManager"));
    this->CameraRootForEffect = CreateDefaultSubobject<USceneComponent>(TEXT("CameraRootForEffect"));
    this->LinkDataAsset = NULL;
    this->LinkJoinCountMin = 2;
    this->LinkJoinCountMax = 5;
    this->InvolveCountForCritical = 0;
    this->LinkExecCountTotal = 0;
    this->SystemEnable = false;
    this->OverDriveGaugeMax = 0;
    this->OverDriveGauge = 0;
    this->LinkJoinCountLimit = 0;
    this->ComboCount = 0;
    this->LinkGaugeConsumedCost = 0;
    this->LinkIntroSeqSource = NULL;
    this->AttachCameraActor = NULL;
    this->LinkIntroTask = NULL;
    this->CurrentLinkSeqSource = NULL;
    this->InterpLinkOrder = -1;
}

void AG01BattleLinkController::UpdateLinkSystemMode_Implementation() {
}

void AG01BattleLinkController::UnloadIntroSequence() {
}

void AG01BattleLinkController::TryConsumeGauge(int32& OutConsumedGauge) {
}

void AG01BattleLinkController::SetSystemModeOnBattleStart() {
}

void AG01BattleLinkController::SetLinkSystemMode(bool InEnable, int32 InLevel) {
}

void AG01BattleLinkController::SetLinkSetting(const FG01BattleLinkSettingTableRow& InLinkSetting) {
}

void AG01BattleLinkController::SetLinkRequestByDebug(const FG01BattleLinkRequestCommand& InLinkRequest) {
}

void AG01BattleLinkController::SetInitialGauge(int32 InSavedGauge, const FG01BattleSetupData& InBattleSetup) {
}

void AG01BattleLinkController::SetGauge(int32 InGauge) {
}

void AG01BattleLinkController::SetAvailablePlacementTag(const TArray<FName>& InTagList) {
}

void AG01BattleLinkController::OnStartLinkAction() {
}

void AG01BattleLinkController::OnEndLinkAction() {
}

void AG01BattleLinkController::OnDecideLinkCommand() {
}

void AG01BattleLinkController::MakeLinkCommandList(AActor* InSource, bool& ReCanLink, TArray<FG01BattleLinkCommandStruct>& ReLinkCommand) {
}

void AG01BattleLinkController::LotteryLinkIntroSequence(int32 InLinkCount, AG01SequenceControllerBase*& OutSeqCtrl) {
}

void AG01BattleLinkController::LoadIntroSequence() {
}

void AG01BattleLinkController::IsSystemEnable(bool& OutEnable) {
}

void AG01BattleLinkController::IsLinkAvailableGauge(bool& Re) {
}

void AG01BattleLinkController::GetSystemJoinCountRange(int32& OutJoinMin, int32& OutJoinMax) {
}

void AG01BattleLinkController::GetLinkPlaySetting(int32 InLinkOrder, int32 InLinkNum, FG01BattleLinkPlaySetting& OutSetting) {
}

void AG01BattleLinkController::GetLinkExecCountPerJoin(int32 InJoinCount, int32& OutExecCount) {
}

void AG01BattleLinkController::GetLinkExecCount(int32& OutExecCount) {
}

void AG01BattleLinkController::GetLinkCommandDebugInfo(AActor* InSource, FG01BattleLinkCommandDebugInfo& OutInfo) {
}

void AG01BattleLinkController::GetLevelJoinCountRange(int32& OutJoinMin, int32& OutJoinMax) {
}

void AG01BattleLinkController::GetGaugeMax(int32& OutGaugeMax) {
}

void AG01BattleLinkController::GetGauge(int32& ReGauge) {
}

void AG01BattleLinkController::GetCurrentJoinCountRange(int32& OutJoinMin, int32& OutJoinMax) {
}

void AG01BattleLinkController::GetComboCount(int32& OutCount) {
}

void AG01BattleLinkController::GetAvailableJoinCountRange_Implementation(int32& OutJoinMin, int32& OutJoinMax) {
}

void AG01BattleLinkController::GetAttachToCameraRoot(USceneComponent*& OutRoot) {
}

void AG01BattleLinkController::FindLinkPlacementOrder(int32 InLinkOrder, bool& OutFound, int32& OutPlacementOrder) {
}

void AG01BattleLinkController::FindLinkCameraRange(int32 InLinkOrder, bool& OutFound, EG01BattleLinkCameraRange& OutCameraRange) {
}

void AG01BattleLinkController::ConvertOriginTransform(int32 InLinkOrder, const FTransform& InTransform, FTransform& OutTransform) {
}


void AG01BattleLinkController::CalcLinkGaugeCost(int32 InCount, int32& OutCost) {
}

void AG01BattleLinkController::CalcJoinLimitCount(int32& OutCount) {
}



void AG01BattleLinkController::CalcCommandTotalScore_Implementation(EG01BattleLinkCommandPlan InPlan, int32 InPowerScore, int32 InRangeScore, int32 InArtsScore, int32& OutScore) const {
}

void AG01BattleLinkController::CalcCommandScoreForRange_Implementation(AActor* InCharacter, FName InArtsID, const FG01BattleArtsTableRow& InArts, FName InWeaponId, int32& OutScore) const {
}

void AG01BattleLinkController::CalcCommandScoreForPower_Implementation(AActor* InCharacter, FName InArtsID, const FG01BattleArtsTableRow& InArts, FName InWeaponId, int32& OutScore) const {
}



void AG01BattleLinkController::AddGaugeOnSurpriseAttackHit(AActor* InSource, TArray<AActor*> InTargetList) {
}

void AG01BattleLinkController::AddGaugeOnExtarnal(AActor* InSource, int32 InGauge) {
}

void AG01BattleLinkController::AddGaugeOnDamage(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttack, const FG01AttackResultInfo& InResult) {
}


