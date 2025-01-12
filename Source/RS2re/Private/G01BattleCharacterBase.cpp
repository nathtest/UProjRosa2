#include "G01BattleCharacterBase.h"
#include "Templates/SubclassOf.h"

AG01BattleCharacterBase::AG01BattleCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReactionContinueFrame = 0;
    this->LastWaitType = G01BattleCharacterAnimWaitType::Stand;
    this->VisualActorClass = NULL;
    this->MBattleVisualAssetInstance = NULL;
    this->MLastReactionMontage = NULL;
    this->MyHandle = NULL;
    this->MyInspirationID = -1;
    this->TickFlagContainer = NULL;
    this->ItemManagerAccessor = NULL;
    this->CharacterIDComponent = NULL;
    this->ArtsManagerAccessor = NULL;
    this->BattleManagerAccessor = NULL;
    this->BattleSequencePlayComponent = NULL;
    this->AbilityManagerAccessor = NULL;
}

void AG01BattleCharacterBase::UpdateCharacterStatus() {
}

void AG01BattleCharacterBase::TryProcessSequenceAdjust_Implementation(const FSeqGeneralEventParam& InParam, UG01BattleTask* InTask, bool& OutProcess) {
}

void AG01BattleCharacterBase::StopReaction(float InBlendOutTime) {
}

void AG01BattleCharacterBase::ShowTimelineForReinforce_Implementation() {
}


void AG01BattleCharacterBase::SetVisualActorClass(TSubclassOf<AG01CharacterVisualActor> InClass) {
}

void AG01BattleCharacterBase::SetupVisualAsset() {
}



void AG01BattleCharacterBase::SetTickFlag(FName InTag, bool InEnable) {
}

void AG01BattleCharacterBase::SetPoolStatus_Implementation() {
}

void AG01BattleCharacterBase::SetLpDamageLock(FName InFlagName, bool InIsOn) {
}


void AG01BattleCharacterBase::SetLastWaitAnimType(G01BattleCharacterAnimWaitType InWaitType) {
}

void AG01BattleCharacterBase::SetInspirationID(int32 InInspirationId) {
}

void AG01BattleCharacterBase::SetInReaction(bool In) {
}

void AG01BattleCharacterBase::SetFaintLock(FName InFlagName, bool InIsOn) {
}

void AG01BattleCharacterBase::SetCharacterID(FName InCharacterId) {
}

void AG01BattleCharacterBase::SetAffinityOpen(EG01BattleArtsAttribute InAttr, bool InIsOpen) {
}

void AG01BattleCharacterBase::SetAffinityInfo(EG01BattleArtsAttribute InAttr, EG01AttackAffinityType InAffinity, bool InIsOpen) {
}

void AG01BattleCharacterBase::ResetCharacterStatus(const FG01BattleCharacterStatusStruct& InBattleStatus, const FG01ItemArmorDataStruct& InArmorStatus) {
}

void AG01BattleCharacterBase::RequestAnimPause(FName InReasonTag, bool InIsPause) {
}

void AG01BattleCharacterBase::PlayReaction_Implementation(EG01BattleCharacterAnimReactionType InReaction) {
}



void AG01BattleCharacterBase::OverrideStatus(const FG01CharaVariableStatus& InPartyVariableStatus, const FG01BattleCharacterStatusStruct& InBattleStatus) {
}




void AG01BattleCharacterBase::OnChangedArtsPlaybackOffset_Implementation() {
}






void AG01BattleCharacterBase::IsLpDamageLock(bool& ReIsLock) {
}

bool AG01BattleCharacterBase::IsInReaction() const {
    return false;
}

void AG01BattleCharacterBase::IsFaintLock(bool& ReIsLock) {
}

bool AG01BattleCharacterBase::IsAvailableVisualAsset() const {
    return false;
}


bool AG01BattleCharacterBase::IsAnimPaused() const {
    return false;
}

void AG01BattleCharacterBase::IsAffinityOpen(EG01BattleArtsAttribute InAttr, bool& ReIsOpen) const {
}

void AG01BattleCharacterBase::HideTimelineForReinforce_Implementation() {
}

void AG01BattleCharacterBase::HasLinkableArts(bool& OutHas) {
}

void AG01BattleCharacterBase::GetWaitAnim(G01BattleCharacterAnimWaitType InWaitType, UAnimSequence*& Re) {
}

void AG01BattleCharacterBase::GetVisualSize(EG01VisualActorSizeType& OutSize) {
}

void AG01BattleCharacterBase::GetVisualID(FName& OutVisualId) const {
}

void AG01BattleCharacterBase::GetVisualActorClass(TSubclassOf<AG01CharacterVisualActor>& Re) {
}


void AG01BattleCharacterBase::GetSelectedWeaponAttack(int32& OutAttack) {
}

void AG01BattleCharacterBase::GetResultAnimMontage(EG01BattleCharacterAnimResultType InResultType, UAnimMontage*& Out) {
}

void AG01BattleCharacterBase::GetReactionAnimMontage(EG01BattleCharacterAnimReactionType InReactionType, UAnimMontage*& Re) {
}

void AG01BattleCharacterBase::GetPartParentBattleCharacterID(FName& OutId) const {
}




void AG01BattleCharacterBase::GetMainAnimMontage(UAnimMontage*& Re) {
}

void AG01BattleCharacterBase::GetLpDamageLock(FName InFlagName, bool& ReIsOn) {
}

void AG01BattleCharacterBase::GetLinkableArtsList(TArray<FName>& OutArtsList, TArray<FName>& OutWeaponList) {
}

void AG01BattleCharacterBase::GetLearnAnimMontage(EG01BattleCharacterAnimLearnType InLearnType, UAnimMontage*& Out) {
}

void AG01BattleCharacterBase::GetLastReactionMontage(UAnimMontage*& OutMontage) {
}

EG01BattleCharacterAnimReactionType AG01BattleCharacterBase::GetLastReaction() const {
    return EG01BattleCharacterAnimReactionType::None;
}

void AG01BattleCharacterBase::GetInitialCharacterID(FName& OutCharacterId) const {
}

void AG01BattleCharacterBase::GetGestureAnim(TArray<UAnimSequence*>& OutList) {
}

void AG01BattleCharacterBase::GetFaintLock(FName InFlagName, bool& ReIsOn) {
}

void AG01BattleCharacterBase::GetCommandAnimMontage(EG01BattleCharacterAnimActionType InActionType, UAnimMontage*& Out) {
}

TSoftObjectPtr<UG01BattleVisualDataAsset> AG01BattleCharacterBase::GetBattleVisualAssetData() {
    return NULL;
}

void AG01BattleCharacterBase::GetBattleSize(EG01BattleCharacterSize& OutSize) {
}

void AG01BattleCharacterBase::GetBattleCharacterID(FName& OutBattleCharacterId) const {
}


void AG01BattleCharacterBase::GetAffinityInfo(FG01BattleCharacterAffinityStruct& ReInfo) const {
}

void AG01BattleCharacterBase::GetAffinity(EG01BattleArtsAttribute InAttr, EG01AttackAffinityType& ReAffinity) const {
}

void AG01BattleCharacterBase::FindWeaponSlotForArtsId(FName InArtsID, bool& OutFound, int32& OutSlot) {
}


void AG01BattleCharacterBase::DBG_ShieldLogEnd() {
}

void AG01BattleCharacterBase::DBG_ShieldLogBegin(AActor* InCharacter, FName InItemID) {
}

void AG01BattleCharacterBase::DBG_SendShieldLogLottery(int32 InPercent, int32 InLottery, bool InIsActivate) {
}

void AG01BattleCharacterBase::DBG_SendShieldLogInt(FName InName, int32 InValue) {
}

void AG01BattleCharacterBase::DBG_SendShieldLogFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax) {
}

void AG01BattleCharacterBase::ConvertAnimTypeActionToResult(EG01BattleCharacterAnimActionType InActionType, bool& OutSuccess, EG01BattleCharacterAnimResultType& OutResultType) {
}

void AG01BattleCharacterBase::ClearTickFlag() {
}

void AG01BattleCharacterBase::ClearPoolStatus_Implementation() {
}

void AG01BattleCharacterBase::ClearLpDamageLock() {
}

void AG01BattleCharacterBase::ClearFaintLock() {
}

bool AG01BattleCharacterBase::CheckEnableReaction() {
    return false;
}

void AG01BattleCharacterBase::AddAbilityStat(EG01AbilityConditionType InType, int32 InCount, bool InIsAll) {
}


