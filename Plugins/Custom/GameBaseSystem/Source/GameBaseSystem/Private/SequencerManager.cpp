#include "SequencerManager.h"
#include "EManagerID.h"
#include "LoadScreenManagerAccessor.h"
#include "ScreenTransitionManagerAccessor.h"

ASequencerManager::ASequencerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_SEQUENCE;
    this->MScreenTransitionAccessor = CreateDefaultSubobject<UScreenTransitionManagerAccessor>(TEXT("ScreenTransitionAccessor"));
    this->MLoadScreenManagerAccessor = CreateDefaultSubobject<ULoadScreenManagerAccessor>(TEXT("LoadScreenManagerAccessor"));
    this->MDefaultUseSeqContClass = NULL;
    this->MSequencerParamTable = NULL;
    this->MSequencerTypeTable = NULL;
    this->MSequenceStartFadeOutTime = 1.00f;
    this->SequenceSettings = NULL;
    this->CameraUseSequenceController = NULL;
    this->MIsNotifyPlayStarted = false;
}


void ASequencerManager::OnSequenceStarted(const ASequenceController* InController) {
}


void ASequencerManager::OnSequencePreStart(const ASequenceController* InController) {
}


void ASequencerManager::OnSequencePaused(const ASequenceController* InController) {
}


void ASequencerManager::OnSequenceFinished(const ASequenceController* InController) {
}

void ASequencerManager::OnSeqControllerDestroyed(AActor* InDestroyActor) {
}

void ASequencerManager::OnChangeEnableCameraCut(const ASequenceController* InController, bool InIsEnabled) {
}

void ASequencerManager::OnChangeActiveCamera(const ASequenceController* InController, const AActor* InCameraActor) {
}

void ASequencerManager::OnAssetLoadCompleted(const TArray<UObject*>& InLoadedAssets) {
}

bool ASequencerManager::IsExecutableStartFadeOut_Implementation(const ASequenceController* InController) const {
    return false;
}

bool ASequencerManager::IsExecutableLoadFade_Implementation(const ASequenceController* InController) const {
    return false;
}

bool ASequencerManager::IsExecutableFinishFadeOut_Implementation(const ASequenceController* InController) const {
    return false;
}

USequenceSettingDataAsset* ASequencerManager::GetSequenceSettings() const {
    return NULL;
}


