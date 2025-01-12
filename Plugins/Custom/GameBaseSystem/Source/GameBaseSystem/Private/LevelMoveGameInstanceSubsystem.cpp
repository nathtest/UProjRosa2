#include "LevelMoveGameInstanceSubsystem.h"

ULevelMoveGameInstanceSubsystem::ULevelMoveGameInstanceSubsystem() {
    this->HelperObject = NULL;
    this->ScreenTransitionType = EScreenTransitionType::STANDARD_BLACK;
    this->ScreenTransitionTime = 1.00f;
    this->bIsDuringTransitionFadeIn = false;
    this->bIsDuringLevelTransition = false;
    this->bIsEnableLevelTransition = true;
    this->bIsEnablePlayFromHere = true;
    this->IsLoadingSequence = false;
}

void ULevelMoveGameInstanceSubsystem::StartPersistentLevelInit() {
}

void ULevelMoveGameInstanceSubsystem::SetEnableLevelTransition(bool InIsEnable) {
}

void ULevelMoveGameInstanceSubsystem::RequestOpenPrevPersistentLevel(EScreenTransitionType InTransitionType, float InFadeTime) {
}

void ULevelMoveGameInstanceSubsystem::RequestOpenPersistentLevelInfo(const FLevelTransitionInfoView& InLevelTransitionInfoView, const FLevelTransitionInfoRow& InLevelTransitionInfoRow, EScreenTransitionType InTransitionType, float InFadeTime) {
}

void ULevelMoveGameInstanceSubsystem::RequestOpenPersistentLevelByName(FName InLevelName, EScreenTransitionType InTransitionType, float InFadeTime) {
}

bool ULevelMoveGameInstanceSubsystem::RequestOpenPersistentLevel(FLevelTransitionInfoView InLevelID, EScreenTransitionType InTransitionType, float InFadeTime) {
    return false;
}

void ULevelMoveGameInstanceSubsystem::RemoveLockActor(AActor* InActor) {
}

void ULevelMoveGameInstanceSubsystem::ReceiveDestroyActor(AActor* InActor) {
}

bool ULevelMoveGameInstanceSubsystem::IsSameCurrentLevelInfo(FLevelTransitionInfoView InLevelID) const {
    return false;
}

bool ULevelMoveGameInstanceSubsystem::IsSameCurrentLevel(FLevelTransitionInfoView InLevelID) const {
    return false;
}

bool ULevelMoveGameInstanceSubsystem::IsPlayFromHere() {
    return false;
}

bool ULevelMoveGameInstanceSubsystem::IsEnablePlayFromHere() {
    return false;
}

bool ULevelMoveGameInstanceSubsystem::IsEnableLevelTransition() const {
    return false;
}

bool ULevelMoveGameInstanceSubsystem::IsDuringTransitionFadeIn() const {
    return false;
}

bool ULevelMoveGameInstanceSubsystem::IsDuringLevelTransition() const {
    return false;
}

FName ULevelMoveGameInstanceSubsystem::GetPrevLevelName() const {
    return NAME_None;
}

FLevelTransitionInfo ULevelMoveGameInstanceSubsystem::GetPrevLevelInfo() const {
    return FLevelTransitionInfo{};
}

void ULevelMoveGameInstanceSubsystem::GetPlayFromHereData(FTransform& RespawnData) {
}

ENextLevelTransitionType ULevelMoveGameInstanceSubsystem::GetNextLevelTransitionType() const {
    return ENextLevelTransitionType::None;
}

FLevelTransitionInfo ULevelMoveGameInstanceSubsystem::GetNextLevelInfo() const {
    return FLevelTransitionInfo{};
}

FName ULevelMoveGameInstanceSubsystem::GetCurrentLevelName() const {
    return NAME_None;
}

FLevelTransitionInfo ULevelMoveGameInstanceSubsystem::GetCurrentLevelInfo() const {
    return FLevelTransitionInfo{};
}

void ULevelMoveGameInstanceSubsystem::EnablePlayFromHere() {
}

void ULevelMoveGameInstanceSubsystem::DisablePlayFromHere() {
}

void ULevelMoveGameInstanceSubsystem::ClearNextLevelInfo() {
}

void ULevelMoveGameInstanceSubsystem::ClearLockActor() {
}

void ULevelMoveGameInstanceSubsystem::AddLockActor(AActor* InActor) {
}


