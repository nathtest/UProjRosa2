#include "G01OptionMenuDataStruct.h"

FG01OptionMenuDataStruct::FG01OptionMenuDataStruct() {
    this->OptionListType = EG01OptionMenuListTypeEnum::SELECT;
    this->UninitializedFlag = false;
    this->SliderSetting = EG01OptionMenuSliderSettingEnum::NONE;
    this->Affect = EG01OptionMenuAffectScopeEnum::ALL;
    this->IsPC = false;
    this->IsBackTitle = false;
    this->IsClear = false;
}

