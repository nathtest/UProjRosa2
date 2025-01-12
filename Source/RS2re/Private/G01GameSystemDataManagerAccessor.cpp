#include "G01GameSystemDataManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01GameSystemDataManagerAccessor::UG01GameSystemDataManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_GAMESYSTEMDATA;
}

void UG01GameSystemDataManagerAccessor::SetVoiceVolume(float InVolume) {
}

void UG01GameSystemDataManagerAccessor::SetVoiceSelect(FG01VoiceLanguageID InLanguageID) {
}

void UG01GameSystemDataManagerAccessor::SetTextSelect(FG01TextLanguageID InLanguageID) {
}

void UG01GameSystemDataManagerAccessor::SetShadowQualityType(EG01ShadowQualityTypeEnum InShadowQualityType) {
}

void UG01GameSystemDataManagerAccessor::SetSeVolume(float InVolume) {
}

void UG01GameSystemDataManagerAccessor::SetScreenResolutionType(FIntPoint InScreenResolutionType) {
}

void UG01GameSystemDataManagerAccessor::SetScreenModeType(EG01ScreenModeTypeEnum InScreenModeType) {
}

void UG01GameSystemDataManagerAccessor::SetRenderingType(EG01RenderingTypeEnum InRenderingType) {
}

void UG01GameSystemDataManagerAccessor::SetRefreshRateType(EG01RefreshRateTypeEnum InRefreshRateType) {
}

void UG01GameSystemDataManagerAccessor::SetMouseUpDownType(bool IsMouseUpDownReverse) {
}

void UG01GameSystemDataManagerAccessor::SetMouseSensitivity(int32 InMouseSensitivity) {
}

void UG01GameSystemDataManagerAccessor::SetMouseLeftRightType(bool IsMouseLeftRightReverse) {
}

void UG01GameSystemDataManagerAccessor::SetMouseAcceleration(int32 InMouseAcceleration) {
}

void UG01GameSystemDataManagerAccessor::SetMessageSpeed(EG01MessageSpeedTypeEnum InMessageSpeedType) {
}

void UG01GameSystemDataManagerAccessor::SetMasterVolume(float InVolume) {
}

void UG01GameSystemDataManagerAccessor::SetLightBulbDisp(bool IsLightBulbDisp) {
}

void UG01GameSystemDataManagerAccessor::SetIsVSync(bool InIsVSync) {
}

void UG01GameSystemDataManagerAccessor::SetIsUseRamekeBgm(bool InIsUseRamakeBgm) {
}

void UG01GameSystemDataManagerAccessor::SetIsUpDateQuestDisp(bool InIsUpDateQuestDisp) {
}

void UG01GameSystemDataManagerAccessor::SetIsTextureFiltering(EG01TextureQualityTypeEnum InTextureFiltering) {
}

void UG01GameSystemDataManagerAccessor::SetIsQuestIconDisp(bool InIsQuestIconDisp) {
}

void UG01GameSystemDataManagerAccessor::SetIsQuestAutoTarget(bool InIsQuestAutoTarget) {
}

void UG01GameSystemDataManagerAccessor::SetIsNoticeDisp(bool InIsNoticeDisp) {
}

void UG01GameSystemDataManagerAccessor::SetIsMinimapRotate(bool InIsMinimapRotate) {
}

void UG01GameSystemDataManagerAccessor::SetIsMinimapDisp(bool InIsMinimapDisp) {
}

void UG01GameSystemDataManagerAccessor::SetIsInactiveMute(bool InIsInactiveMute) {
}

void UG01GameSystemDataManagerAccessor::SetIsInactiveControl(bool InIsInactiveControl) {
}

void UG01GameSystemDataManagerAccessor::SetIsHighDynamicRange(bool InIsHighDynamicRange) {
}

void UG01GameSystemDataManagerAccessor::SetIsGuideDisp(bool InIsGuideDisp) {
}

void UG01GameSystemDataManagerAccessor::SetIsEventSubTitle(bool InIsEventSubTitle) {
}

void UG01GameSystemDataManagerAccessor::SetIsDistinationTargetDisp(bool InIsDistinationTargetDisp) {
}

void UG01GameSystemDataManagerAccessor::SetIsCursorMemory(bool InIsCursorMemory) {
}

void UG01GameSystemDataManagerAccessor::SetIsCraftPartsDisp(bool InIsCraftPartsDisp) {
}

void UG01GameSystemDataManagerAccessor::SetIsControllerVibration(bool InIsControllerVibration) {
}

void UG01GameSystemDataManagerAccessor::SetIsClear(bool InIsClear) {
}

void UG01GameSystemDataManagerAccessor::SetIsBattleWeakRegistDisp(bool InIsBattleWeakRegistDisp) {
}

void UG01GameSystemDataManagerAccessor::SetIsBattleEnemyStatusBarDisp(bool InIsBattleEnemyStatusBarDisp) {
}

void UG01GameSystemDataManagerAccessor::SetIsAutoSave(bool InIsAutoSave) {
}

void UG01GameSystemDataManagerAccessor::SetIsAntiAliasing(bool InIsAntiAliasing) {
}

void UG01GameSystemDataManagerAccessor::SetImageQualityAuto(bool IsImageQualityAuto) {
}

void UG01GameSystemDataManagerAccessor::SetHdrLuminance(int32 InValue) {
}

void UG01GameSystemDataManagerAccessor::SetGraphicsPresetType(EG01GraphicsPresetTypeEnum InGraphicsPresetType) {
}

void UG01GameSystemDataManagerAccessor::SetGeoFeaturesDisp(bool IsGeoFeatures) {
}

void UG01GameSystemDataManagerAccessor::SetFrameRateType(EG01FrameRateTypeEnum InFrameRateType) {
}

void UG01GameSystemDataManagerAccessor::SetDashType(EG01PlayerDashType InDashType) {
}

void UG01GameSystemDataManagerAccessor::SetCameraUpDownType(bool IsCameraUpDownReverse) {
}

void UG01GameSystemDataManagerAccessor::SetCameraSpeed(int32 InCameraSpeed) {
}

void UG01GameSystemDataManagerAccessor::SetCameraRightLeftType(bool IsCameraRightLeftReverse) {
}

void UG01GameSystemDataManagerAccessor::SetBrightness(int32 InValue) {
}

void UG01GameSystemDataManagerAccessor::SetBgmVolume(float InVolume) {
}

void UG01GameSystemDataManagerAccessor::SetBattleTimeLineDisp(EG01BattleTimeLineTypeEnum InBattleTimeLineDisp) {
}

void UG01GameSystemDataManagerAccessor::SetBattleCommandFriendSelect(EG01BattleCommandSelectTypeEnum InBattleCommandSelect) {
}

void UG01GameSystemDataManagerAccessor::SetBattleCommandEnemySelect(EG01BattleCommandSelectTypeEnum InBattleCommandSelect) {
}

void UG01GameSystemDataManagerAccessor::SetAspectRatioType(EG01AspectRatioTypeEnum InAspectRatioType) {
}

void UG01GameSystemDataManagerAccessor::GetVoiceVolume(float& OutVolume) {
}

void UG01GameSystemDataManagerAccessor::GetVoiceSelect(FG01VoiceLanguageID& OutLanguageID) const {
}

void UG01GameSystemDataManagerAccessor::GetTextSelect(FG01TextLanguageID& OutLanguageID) const {
}

void UG01GameSystemDataManagerAccessor::GetShadowQualityType(EG01ShadowQualityTypeEnum& OutShadowQualityType) {
}

void UG01GameSystemDataManagerAccessor::GetSeVolume(float& OutVolume) {
}

void UG01GameSystemDataManagerAccessor::GetScreenResolutionType(FIntPoint& OutScreenResolutionType) {
}

void UG01GameSystemDataManagerAccessor::GetScreenModeType(EG01ScreenModeTypeEnum& OutScreenModeType) {
}

void UG01GameSystemDataManagerAccessor::GetRenderingType(EG01RenderingTypeEnum& OutRenderingType) {
}

void UG01GameSystemDataManagerAccessor::GetRefreshRateType(EG01RefreshRateTypeEnum& OutRefreshRateType) {
}

void UG01GameSystemDataManagerAccessor::GetOptionSettingInitData(FG01OptionSettingParamStruct& OutOptionParams) {
}

void UG01GameSystemDataManagerAccessor::GetMouseUpDownType(bool& IsMouseUpDownReverse) {
}

void UG01GameSystemDataManagerAccessor::GetMouseSensitivity(int32& OutMouseSensitivity) {
}

void UG01GameSystemDataManagerAccessor::GetMouseLeftRightType(bool& IsMouseLeftRightReverse) {
}

void UG01GameSystemDataManagerAccessor::GetMouseAcceleration(int32& OutMouseAcceleration) {
}

void UG01GameSystemDataManagerAccessor::GetMessageSpeed(EG01MessageSpeedTypeEnum& OutMessageSpeedType) {
}

void UG01GameSystemDataManagerAccessor::GetMasterVolume(float& OutVolume) {
}

void UG01GameSystemDataManagerAccessor::GetLightBulbDisp(bool& IsLightBulbDisp) {
}

void UG01GameSystemDataManagerAccessor::GetIsVSync(bool& OutIsVSync) {
}

void UG01GameSystemDataManagerAccessor::GetIsUseRamakeBgm(bool& OutIsUseRamakeBgm) {
}

void UG01GameSystemDataManagerAccessor::GetIsUpDateQuestDisp(bool& OutIsUpDateQuestDisp) {
}

void UG01GameSystemDataManagerAccessor::GetIsTextureFiltering(EG01TextureQualityTypeEnum& OutTextureFiltering) {
}

void UG01GameSystemDataManagerAccessor::GetIsQuestIconDisp(bool& OutIsQuestIconDisp) {
}

void UG01GameSystemDataManagerAccessor::GetIsQuestAutoTarget(bool& OutIsQuestAutoTarget) {
}

void UG01GameSystemDataManagerAccessor::GetIsNoticeDisp(bool& OutIsNoticeDisp) {
}

void UG01GameSystemDataManagerAccessor::GetIsMinimapRotate(bool& OutIsMinimapRotate) {
}

void UG01GameSystemDataManagerAccessor::GetIsMinimapDisp(bool& OutIsMinimapDisp) {
}

void UG01GameSystemDataManagerAccessor::GetIsInactiveMute(bool& OutIsInactiveMute) {
}

void UG01GameSystemDataManagerAccessor::GetIsInactiveControl(bool& OutIsInactiveControl) {
}

void UG01GameSystemDataManagerAccessor::GetIsHighDynamicRange(bool& OutIsHighDynamicRange) {
}

void UG01GameSystemDataManagerAccessor::GetIsGuideDisp(bool& OutIsGuideDisp) {
}

void UG01GameSystemDataManagerAccessor::GetIsEventSubTitle(bool& OutIsEventSubTitle) {
}

void UG01GameSystemDataManagerAccessor::GetIsDistinationTargetDisp(bool& OutIsDistinationTargetDisp) {
}

void UG01GameSystemDataManagerAccessor::GetIsCursorMemory(bool& OutIsCursorMemory) {
}

void UG01GameSystemDataManagerAccessor::GetIsCraftPartsDisp(bool& OutIsCraftPartsDisp) {
}

void UG01GameSystemDataManagerAccessor::GetIsControllerVibration(bool& OutIsControllerVibration) {
}

void UG01GameSystemDataManagerAccessor::GetIsClear(bool& OutIsClear) {
}

void UG01GameSystemDataManagerAccessor::GetIsBattleWeakRegistDisp(bool& OutIsBattleWeakRegistDisp) {
}

void UG01GameSystemDataManagerAccessor::GetIsBattleEnemyStatusBarDisp(bool& OutIsBattleEnemyStatusBarDisp) {
}

void UG01GameSystemDataManagerAccessor::GetIsAutoSave(bool& OutIsAutoSave) {
}

void UG01GameSystemDataManagerAccessor::GetIsAntiAliasing(bool& OutIsAntiAliasing) {
}

void UG01GameSystemDataManagerAccessor::GetImageQualityAuto(bool& OutImageQualityAuto) {
}

void UG01GameSystemDataManagerAccessor::GetHdrLuminance(int32& OutValue) {
}

void UG01GameSystemDataManagerAccessor::GetGraphicsPresetType(EG01GraphicsPresetTypeEnum& OutGraphicsPresetType) {
}

void UG01GameSystemDataManagerAccessor::GetGeoFeaturesDisp(bool& IsGeoFeatures) {
}

void UG01GameSystemDataManagerAccessor::GetFrameRateType(EG01FrameRateTypeEnum& OutFrameRateType) {
}

void UG01GameSystemDataManagerAccessor::GetDashType(EG01PlayerDashType& OutDashType) {
}

void UG01GameSystemDataManagerAccessor::GetCameraUpDownType(bool& IsCameraUpDownReverse) {
}

void UG01GameSystemDataManagerAccessor::GetCameraSpeed(int32& OutCameraSpeed) {
}

void UG01GameSystemDataManagerAccessor::GetCameraRightLeftType(bool& IsCameraRightLeftReverse) {
}

void UG01GameSystemDataManagerAccessor::GetBrightness(int32& OutValue) {
}

void UG01GameSystemDataManagerAccessor::GetBgmVolume(float& OutVolume) {
}

void UG01GameSystemDataManagerAccessor::GetBattleTimeLineDisp(EG01BattleTimeLineTypeEnum& OutBattleTimeLineDisp) {
}

void UG01GameSystemDataManagerAccessor::GetBattleCommandFriendSelect(EG01BattleCommandSelectTypeEnum& OutBattleCommandSelect) {
}

void UG01GameSystemDataManagerAccessor::GetBattleCommandEnemySelect(EG01BattleCommandSelectTypeEnum& OutBattleCommandSelect) {
}

void UG01GameSystemDataManagerAccessor::GetAspectRatioType(EG01AspectRatioTypeEnum& OutAspectRatioType) {
}


