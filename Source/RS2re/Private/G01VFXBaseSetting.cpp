#include "G01VFXBaseSetting.h"

FG01VFXBaseSetting::FG01VFXBaseSetting() {
    this->VFXDestActor = EG01VFXDestActor::NonUse;
    this->VFXDestActorSubCategory = EG01VFXDestActorSubCategory::NonUse;
    this->VFXAttachType = EG01VFXAttachType::NonUse;
    this->VFXAttachTypeSubInfo = EG01VFXAttachTypeSubInfo::Default;
    this->VFXAttachMethod = EG01VFXAttachMethod::DefaultMethod;
    this->VFXScalingType = EG01VFXScalingType::NotScaling;
    this->VFXUserScale = 0.00f;
    this->VFXBattleHitSync = EG01VFXBattleHitSetting::NotSync;
}

