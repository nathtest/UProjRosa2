#include "SoundManagerAccessComponent.h"
#include "EManagerID.h"

USoundManagerAccessComponent::USoundManagerAccessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_SOUNDSYSTEM;
    this->MSoundManager = NULL;
}

bool USoundManagerAccessComponent::StopSound(const FSoundAccessParameter& InAccessParam) {
    return false;
}

bool USoundManagerAccessComponent::PlaySound3DAtTransformByID(const FName& InSoundID, FSound3DPlayParamAtTransform InParam, FSoundAccessParameter& OutResult) {
    return false;
}

bool USoundManagerAccessComponent::PlaySound3DAtTransformByClass(const FRegisterArgs3D& InArgs, const FSound3DPlayParamAtTransform& InParam, FSoundAccessParameter& OutResult) {
    return false;
}

bool USoundManagerAccessComponent::PlaySound3DAttachComponentByID(const FName& InSoundID, FSound3DPlayParamAttachComponent InParam, FSoundAccessParameter& OutResult) {
    return false;
}

bool USoundManagerAccessComponent::PlaySound3DAttachComponentByClass(const FRegisterArgs3D& InArgs, const FSound3DPlayParamAttachComponent& InParam, FSoundAccessParameter& OutResult) {
    return false;
}

bool USoundManagerAccessComponent::PlaySound3DAttachActorByID(const FName& InSoundID, FSound3DPlayParamAttachActor InParam, FSoundAccessParameter& OutResult) {
    return false;
}

bool USoundManagerAccessComponent::PlaySound3DAttachActorByClass(const FRegisterArgs3D& InArgs, const FSound3DPlayParamAttachActor& InParam, FSoundAccessParameter& OutResult) {
    return false;
}

bool USoundManagerAccessComponent::PlaySound2DByID(const FName& InSoundID, FSound2DPlayParam InParam, FSoundAccessParameter& OutResult) {
    return false;
}

bool USoundManagerAccessComponent::PlaySound2DByClass(const FRegisterArgs2D& InArgs, const FSound2DPlayParam& InParam, FSoundAccessParameter& OutResult) {
    return false;
}

bool USoundManagerAccessComponent::PauseSound(const FSoundAccessParameter& InAccessParam) {
    return false;
}

void USoundManagerAccessComponent::LoadSoundResources(ESoundLoadType InLoadType, const TArray<FName>& InSoundIDArray, bool InIsAsyncLoad) {
}

void USoundManagerAccessComponent::LoadSoundResource(ESoundLoadType InLoadType, FName InSoundID, bool InIsAsyncLoad) {
}

bool USoundManagerAccessComponent::IsSoundPlaying(const FSoundAccessParameter& InAccessParam) const {
    return false;
}

bool USoundManagerAccessComponent::IsAnySoundPlaying(ESoundCategoryID InCategory) const {
    return false;
}

float USoundManagerAccessComponent::GetSoundPlaySeconds(const FSoundAccessParameter& InAccessParam) const {
    return 0.0f;
}

void USoundManagerAccessComponent::DestroyResidentSound(const FName& InSoundID) {
}

void USoundManagerAccessComponent::DestroyNormalSound(const FName& InSoundID) {
}


