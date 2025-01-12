#include "G01BattleCameraController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LoadControlActorComponent -FallbackName=LoadControlActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequencerManagerAccessCompo -FallbackName=SequencerManagerAccessCompo

AG01BattleCameraController::AG01BattleCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MSequencerManagerAccessor = CreateDefaultSubobject<USequencerManagerAccessCompo>(TEXT("SequencerManagerAccessor"));
    this->MLoadController = CreateDefaultSubobject<ULoadControlActorComponent>(TEXT("LoadController"));
    this->TriggerEventNamePeriod = TEXT("CommonTrigger_Period");
    this->MIsAllRequestLoaded = false;
    this->MPhaseTable = NULL;
    this->MTransitionTable = NULL;
    this->SystemTagTable = NULL;
    this->ExclusiveTable = NULL;
}

void AG01BattleCameraController::SetupPeriodTrigger(ASequenceController* InSequenceController) {
}

void AG01BattleCameraController::SetupInterpParamByCamera(FG01BattleCameraInterpParam& InParam, FTransform InTransform, UCineCameraComponent* InCineCamera) {
}

void AG01BattleCameraController::RequestLoadResource() {
}

void AG01BattleCameraController::PhaseHasTag(FName InPhaseName, EG01BattleCameraPhaseType InPhaseType, FName InTag, bool& OutHasTag) const {
}

void AG01BattleCameraController::OnLoadedResidentResource() {
}


void AG01BattleCameraController::GetFilteredPhaseIdList(TArray<FName>& OutList) {
}


void AG01BattleCameraController::GetActiveExclusiveIdList(TArray<FName>& OutList) {
}

void AG01BattleCameraController::FindTransitionData(FName InFromPhaseName, FName InToPhaseName, bool& ReIsFound, FName& ReTransitionName) {
}

void AG01BattleCameraController::FindNextPhaseName(EG01BattleCameraPhaseType InPhaseType, AActor* InOriginActor, bool& ReIsFound, FName& RePhaseName) {
}

void AG01BattleCameraController::DataDelete() {
}


void AG01BattleCameraController::CollectResidentResource(TArray<TSoftClassPtr<UObject>>& OutList) {
}

void AG01BattleCameraController::ClearPeriodTrigger(ASequenceController* InSequenceController) {
}

void AG01BattleCameraController::ApplyCameraInterpParam(ACameraActorBase* InCameraActor, UCineCameraComponent* InCineCamera, const FG01BattleCameraInterpParam& InFrom, const FG01BattleCameraInterpParam& InTo, float InAlpha) {
}


