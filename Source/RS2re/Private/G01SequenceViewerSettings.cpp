#include "G01SequenceViewerSettings.h"

UG01SequenceViewerSettings::UG01SequenceViewerSettings() {
    this->SetupTable = NULL;
    this->SequenceTable = NULL;
}

void UG01SequenceViewerSettings::UpdateSetupTable() {
}

void UG01SequenceViewerSettings::Find(bool& OutIsFound, FG01SeqViewerTableRow& OutRow, TSoftObjectPtr<ULevelSequence> InSequence) {
}


