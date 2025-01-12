#include "SequencerPlayEvent.h"
#include "LoadScreenManagerAccessor.h"
#include "ScreenTransitionManagerAccessor.h"
#include "SequencerManagerAccessCompo.h"

ASequencerPlayEvent::ASequencerPlayEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayWaitTime = 0.30f;
    this->MSequencerManagerAccessor = CreateDefaultSubobject<USequencerManagerAccessCompo>(TEXT("SequencerManagerAccessor"));
    this->LoadScreenManagerAccessor = CreateDefaultSubobject<ULoadScreenManagerAccessor>(TEXT("LoadScreenManagerAccessor"));
    this->ScreenTransitionManagerAccessor = CreateDefaultSubobject<UScreenTransitionManagerAccessor>(TEXT("ScreenTransitionManagerAccessor"));
    this->MSequenceController = NULL;
    this->ElapsedWaitTime = 0.00f;
}

void ASequencerPlayEvent::OnDestroyedController(AActor* InController) {
}

void ASequencerPlayEvent::OnAvailableSequence() {
}

bool ASequencerPlayEvent::CheckSequenceAvailable() {
    return false;
}


