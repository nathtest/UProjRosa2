#include "AppActor.h"

AAppActor::AAppActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnableTickInViewports = false;
}


bool AAppActor::IsEditor() const {
    return false;
}


FString AAppActor::GetActorName() const {
    return TEXT("");
}

FName AAppActor::GetActorFName() const {
    return NAME_None;
}


void AAppActor::AddLogBP(EDebugSystemLogType InLogType, const FString& InMessage, const FString& InHeader, float InDuration, bool InIsPrintToGame, bool InIsPrintToScreen, bool InIsPrintToLog) {
}

void AAppActor::AddedComponent(UActorComponent* InComponent) {
}


