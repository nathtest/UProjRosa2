#include "G01BattleManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01BattleManagerAccessor::UG01BattleManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_BATTLE;
}

void UG01BattleManagerAccessor::UpdateNextCommandList() {
}

void UG01BattleManagerAccessor::UpdateMapAspectEffect() {
}

void UG01BattleManagerAccessor::UnregisterBattleField(AG01BattleField* InBattleField) {
}

void UG01BattleManagerAccessor::TryRobDropItem(AActor* InSource, AActor* InTarget, int32 InDropSlotNo, bool& OutSuccess) {
}

void UG01BattleManagerAccessor::TryConsumeLinkGauge() {
}

void UG01BattleManagerAccessor::TryAbilityAffinityOpen(AActor* InTarget, EG01BattleArtsAttribute InAttr, bool InOpen) {
}

void UG01BattleManagerAccessor::ShowReinforceEnemy(int32 InFormationNo, bool& OutSuccess) {
}

bool UG01BattleManagerAccessor::SetupPassiveStatus(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor) {
    return false;
}

void UG01BattleManagerAccessor::SetMapAspectVisibility(bool Invisible) {
}

void UG01BattleManagerAccessor::SetCurrentSeqPlayer(const FG01BattleSequencePlayer& InSeqPlayer) {
}

void UG01BattleManagerAccessor::ReserveGotoTitleScreen() {
}

void UG01BattleManagerAccessor::ReserveGotoLastSavePoint() {
}

void UG01BattleManagerAccessor::ReserveBattleRetry() {
}

void UG01BattleManagerAccessor::RequestLinkInterp(AG01SequenceControllerBase* InFromSequence, AG01SequenceControllerBase* InToSequence, float InDuration, UCurveFloat* InCurve, bool& OutSuccess) {
}

void UG01BattleManagerAccessor::RequestEscape(bool& ReEscaped) {
}

void UG01BattleManagerAccessor::RequestChangeFormation(FName InFormationId, bool& ReChanged) {
}

void UG01BattleManagerAccessor::ReinforceEnemy(FG01BattleEnemyKeyStruct InEnemy, int32 InFormationNo, bool& OutSuccess, AActor*& OutEnemy) {
}

void UG01BattleManagerAccessor::RegisterBattleField(AG01BattleField* InBattleField) {
}

void UG01BattleManagerAccessor::OverrideMapAspect(const FG01MapAspectOverride& InOverride) {
}

void UG01BattleManagerAccessor::OnStartLinkIntroSequence(const TArray<AActor*>& InSourceList) {
}

void UG01BattleManagerAccessor::OnEndLinkIntroSequence(const TArray<AActor*>& InSourceList) {
}

void UG01BattleManagerAccessor::NotifyPlaybackTaskEnd(UG01BattleTask* InTask) {
}

void UG01BattleManagerAccessor::NotifyCommandTaskEnd(UG01BattleTask* InTask) {
}

void UG01BattleManagerAccessor::NotifyChangedPartyFormation() {
}

void UG01BattleManagerAccessor::MoveBattleFieldToOther(const FG01BattleFieldID InBattleFieldId, bool& OutSuccess, bool& OutReverted) {
}

void UG01BattleManagerAccessor::MarkCharacterStatusChange(AActor* InCharacter) {
}

void UG01BattleManagerAccessor::MakeAttackResultUniqueID(UG01BattleTask* InTask, AActor* InSource, int32 InHitNo, int32 InTargetNo, int32& ReUniqueID) {
}

void UG01BattleManagerAccessor::IsODGaugeHidden(bool& OutIsHidden) {
}

void UG01BattleManagerAccessor::IsEmptyEnemyFormationNo(int32 InFormationNo, bool& OutIsEmpty) {
}

void UG01BattleManagerAccessor::IsDuel(bool& Out) {
}

bool UG01BattleManagerAccessor::IsBattleActive() const {
    return false;
}

bool UG01BattleManagerAccessor::InitPassiveStatus(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor) {
    return false;
}

void UG01BattleManagerAccessor::GetTypeUseCount(EG01MapAspectType InType, int32& OutCount) {
}

void UG01BattleManagerAccessor::GetSystemLinkJoinCountRange(int32& OutJoinMin, int32& OutJoinMax) {
}

void UG01BattleManagerAccessor::GetRewardData(FG01BattleRewardData& OutReward) {
}

void UG01BattleManagerAccessor::GetReplaceActor(AActor* InTargetActor, AActor*& ReReplaceActor) {
}

void UG01BattleManagerAccessor::GetRemainTurnToRevert(int32& OutTurn) {
}

void UG01BattleManagerAccessor::GetPartyTeamRotation(FRotator& ReRotation) {
}

void UG01BattleManagerAccessor::GetPartyFormationPointTransform(int32 InFormationNo, FTransform& OutTransform) {
}

void UG01BattleManagerAccessor::GetPartyFormationCenter(AActor*& RePoint) {
}

void UG01BattleManagerAccessor::GetPartyCharacterCenter(AActor*& RePoint) {
}

void UG01BattleManagerAccessor::GetODGaugeMax(int32& OutGaugeMax) {
}

void UG01BattleManagerAccessor::GetODGauge(int32& ReGauge) {
}

void UG01BattleManagerAccessor::GetODComboCount(int32& OutCount) {
}

void UG01BattleManagerAccessor::GetObserverCallList(TArray<UObject*>& OutList) {
}

void UG01BattleManagerAccessor::GetNotDeadTeamCharacter(bool InEnemyTeam, TArray<AAppActor*>& OutCharacterList) {
}

void UG01BattleManagerAccessor::GetNotDeadPartyCharacter(TArray<AAppActor*>& ReCharacterList) {
}

void UG01BattleManagerAccessor::GetNotDeadEnemyCharacter(TArray<AAppActor*>& ReCharacterList) {
}

void UG01BattleManagerAccessor::GetNotDeadCharacter(TArray<AAppActor*>& ReCharacterList) {
}

void UG01BattleManagerAccessor::GetNextTurn(int32& ReTurn) {
}

FG01MapAspectResult UG01BattleManagerAccessor::GetMapAspectResult() {
    return FG01MapAspectResult{};
}

void UG01BattleManagerAccessor::GetLastTickedTime(FDateTime& OutTime) {
}

void UG01BattleManagerAccessor::GetHandle(UG01BattleManagerHandle*& OutHandle) {
}

void UG01BattleManagerAccessor::GetFreeAreaBox(FBox& OutBox) {
}

void UG01BattleManagerAccessor::GetFormationDataNextTurn(FG01BattlePartyFormationTableRow& OutData) {
}

void UG01BattleManagerAccessor::GetFormationData(FG01BattlePartyFormationTableRow& OutData) {
}

void UG01BattleManagerAccessor::GetExecCounterArts(AActor* InSource, AActor* InTarget, const FName& InArtsID, bool& OutIsCountered, FName& OutArtsName) {
}

void UG01BattleManagerAccessor::GetEscapeExpression(FG01BattleEscapeExpressionStruct& Re) {
}

void UG01BattleManagerAccessor::GetEnemyTeamRotation(FRotator& ReRotation) {
}

void UG01BattleManagerAccessor::GetEnemyFormationPointTransform(int32 InFormationNo, FTransform& OutTransform) {
}

void UG01BattleManagerAccessor::GetEnemyFormationCenter(AActor*& RePoint) {
}

void UG01BattleManagerAccessor::GetEnemyCharacterToWin(TArray<AAppActor*>& OutCharacterList) {
}

void UG01BattleManagerAccessor::GetEnemyCharacterCenter(AActor*& RePoint) {
}

void UG01BattleManagerAccessor::GetEmptyEnemyFormationNo(TArray<int32>& OutFormationNoList) {
}

void UG01BattleManagerAccessor::GetCurrentTurn(int32& ReTurn) {
}

void UG01BattleManagerAccessor::GetCurrentSpellLearn(bool& OutIsLearn, AActor*& OutCharacter) {
}

void UG01BattleManagerAccessor::GetCurrentSeqPlayer(bool& OutIsExist, FG01BattleSequencePlayer& OutSeqPlayer) {
}

void UG01BattleManagerAccessor::GetCurrentPartyFormation(FName& ReFormationId, int32& ReRank, bool& ReIsBreaked) {
}

void UG01BattleManagerAccessor::GetCurrentMapAspectFlow(FG01MapAspectFlowTableRow& OutFlow) {
}

void UG01BattleManagerAccessor::GetCurrentMapAspect(EG01MapAspectType& OutType) {
}

void UG01BattleManagerAccessor::GetCurrentLinkJoinCountRange(int32& OutJoinMin, int32& OutJoinMax) {
}

void UG01BattleManagerAccessor::GetCurrentAbilityMastery(bool& OutIsLearn, AActor*& OutCharacter) {
}

void UG01BattleManagerAccessor::GetCurrentAbilityLearn(bool& OutIsLearn, AActor*& OutCharacter) {
}

void UG01BattleManagerAccessor::GetCharacterTeamRotation(AActor* InActor, FRotator& ReRotation) {
}

void UG01BattleManagerAccessor::GetCharacterInFormation(AActor* InCharacter, EG01BattleCommandOperate InOperate, bool& ReFound, AActor*& ReCharacter) {
}

void UG01BattleManagerAccessor::GetCharacterCommandSpeedRateNextTurn(AActor* InCharacter, float& Re) {
}

void UG01BattleManagerAccessor::GetCharacterCommandSpeedRate(AActor* InCharacter, float& Re) {
}

void UG01BattleManagerAccessor::GetBattleSetupData(FG01BattleSetupData& Re) {
}

void UG01BattleManagerAccessor::GetBattlePresetId(FName& Re) {
}

void UG01BattleManagerAccessor::GetBattlePreset(FG01BattlePresetTableRow& Re) {
}

void UG01BattleManagerAccessor::GetBattleFieldList(TArray<AG01BattleField*>& OutList) {
}

void UG01BattleManagerAccessor::GetBattleField(AG01BattleField*& ReBattleField) {
}

void UG01BattleManagerAccessor::GetBattleData(FG01BattleData& Re) {
}

void UG01BattleManagerAccessor::GetAvailablePartyFormation(TArray<FName>& ReFormationIdList, TArray<int32>& ReRankList) {
}

void UG01BattleManagerAccessor::GetArtsLearnLevel(AActor* InSourceActor, AActor* InTargetActor, FName InArtsName, int32& OutLevel) {
}

void UG01BattleManagerAccessor::GetAllTeamCharacter(bool InEnemyTeam, TArray<AAppActor*>& OutCharacterList) {
}

void UG01BattleManagerAccessor::GetAllPartyCharacter(TArray<AAppActor*>& ReCharacterList) {
}

void UG01BattleManagerAccessor::GetAllEnemyCharacter(TArray<AAppActor*>& ReCharacterList) {
}

void UG01BattleManagerAccessor::GetAllCharacter(TArray<AAppActor*>& ReCharacterList) {
}

void UG01BattleManagerAccessor::GetAliveTeamCharacter(bool InEnemyTeam, TArray<AAppActor*>& OutCharacterList) {
}

void UG01BattleManagerAccessor::GetAlivePartyCharacter(TArray<AAppActor*>& ReCharacterList) {
}

void UG01BattleManagerAccessor::GetAliveEnemyCharacter(TArray<AAppActor*>& ReCharacterList) {
}

void UG01BattleManagerAccessor::GetAliveCharacter(TArray<AAppActor*>& ReCharacterList) {
}

void UG01BattleManagerAccessor::FindTaskEffectSetting(UG01BattleTask* InTask, bool& ReFound, FG01BattleArtsEffectSetting& ReSetting) {
}

void UG01BattleManagerAccessor::FindLinkPlaySetting(AActor* InSource, AActor* InTarget, FName InArtsID, bool& OutFound, FG01BattleLinkPlaySetting& OutSetting) {
}

void UG01BattleManagerAccessor::FindLinkPlacementOrder(int32 InLinkOrder, bool& OutFound, int32& OutPlacementOrder) {
}

void UG01BattleManagerAccessor::FindLinkOrderedChara(int32 InLinkOrder, bool& OutFound, AActor*& OutChara) {
}

void UG01BattleManagerAccessor::FindLinkCameraRange(int32 InLinkOrder, bool& OutFound, EG01BattleLinkCameraRange& OutCameraRange) {
}

void UG01BattleManagerAccessor::FindFormationPointDataNextTurn(AActor* InCharacter, bool& ReFound, FG01BattlePartyFormationPoint& RePointData) {
}

void UG01BattleManagerAccessor::FindFormationPointData(AActor* InCharacter, bool& ReFound, FG01BattlePartyFormationPoint& RePointData) {
}

void UG01BattleManagerAccessor::FindFormationNo(AActor* InCharacter, bool& ReFound, int32& ReFormationNo, int32& ReLineNo, int32& ReElemNo) {
}

void UG01BattleManagerAccessor::FindDuplicateNo(AActor* InCharacter, bool& ReFound, int32& ReDuplicateNo) {
}

void UG01BattleManagerAccessor::FindCurrentTaskEffectSetting(bool& ReFound, FG01BattleArtsEffectSetting& ReSetting) {
}

void UG01BattleManagerAccessor::FindCharacterIndex(AActor* InCharacter, bool& ReFound, int32& ReIndex) {
}

void UG01BattleManagerAccessor::FindArtsResource(FName InArtsID, AActor* InSourceActor, AActor* InTargetActor, bool& OutFound, AG01SequenceControllerBase*& OutSequenceCtrl, FG01BattleArtsSequenceSetting& OutSequenceSetting) {
}

void UG01BattleManagerAccessor::ExecuteCommandTask(UG01BattleTask* InTask) {
}

void UG01BattleManagerAccessor::DebugSetLinkRequest(const FG01BattleLinkRequestCommand& InLinkRequest) {
}

void UG01BattleManagerAccessor::DebugMapAspectOverride(const FG01MapAspectOverride& InOverride) {
}

void UG01BattleManagerAccessor::DebugMapAspectAction(const FG01MapAspectAction& InAction) {
}

void UG01BattleManagerAccessor::DebugGetLinkCommandInfo(AActor* InSource, FG01BattleLinkCommandDebugInfo& OutInfo) {
}

void UG01BattleManagerAccessor::DebugGetCameraPhaseInfo(FG01BattleCameraPhaseDebugInfo& OutInfo) {
}

void UG01BattleManagerAccessor::ConvertLinkOriginTransform(AActor* InSource, const TArray<AActor*>& InTargetList, const FTransform& InTransform, FTransform& OutTransform) {
}

void UG01BattleManagerAccessor::ClearCurrentSeqPlayer() {
}

void UG01BattleManagerAccessor::CheckShieldCanActivate(AActor* InSource, AActor* InTarget, FName InArtsID, bool& OutCanActivate) {
}

void UG01BattleManagerAccessor::CheckRelationCurrentTask(AActor* InCharacter, bool& ReIsRelated, bool& ReIsSource, bool& ReIsTarget, int32& ReTargetIndex) {
}

void UG01BattleManagerAccessor::CheckNeedLoserScreenForDuel(bool& Out) {
}

bool UG01BattleManagerAccessor::CheckHasDelaySequence() {
    return false;
}

void UG01BattleManagerAccessor::CheckCounterArtsLearn(AActor* InSource, AActor* InTarget, const FName& InArtsID, bool& OutIsLearned, FName& OutArtsName) {
}

void UG01BattleManagerAccessor::CheckCharaAffinityNeedsOpen(AActor* InCharacter, bool& ReNeedsOpen, TArray<bool>& ReOpenList) {
}

void UG01BattleManagerAccessor::CheckArtsInspiration(FG01BattleMgrArg_CheckInspiration InCheckArg, bool& OutIsLearned, bool& OutToReplace, FName& OutNewArtsId) {
}

void UG01BattleManagerAccessor::CharacterDown(AG01BattleCharacterBase* InDownCharacter) {
}

void UG01BattleManagerAccessor::ChangeEnemyFormationNo(int32 InSrcFormationNo, int32 InDstFormationNo, bool& ReSuccess) {
}

void UG01BattleManagerAccessor::CanEscape(bool& Re) {
}

void UG01BattleManagerAccessor::CanChangeFormation(bool& Re) {
}

void UG01BattleManagerAccessor::CancelTask(UG01BattleTask* InTask) {
}

void UG01BattleManagerAccessor::CanArtsLearn(AActor* InSource, FName InArtsName, FName InWeaponId, bool& ReCanLearn, float& ReLearnRate) {
}

void UG01BattleManagerAccessor::CameraIsPlaybackPhase(bool& Out) {
}

void UG01BattleManagerAccessor::CalcLinkDamageBonus(AActor* InSource, float& ReBonus) {
}

void UG01BattleManagerAccessor::CalcArtsBpCost(AActor* InSource, AActor* InTarget, FName InArtsName, int32& ReBpCost, TArray<EG01ReasonToChangedBpCostEnum>& reasonList) {
}

void UG01BattleManagerAccessor::BattleTaskTryReplace(UG01BattleTask* InTask, FName InNewTaskId, bool& ReReplaced) {
}

void UG01BattleManagerAccessor::BattleTaskStart(UG01BattleTask* InTask) {
}

void UG01BattleManagerAccessor::BattleTaskInsertPlayback(int32 InIndex, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& ReBattleTask) {
}

void UG01BattleManagerAccessor::BattleTaskIndexOf(AActor* InSourceActor, bool& ReFound, int32& ReIndex) {
}

void UG01BattleManagerAccessor::BattleTaskEnd(UG01BattleTask* InTask) {
}

void UG01BattleManagerAccessor::BattleTaskCheckFathomArtsLearn(UG01BattleTask* InTask, AActor* InTarget, bool& ReIsLearned, FName& ReArtsName) {
}

void UG01BattleManagerAccessor::BattleTaskCheckCounterArtsLearn(UG01BattleTask* InTask, bool& ReIsLearn, FName& ReArtsName) {
}

void UG01BattleManagerAccessor::BattleTaskCheckCounterArtsExec(UG01BattleTask* InTask, bool& ReIsCounter, FName& ReArtsName) {
}

void UG01BattleManagerAccessor::BattleTaskCheckArtsLearn(UG01BattleTask* InTask, bool& ReIsLearned, bool& ReToReplace, FName& ReArtsName) {
}

void UG01BattleManagerAccessor::BattleTaskAddPlayback(FName InTaskId, AActor* InSourceActor, int32 InSourceActorSpeed, AActor* InTargetActor, UG01BattleTask*& ReBattleTask) {
}

void UG01BattleManagerAccessor::BattleStartOnName(FName InBattleName) {
}

void UG01BattleManagerAccessor::BattleStartOnKey(FG01BattlePresetKeyStruct InPresetKey) {
}

void UG01BattleManagerAccessor::BattleStartOnData(FG01BattleSetupData InBattleSetupData) {
}

void UG01BattleManagerAccessor::ApplyLinkSlomo(float InSlomo) {
}

void UG01BattleManagerAccessor::AddLoadVFXTask(AActor* InSourceActor, const FVFXLoadInfo& InInfo, UG01BattleTask*& ReBattleTask) {
}

void UG01BattleManagerAccessor::AddLoadSequenceTask(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& ReBattleTask) {
}

void UG01BattleManagerAccessor::AddHiddenCommandTask(AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, int32 InActionCountNum, UG01BattleTask*& ReBattleTask) {
}

void UG01BattleManagerAccessor::AddGaugeOnExtarnal(AActor* InSource, int32 InGauge) {
}

void UG01BattleManagerAccessor::AddArtsInspirationTask(FName InArtsID, FName InBaseArtsId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& OutBattleTask) {
}

void UG01BattleManagerAccessor::AddAbilityStat(EG01AbilityConditionType InType, int32 InCount, AActor* InCharacter) {
}


