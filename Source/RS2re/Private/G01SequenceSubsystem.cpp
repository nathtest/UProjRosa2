#include "G01SequenceSubsystem.h"

UG01SequenceSubsystem::UG01SequenceSubsystem() {
    this->bIsPlayFromViewer = false;
    this->bIsBackToViewer = false;
    this->bIsRemoveAllWidgets = false;
    this->bIsHiddenDebugInfo = false;
}

void UG01SequenceSubsystem::SetViewerPlaySequenceID(const FName& InSequencerID) {
}

bool UG01SequenceSubsystem::SetViewerPartyID(int32 InPartyIndex, const FG01CharacterID& InID) {
    return false;
}

void UG01SequenceSubsystem::SetRemoveAllWidgets(bool InIsEnabled) {
}

void UG01SequenceSubsystem::SetPlayFromViewer(bool InIsPlayFromViewer) {
}

void UG01SequenceSubsystem::SetHiddenDebugInfo(bool InIsHidden) {
}

void UG01SequenceSubsystem::SetBackToViewer(bool InIsBack) {
}

bool UG01SequenceSubsystem::IsRemoveAllWidgets() const {
    return false;
}

bool UG01SequenceSubsystem::IsPlayFromViewer() const {
    return false;
}

bool UG01SequenceSubsystem::IsHiddenDebugInfo() const {
    return false;
}

bool UG01SequenceSubsystem::IsBackToViewer() const {
    return false;
}

FName UG01SequenceSubsystem::GetViewerPlaySequenceID() const {
    return NAME_None;
}

TArray<FG01CharacterID> UG01SequenceSubsystem::GetViewerPartyIDs() const {
    return TArray<FG01CharacterID>();
}


