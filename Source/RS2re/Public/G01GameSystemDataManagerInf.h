#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01AspectRatioTypeEnum.h"
#include "EG01BattleCommandSelectTypeEnum.h"
#include "EG01BattleTimeLineTypeEnum.h"
#include "EG01FrameRateTypeEnum.h"
#include "EG01GraphicsPresetTypeEnum.h"
#include "EG01MessageSpeedTypeEnum.h"
#include "EG01PlayerDashType.h"
#include "EG01RefreshRateTypeEnum.h"
#include "EG01RenderingTypeEnum.h"
#include "EG01ScreenModeTypeEnum.h"
#include "EG01ShadowQualityTypeEnum.h"
#include "EG01TextureQualityTypeEnum.h"
#include "G01OptionSettingParamStruct.h"
#include "G01TextLanguageID.h"
#include "G01VoiceLanguageID.h"
#include "G01GameSystemDataManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GameSystemDataManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01GameSystemDataManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetVoiceVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetVoiceSelect(const FG01VoiceLanguageID& InLanguageID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetTextSelect(const FG01TextLanguageID& InLanguageID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetShadowQualityType(EG01ShadowQualityTypeEnum InShadowQualityType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetSeVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetScreenResolutionType(FIntPoint InScreenResolutionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetScreenModeType(EG01ScreenModeTypeEnum InScreenModeType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetRenderingType(EG01RenderingTypeEnum InRenderingType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetRefreshRateType(EG01RefreshRateTypeEnum InRefreshRateType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetMouseUpDownType(bool InMouseUpDownReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetMouseSensitivity(int32 InMouseSensitivity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetMouseLeftRightType(bool InMouseLeftRightReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetMouseAcceleration(int32 InMouseAcceleration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetMessageSpeed(EG01MessageSpeedTypeEnum InMessageSpeedType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetMasterVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetLightBulbDisp(bool IsLightBulbDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsVSync(bool InIsVSync);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsUseRamekeBgm(bool InIsUseRamakeBgm);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsUpDateQuestDisp(bool InIsUpDateQuestDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsTextureFiltering(EG01TextureQualityTypeEnum InIsTextureFiltering);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsQuestIconDisp(bool InIsQuestIconDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsQuestAutoTarget(bool InIsQuestAutoTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsNoticeDisp(bool InIsNoticeDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsMinimapRotate(bool InIsMinimapRotate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsMinimapDisp(bool InIsMinimapDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsInactiveMute(bool InIsInactiveMute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsInactiveControl(bool InIsInactiveControl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsHigyDynamicRange(bool InIsHigyDynamicRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsGuideDisp(bool InIsGuideDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsEventSubTitle(bool InIsEventSubTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsDistinationTargetDisp(bool InIsDistinationTargetDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsCursorMemory(bool InIsCursorMemory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsCraftPartsDisp(bool InIsCraftPartsDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsControllerVibration(bool InIsControllerVibration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsClear(bool InIsClear);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsBattleWeakRegistDisp(bool InIsBattleWeakRegistDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsBattleEnemyStatusBarDisp(bool InIsBattleEnemyStatusBarDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsAutoSave(bool InIsAutoSave);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetIsAntiAliasing(bool InIsAntiAliasing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetImageQualityAuto(bool InImageQualityAuto);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetHdrLuminance(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetGraphicsPresetType(EG01GraphicsPresetTypeEnum InGraphicsPresetType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetGeoFeaturesDisp(bool IsGeoFeaturesDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetFrameRateType(EG01FrameRateTypeEnum InFrameRateType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetDashType(EG01PlayerDashType InDashType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetCameraUpDownType(bool IsCameraUpDownReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetCameraSpeed(int32 InCameraSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetCameraRightLeftType(bool IsCameraRightLeftReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetBrightness(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetBgmVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetBattleTimeLineDisp(EG01BattleTimeLineTypeEnum InBattleTimeLineDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetBattleCommandFriendSelect(EG01BattleCommandSelectTypeEnum InBattleCommandSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetBattleCommandEnemySelect(EG01BattleCommandSelectTypeEnum InBattleCommandSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_SetAspectRatioType(EG01AspectRatioTypeEnum InAspectRatioType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetVoiceVolume(float& OutVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetVoiceSelect(FG01VoiceLanguageID& OutLanguageID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetTextSelect(FG01TextLanguageID& OutLanguageID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetShadowQualityType(EG01ShadowQualityTypeEnum& OutShadowQualityType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetSeVolume(float& OutVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetScreenResolutionType(FIntPoint& OutScreenResolutionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetScreenModeType(EG01ScreenModeTypeEnum& OutScreenModeType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetRenderingType(EG01RenderingTypeEnum& OutRenderingType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetRefreshRateType(EG01RefreshRateTypeEnum& OutRefreshRateType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetOptionSettingInitData(FG01OptionSettingParamStruct& OutOptionParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetOptionSettingCurrentData(FG01OptionSettingParamStruct& OutOptionParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetMouseUpDownType(bool& OutMouseUpDownReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetMouseSensitivity(int32& OutMouseSensitivity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetMouseLeftRightType(bool& OutMouseLeftRightReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetMouseAcceleration(int32& OutMouseAcceleration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetMessageSpeed(EG01MessageSpeedTypeEnum& OutMessageSpeedType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetMasterVolume(float& OutVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetLightBulbDisp(bool& IsLightBulbDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsVSync(bool& OutIsVSync);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsUseRamakeBgm(bool& OutIsUseRamakeBgm);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsUpDateQuestDisp(bool& OutIsUpDateQuestDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsTextureFiltering(EG01TextureQualityTypeEnum& OutIsTextureFiltering);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsQuestIconDisp(bool& OutIsQuestIconDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsQuestAutoTarget(bool& OutIsQuestAutoTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsNoticeDisp(bool& OutIsNoticeDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsMinimapRotate(bool& OutIsMinimapRotate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsMinimapDisp(bool& OutIsMinimapDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsInactiveMute(bool& OutIsInactiveMute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsInactiveControl(bool& OutIsInactiveControl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsHigyDynamicRange(bool& OutIsHigyDynamicRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsGuideDisp(bool& OutIsGuideDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsEventSubTitle(bool& OutIsEventSubTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsDistinationTargetDisp(bool& OutIsDistinationTargetDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsCursorMemory(bool& OutIsCursorMemory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsCraftPartsDisp(bool& OutIsCraftPartsDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsControllerVibration(bool& OutIsControllerVibration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsClear(bool& OutIsClear);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsBattleWeakRegistDisp(bool& OutIsBattleWeakRegistDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsBattleEnemyStatusBarDisp(bool& OutIsBattleEnemyStatusBarDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsAutoSave(bool& OutIsAutoSave);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetIsAntiAliasing(bool& OutIsAntiAliasing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetImageQualityAuto(bool& OutImageQualityAuto);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetHdrLuminance(int32& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetGraphicsPresetType(EG01GraphicsPresetTypeEnum& OutGraphicsPresetType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetGeoFeaturesDisp(bool& IsGeoFeaturesDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetFrameRateType(EG01FrameRateTypeEnum& OutFrameRateType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetDashType(EG01PlayerDashType& OutDashType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetCameraUpDownType(bool& IsCameraUpDownReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetCameraSpeed(int32& OutCameraSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetCameraRightLeftType(bool& IsCameraRightLeftReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetBrightness(int32& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetBgmVolume(float& OutVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetBattleTimeLineDisp(EG01BattleTimeLineTypeEnum& OutBattleTimeLineDisp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetBattleCommandFriendSelect(EG01BattleCommandSelectTypeEnum& OutBattleCommandSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetBattleCommandEnemySelect(EG01BattleCommandSelectTypeEnum& OutBattleCommandSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GameSystemDataManagerInf_GetAspectRatioType(EG01AspectRatioTypeEnum& OutAspectRatioType);
    
};

