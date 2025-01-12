#include "G01HistorySubsystem.h"

UG01HistorySubsystem::UG01HistorySubsystem() {
    this->StoryRecordMax = 0;
}

FG01HistorySaveInfo UG01HistorySubsystem::GetHistorySaveData() const {
    return FG01HistorySaveInfo{};
}


