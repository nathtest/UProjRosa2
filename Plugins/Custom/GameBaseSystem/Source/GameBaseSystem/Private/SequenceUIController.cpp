#include "SequenceUIController.h"
#include "SoundManagerAccessComponent.h"
#include "TextSystemManagerAccessComponent.h"

ASequenceUIController::ASequenceUIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MSoundManagerAccessor = CreateDefaultSubobject<USoundManagerAccessComponent>(TEXT("SoundManagerAccessor"));
    this->MTextManagerAccessor = CreateDefaultSubobject<UTextSystemManagerAccessComponent>(TEXT("TextManagerAccessor"));
}



bool ASequenceUIController::PushTalkWindowText(const FName& InTextID) {
    return false;
}


bool ASequenceUIController::PushSubtitleText(const FName& InTextID) {
    return false;
}




bool ASequenceUIController::Initialize_Implementation() {
    return false;
}

bool ASequenceUIController::Finalize_Implementation() {
    return false;
}


bool ASequenceUIController::CloseTalkWindow() {
    return false;
}


bool ASequenceUIController::CloseSubtitle() {
    return false;
}

void ASequenceUIController::AllClose() {
}



