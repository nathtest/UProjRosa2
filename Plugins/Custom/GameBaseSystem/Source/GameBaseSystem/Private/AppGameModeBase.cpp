#include "AppGameModeBase.h"
#include "AppPlayerController.h"

AAppGameModeBase::AAppGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AAppPlayerController::StaticClass();
    this->MManagerDataAllNum = 0;
    this->MCompletedLoadManagerNum = 0;
    this->MCompletedInitializeManagerNum = 0;
    this->MNowLoadFlag = false;
    this->MCompleteLoadManagerNum = 0;
    this->MAllFinishLoadFlag = false;
    this->MCalledGameStartEvent = false;
    this->GameModeType = EGameModeType::StandardType;
    this->MPreCreateManagerDataTable = NULL;
    this->MCreateManagerListDataTable = NULL;
    this->MInitSpawningGeneratorNum = 0;
}

void AAppGameModeBase::SetCleateManagers() {
}

void AAppGameModeBase::OnCreatedGeneratorTarget(AGeneratorBase* InGenerator, AActor* InTargetActor) {
}

void AAppGameModeBase::ManagerLoadByPriority(TEnumAsByte<EManagerCreatePriority::Type> InPriorityType) {
}

void AAppGameModeBase::ManagerInitializeComplete() {
}

void AAppGameModeBase::LoadManagers() {
}

float AAppGameModeBase::GetLoadPercent() {
    return 0.0f;
}

EGameModeType AAppGameModeBase::GetGameModeType() {
    return EGameModeType::StandardType;
}

void AAppGameModeBase::CreatePreManagers() {
}

void AAppGameModeBase::CallEventByPreGameStart(const UObject* InWorldContext, const FBeginGameStartScript& InEvent) {
}

void AAppGameModeBase::CallEventByPostGameStart(const UObject* InWorldContext, const FBeginGameStartScript& InEvent) {
}

void AAppGameModeBase::CallEventByGameStart(const UObject* InWorldContext, const FBeginGameStartScript& InEvent) {
}


