#include "G01SeqNotifyControllerBinder.h"
#include "G01BattleArtsManagerAccessor.h"

AG01SeqNotifyControllerBinder::AG01SeqNotifyControllerBinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MArtsManagerAccessor = CreateDefaultSubobject<UG01BattleArtsManagerAccessor>(TEXT("ArtsManagerAccessor"));
}

void AG01SeqNotifyControllerBinder::SetVolumeMultiplier(float InValue) {
}

void AG01SeqNotifyControllerBinder::SetIsOverride(bool InValue) {
}

void AG01SeqNotifyControllerBinder::SetInnerRange(float InValue) {
}

void AG01SeqNotifyControllerBinder::SetAudibleRange(float InValue) {
}








void AG01SeqNotifyControllerBinder::OnEndApplyBgmPreset(FName InKey) {
}








bool AG01SeqNotifyControllerBinder::OnBeginApplyBgmPreset(FName InKey, FG01SeqNotifyBgmVolumeParams InParams) {
    return false;
}

EG01SeqControllerPlayType AG01SeqNotifyControllerBinder::GetPlayType() const {
    return EG01SeqControllerPlayType::Default;
}

void AG01SeqNotifyControllerBinder::Cmd_TR_UnlockAchievementProgress(FG01AchievementID InAchievementID, float InProgress) {
}

void AG01SeqNotifyControllerBinder::Cmd_TR_UnlockAchievement(FG01AchievementID InAchievementID) {
}


void AG01SeqNotifyControllerBinder::Cmd_TR_RequestEvent(FG01SeqNotifyEventParams InParams) {
}

void AG01SeqNotifyControllerBinder::Cmd_TR_PlayVFX(FG01SeqVFXPlayArgs InPlayArgs) {
}

void AG01SeqNotifyControllerBinder::Cmd_TR_PlaySE_Implementation(FG01SeqNotifySeParam InParam) {
}

void AG01SeqNotifyControllerBinder::Cmd_TR_PlayEffect(FG01SeqFxPlayArgs InPlayArgs) {
}

void AG01SeqNotifyControllerBinder::Cmd_TR_NotifyFathom(FG01SeqNotifyBattleDamage InDamageInfo) {
}

void AG01SeqNotifyControllerBinder::Cmd_TR_NotifyDamage_Implementation(FG01SeqNotifyBattleDamage InDamageInfo) {
}

void AG01SeqNotifyControllerBinder::Cmd_TR_NotifyActionCommand(FG01SeqNotifyActionCommand InActionCommand) {
}

void AG01SeqNotifyControllerBinder::Cmd_RP_ShowLocationName(FG01SeqNotifyLocationName InParam) {
}

void AG01SeqNotifyControllerBinder::Cmd_RP_ShowFormationName() {
}

void AG01SeqNotifyControllerBinder::Cmd_RP_ShowEncountState() {
}

void AG01SeqNotifyControllerBinder::Cmd_RP_ShowBossName(FG01SeqNotifyBossName InParam) {
}

void AG01SeqNotifyControllerBinder::Cmd_RP_ShowBattleEscapeUI() {
}

void AG01SeqNotifyControllerBinder::Cmd_RP_ShowBattleArtsName(FG01SeqNotifyBattleArtsName InParam) {
}

void AG01SeqNotifyControllerBinder::Cmd_RP_PlayBgm(FG01SeqNotifyBgmParam InParam) {
}

void AG01SeqNotifyControllerBinder::Cmd_RP_PauseBgm(FG01SeqNotifyBgmPauseParam InParam) {
}

void AG01SeqNotifyControllerBinder::Cmd_RP_ApplyBgmVolumePreset_Implementation(FG01SeqNotifyBgmVolumeParams InParams) {
}


