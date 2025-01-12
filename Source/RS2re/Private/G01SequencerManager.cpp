#include "G01SequencerManager.h"
#include "G01BgmManagerAccessor.h"
#include "G01LevelMoveManagerAccessor.h"
#include "G01LoadWaitUiControllerAccessor.h"

AG01SequencerManager::AG01SequencerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BgmManagerAccessor = CreateDefaultSubobject<UG01BgmManagerAccessor>(TEXT("BgmManagerAccessor"));
    this->LoadWaitUiControllerAccessor = CreateDefaultSubobject<UG01LoadWaitUiControllerAccessor>(TEXT("LoadWaitUiControllerAccessor"));
    this->LevelMoveManagerAccessor = CreateDefaultSubobject<UG01LevelMoveManagerAccessor>(TEXT("LevelMoveManagerAccessor"));
    this->BgmVolumePresetTable = NULL;
    this->BgmLayerHandle = NULL;
    this->bIsDirtyBgmVolume = false;
}

bool AG01SequencerManager::IsPauseableCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool AG01SequencerManager::IsEventSceneCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool AG01SequencerManager::IsBattleEventCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool AG01SequencerManager::IsBattleCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool AG01SequencerManager::IsBattleArtsEventCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool AG01SequencerManager::IsBattleArtsCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

UG01SequenceSettings* AG01SequencerManager::GetG01SequenceSettings() const {
    return NULL;
}


