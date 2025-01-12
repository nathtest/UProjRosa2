#include "G01ArtsBehaviourBase.h"

UG01ArtsBehaviourBase::UG01ArtsBehaviourBase() {
    this->ArtsScript = NULL;
}

void UG01ArtsBehaviourBase::SetupType(const FName& InType) {
}


void UG01ArtsBehaviourBase::SetProcessToFaintOrDeath(bool In) {
}


void UG01ArtsBehaviourBase::SetBehaviourName(FName In) {
}

void UG01ArtsBehaviourBase::SetArtsTableData(const FG01BattleArtsTableRow& InArts) {
}

void UG01ArtsBehaviourBase::SetArtsScript(UG01ArtsScriptBase* InArtsScript) {
}

void UG01ArtsBehaviourBase::SetArtsParameter(FName InArtsParameter) {
}





UG01BattleTask* UG01ArtsBehaviourBase::GetTask() {
    return NULL;
}

FName UG01ArtsBehaviourBase::GetSetupType() {
    return NAME_None;
}

void UG01ArtsBehaviourBase::GetObserverObject(UClass* InInterfaceType, TArray<UObject*>& OutObjectArray) {
}

void UG01ArtsBehaviourBase::GetBehaviourName(FName& Out) const {
}

void UG01ArtsBehaviourBase::GetArtsTableData(FG01BattleArtsTableRow& ReArts) {
}

void UG01ArtsBehaviourBase::GetArtsScript(UG01ArtsScriptBase*& OutArtsScript) {
}

void UG01ArtsBehaviourBase::GetArtsParameter(FName& ReArtsParameter) {
}


bool UG01ArtsBehaviourBase::CheckSubTarget(AActor* InActor) {
    return false;
}

bool UG01ArtsBehaviourBase::CheckProcessToTarget(AActor* InActor) {
    return false;
}


bool UG01ArtsBehaviourBase::CheckMainTarget(AActor* InActor) {
    return false;
}


void UG01ArtsBehaviourBase::CheckAliveTarget(AActor* InActor, bool& OutPreviousAlive, bool& OutAlive) {
}


