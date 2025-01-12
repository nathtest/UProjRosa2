#include "G01OptionSettingParamStruct.h"

FG01OptionSettingParamStruct::FG01OptionSettingParamStruct() {
    this->MasterVolume = 0.00f;
    this->BgmVolume = 0.00f;
    this->SeVolume = 0.00f;
    this->VoiceVolume = 0.00f;
    this->isUseRemakeBGM = false;
    this->IsInactiveMute = false;
    this->IsInactiveControl = false;
    this->IsEventSubTitle = false;
    this->MessageSpeedType = EG01MessageSpeedTypeEnum::STANDARD;
    this->IsDistinationTargetDisp = false;
    this->IsMinimapDisp = false;
    this->IsMinimapRotate = false;
    this->IsQuestAutoTarget = false;
    this->IsQuestIconDisp = false;
    this->IsUpDateQuestDisp = false;
    this->IsNoticeDisp = false;
    this->IsCraftPartsDisp = false;
    this->IsGuideDisp = false;
    this->IsCursorMemory = false;
    this->IsBattleEnemyStatusBarDisp = false;
    this->IsBattleWeakRegistDisp = false;
    this->BattleTimeLineDispType = EG01BattleTimeLineTypeEnum::TWO_TRUN;
    this->BattleCommandEnemySelect = EG01BattleCommandSelectTypeEnum::ONE_STEP;
    this->BattleCommandFriendSelect = EG01BattleCommandSelectTypeEnum::ONE_STEP;
    this->IsLightBulbDisp = false;
    this->IsGeoFeaturesDisp = false;
    this->IsCameraUpDownReverse = false;
    this->IsCameraRightLeftReverse = false;
    this->CameraSpeed = 0;
    this->IsAutoSave = false;
    this->DashType = EG01PlayerDashType::Auto;
    this->IsControllerVibration = false;
    this->MouseSensitivity = 0;
    this->MouseAcceleration = 0;
    this->MouseUpDownReverse = false;
    this->MouseLeftRightReverse = false;
    this->ImageQualityAuto = false;
    this->GraphicsPresetType = EG01GraphicsPresetTypeEnum::LOW;
    this->Brightness = 0;
    this->IsHigyDynamicRange = false;
    this->Luminance = 0;
    this->ScreenModeType = EG01ScreenModeTypeEnum::WINDOW;
    this->RefreshRateType = EG01RefreshRateTypeEnum::RATE_30HZ;
    this->AspectRatioType = EG01AspectRatioTypeEnum::ASPECT_16_9;
    this->FrameRateType = EG01FrameRateTypeEnum::FRAMERATE_30;
    this->IsVSync = false;
    this->IsAntiAliasing = false;
    this->IsTextureFiltering = EG01TextureQualityTypeEnum::LOW;
    this->ShadowQualityType = EG01ShadowQualityTypeEnum::LOW;
    this->RenderingType = EG01RenderingTypeEnum::LOW;
}

