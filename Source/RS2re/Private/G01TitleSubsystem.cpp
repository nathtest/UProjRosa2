#include "G01TitleSubsystem.h"

UG01TitleSubsystem::UG01TitleSubsystem() {
    this->MIsFirstBoot = true;
    this->MDifficultyNum = 0;
    this->MIsNewGamePlus = false;
    this->MHandoverSlotNum = -1;
    this->DebugCanTransfer = false;
}

void UG01TitleSubsystem::SetIsNewGamePlus(bool InIsNewGamePlus) {
}

void UG01TitleSubsystem::SetIsFirstBoot(bool InIsFirstBoot) {
}

void UG01TitleSubsystem::SetHandoverSlotNum(int32 InHandoverSlotNum) {
}

void UG01TitleSubsystem::SetDifficultyNum(int32 InDifficultyNum) {
}

void UG01TitleSubsystem::SetDebugTrial(bool InTrial) {
}

void UG01TitleSubsystem::SetDebugTransferSaveDataError(bool InDebugTransferSaveDataError) {
}

void UG01TitleSubsystem::SetDebugCanTransfer(bool InCanTransfer) {
}

void UG01TitleSubsystem::IsNewGamePlus(bool& OutIsNewGamePlus) const {
}

void UG01TitleSubsystem::IsFirstBoot(bool& OutIsFirstBoot) const {
}

void UG01TitleSubsystem::GetHandoverSlotNum(int32& OutHandoverSlotNum) const {
}

void UG01TitleSubsystem::GetDifficultyNum(int32& OutDifficultyNum) const {
}

void UG01TitleSubsystem::GetDebugTrial(bool& OutTrial) const {
}

void UG01TitleSubsystem::GetDebugTransferSaveDataError(bool& OutDebugTransferSaveDataError) const {
}

void UG01TitleSubsystem::GetDebugCanTransfer(bool& OutCanTransfer) const {
}


