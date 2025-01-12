#include "G01SeqNotifyController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EventManagerAccessComponent -FallbackName=EventManagerAccessComponent
#include "G01BgmManagerAccessor.h"
#include "G01SequenceManagerAccessor.h"

AG01SeqNotifyController::AG01SeqNotifyController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SequenceManagerAccessor = CreateDefaultSubobject<UG01SequenceManagerAccessor>(TEXT("SequenceManagerAccessor"));
    this->MEndEffectCount = 0;
    this->MEndVFXCount = 0;
    this->MHitCount = 0;
    this->EventManagerAccessor = CreateDefaultSubobject<UEventManagerAccessComponent>(TEXT("EventManagerAccessor"));
    this->CurrentBgmPlaybackIndex = -1;
    this->CurrentBgmPlayingIndex = -1;
    this->BgmManagerAccessor = CreateDefaultSubobject<UG01BgmManagerAccessor>(TEXT("BgmManagerAccessor"));
}

void AG01SeqNotifyController::OnFinishedVFX(UG01VFXHandle* InHandle) {
}

void AG01SeqNotifyController::OnFinishedEffect(UG01FXHandle* InHandle) {
}


void AG01SeqNotifyController::OnEndEvent(const FEventResult& InResult) {
}


void AG01SeqNotifyController::NotifyFathom_Implementation(const ASeqNotifyControllerBinder* InBinder, ASeqActorAnimControllerBinder* InAttacker, const FG01SeqNotifyBattleDamageParam& InParam) {
}

void AG01SeqNotifyController::NotifyDamage_Implementation(const ASeqNotifyControllerBinder* InBinder, ASeqActorAnimControllerBinder* InAttacker, const FG01SeqNotifyBattleDamageParam& InParam) {
}

void AG01SeqNotifyController::NotifyActionCommand_Implementation(ASeqActorAnimControllerBinder* InAttacker, FName InActionCommand) {
}


