#include "GameLevelManagerAccesser.h"
#include "EManagerID.h"

UGameLevelManagerAccesser::UGameLevelManagerAccesser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_GAMELEVEL;
}

void UGameLevelManagerAccesser::UnregisterStreamingSubLevelName(FName InSubLevelName) {
}

void UGameLevelManagerAccesser::StopLevelStreaming() {
}

void UGameLevelManagerAccesser::StartLevelStreaming(const UObject* InRequester) {
}

void UGameLevelManagerAccesser::ResetStreamingSubLevelNameList() {
}

void UGameLevelManagerAccesser::RegisterStreamingSubLevelName(FName InSubLevelName, bool InIsRequired) {
}

bool UGameLevelManagerAccesser::IsLoadedRequiredSublevels() const {
    return false;
}

bool UGameLevelManagerAccesser::IsDuringStreaming() const {
    return false;
}


