#include "G01CharacterVisualActor.h"
#include "G01LipSyncPlaybackComponent.h"

AG01CharacterVisualActor::AG01CharacterVisualActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MSizeType = EG01VisualActorSizeType::S;
    this->LipsyncPlaybackComponent = CreateDefaultSubobject<UG01LipSyncPlaybackComponent>(TEXT("LipsyncPlaybackComponent"));
    this->FootstepData = NULL;
}

void AG01CharacterVisualActor::UnregisterIK(EG01VAIkPartType InPart) {
}

void AG01CharacterVisualActor::SetIsUseEmissiveBaseColor_Implementation(bool InIsUseEmissiveBaseColor) {
}

void AG01CharacterVisualActor::SetEmissiveRimReduce_Implementation(float InValue) {
}

void AG01CharacterVisualActor::SetEmissiveInvalidateMaskRate_Implementation(float InRate) {
}

void AG01CharacterVisualActor::SetDisintegrationRate_Implementation(float InRate) {
}

void AG01CharacterVisualActor::SetCustomizeBaseColor_Implementation(const FLinearColor& InColor) {
}

void AG01CharacterVisualActor::SetAddEmissiveColor_Implementation(const FLinearColor& InColor) {
}

void AG01CharacterVisualActor::RegisterIK_CCDIK(EG01VAIkPartType InPart, const FG01VACcdikTargetParam& InTargetParam, bool InIsActivate) {
}

void AG01CharacterVisualActor::OnUpdateTemplateBP_Implementation(AG01CharacterVisualActor* InDefault) {
}

FLipsyncParam AG01CharacterVisualActor::GetLipsyncParam() const {
    return FLipsyncParam{};
}

FG01VARuntimeIkParam AG01CharacterVisualActor::GetIkParam() const {
    return FG01VARuntimeIkParam{};
}

void AG01CharacterVisualActor::FindIkParam_CCDIK(EG01VAIkPartType InPart, bool& OutIsFound, FG01VACcdikTargetParam& OutParam) const {
}

bool AG01CharacterVisualActor::DeactivateIK(EG01VAIkPartType InPart) {
    return false;
}

bool AG01CharacterVisualActor::ActivateIK(EG01VAIkPartType InPart) {
    return false;
}


