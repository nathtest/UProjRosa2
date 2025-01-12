#include "SoundSystemManager.h"
#include "EManagerID.h"

ASoundSystemManager::ASoundSystemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_SOUNDSYSTEM;
    this->MSoundSystemDataAasset = NULL;
    this->MDefaultSoundAttenuation = NULL;
    this->MPlayAllowTypes.AddDefaulted(3);
    this->MSoundSubsystem = NULL;
}


