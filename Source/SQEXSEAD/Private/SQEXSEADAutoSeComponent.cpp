#include "SQEXSEADAutoSeComponent.h"
#include "SQEXSEADAutoSeComponentCallbackDefault.h"

USQEXSEADAutoSeComponent::USQEXSEADAutoSeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->AutoSeCallback = CreateDefaultSubobject<USQEXSEADAutoSeComponentCallbackDefault>(TEXT("SQEXSEADAutoSeComponentCallbackDefault0"));
    this->SettingData = NULL;
    this->ProcessorSettingsData = NULL;
    this->bFollowMeshVisibility = true;
    this->ProcLodSetting = NULL;
    this->OverrideAttenuationAsset = NULL;
    this->CachedMeshReference = NULL;
    this->CachedMovementComponent = NULL;
}


