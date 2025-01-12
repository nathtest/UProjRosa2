#include "G01VisualActorParamDataAsset.h"

UG01VisualActorParamDataAsset::UG01VisualActorParamDataAsset() {
    this->IsOverrideBattleIkSettings = false;
}

FG01VAParamWeaponCustomDataAll UG01VisualActorParamDataAsset::GetWeaponCustomData() const {
    return FG01VAParamWeaponCustomDataAll{};
}

FG01VAIkSettings UG01VisualActorParamDataAsset::GetIkSettings(EG01VAIkPartType InType, FName InMotionType) const {
    return FG01VAIkSettings{};
}

FG01VAIkCommonSettings UG01VisualActorParamDataAsset::GetIkCommonSettings() const {
    return FG01VAIkCommonSettings{};
}

FG01VisualActorFacialDataAll UG01VisualActorParamDataAsset::GetFacialData() const {
    return FG01VisualActorFacialDataAll{};
}

FG01VAParamWeaponCustomData UG01VisualActorParamDataAsset::FindWeaponCustomData(FName InWeaponType, FName InMotionType) const {
    return FG01VAParamWeaponCustomData{};
}

void UG01VisualActorParamDataAsset::CopytoBattleIkSettings() {
}


