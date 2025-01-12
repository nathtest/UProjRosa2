#include "G01VFXBaseToTargetSetting.h"

FG01VFXBaseToTargetSetting::FG01VFXBaseToTargetSetting() {
    this->VFXDestActor = EG01VFXDestActor::NonUse;
    this->VFXDestActorSubCategory = EG01VFXDestActorSubCategory::NonUse;
    this->VFXAttachType = EG01VFXAttachType::NonUse;
    this->VFXAttachTypeSubInfo = EG01VFXAttachTypeSubInfo::Default;
    this->VFXAttachMethod = EG01VFXAttachMethod::DefaultMethod;
}

