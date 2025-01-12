#include "G01BattleVoiceController.h"
#include "G01BattleArtsManagerAccessor.h"
#include "G01BattleCommandManagerAccessor.h"
#include "G01BattleManagerAccessor.h"
#include "G01LipSyncManagerAccessor.h"
#include "G01VoiceManagerAccessor.h"

AG01BattleVoiceController::AG01BattleVoiceController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BattleManagerAccessor = CreateDefaultSubobject<UG01BattleManagerAccessor>(TEXT("BattleManagerAccessor"));
    this->BattleCommandManagerAccessor = CreateDefaultSubobject<UG01BattleCommandManagerAccessor>(TEXT("BattleCommandManagerAccessor"));
    this->BattleArtsManagerAccessor = CreateDefaultSubobject<UG01BattleArtsManagerAccessor>(TEXT("BattleArtsManagerAccessor"));
    this->VoiceManagerAccessor = CreateDefaultSubobject<UG01VoiceManagerAccessor>(TEXT("VoiceManagerAccessor"));
    this->LipSyncManagerAccessor = CreateDefaultSubobject<UG01LipSyncManagerAccessor>(TEXT("LipSyncManagerAccessor"));
    this->BattleVoiceTable = NULL;
    this->BattleVoiceTriggerTable = NULL;
    this->IntConstTable = NULL;
    this->FloatConstTable = NULL;
    this->VoiceCtrl = NULL;
    this->VoiceLoading = false;
    this->LipSyncLoading = false;
}

void AG01BattleVoiceController::UnloadVoiceData() {
}

void AG01BattleVoiceController::SetupVoicePlayer() {
}

void AG01BattleVoiceController::Release() {
}


void AG01BattleVoiceController::OnCompleteVoiceLoad(const FG01VoiceLoadInfo& InLoadInfo) {
}

void AG01BattleVoiceController::OnCompleteLipSyncLoad(const FG01LipSyncLoadedRessources& InResources) {
}

void AG01BattleVoiceController::LoadVoiceData() {
}

void AG01BattleVoiceController::IsLoadingVoiceData(bool& OutIsLoading) {
}

bool AG01BattleVoiceController::IsEnableDebugLog_Implementation() const {
    return false;
}

void AG01BattleVoiceController::GetTriggerPriority(EG01BattleVoiceTriggerType InTrigger, int32& OutPriority) {
}

void AG01BattleVoiceController::GetTriggerNeedsLipSync(EG01BattleVoiceTriggerType InTrigger, bool& OutNeeds) {
}

void AG01BattleVoiceController::GetTriggerGroupID(EG01BattleVoiceTriggerType InTrigger, FName& OutGroupId) {
}

void AG01BattleVoiceController::GetTriggerCategory(EG01BattleVoiceTriggerType InTrigger, EG01BattleVoiceCategory& OutCategory) {
}

void AG01BattleVoiceController::GetPartyVoicePlayerList(TArray<UG01BattleVoicePlayerComponent*>& OutList) {
}

void AG01BattleVoiceController::GetPartyVoicePlayer(AActor* InChara, UG01BattleVoicePlayerComponent*& OutVoicePlayer) {
}

void AG01BattleVoiceController::GetIntConst(FG01BattleVoiceIntConstKeyStruct InKey, int32& OutValue) {
}

void AG01BattleVoiceController::GetFloatConst(FG01BattleVoiceFloatConstKeyStruct InKey, float& OutValue) {
}

void AG01BattleVoiceController::GetEnemyVoicePlayerList(TArray<UG01BattleVoicePlayerComponent*>& OutList) {
}

void AG01BattleVoiceController::GetEnemyVoicePlayer(AActor* InChara, UG01BattleVoicePlayerComponent*& OutVoicePlayer) {
}

void AG01BattleVoiceController::GetCharaVoicePlayerList(TArray<UG01BattleVoicePlayerComponent*>& OutList) {
}

void AG01BattleVoiceController::GetCharaVoicePlayer(AActor* InChara, UG01BattleVoicePlayerComponent*& OutVoicePlayer) {
}

void AG01BattleVoiceController::FindTriggerFromAnimKey(FName InKey, bool& OutFound, EG01BattleVoiceTriggerType& OutTrigger) {
}


