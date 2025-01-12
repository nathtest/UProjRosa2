#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
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
#include "G01GameSystemDataManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01GameSystemDataManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01GameSystemDataManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVoiceVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceSelect(FG01VoiceLanguageID InLanguageID);
    
    UFUNCTION(BlueprintCallable)
    void SetTextSelect(FG01TextLanguageID InLanguageID);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowQualityType(EG01ShadowQualityTypeEnum InShadowQualityType);
    
    UFUNCTION(BlueprintCallable)
    void SetSeVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenResolutionType(FIntPoint InScreenResolutionType);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenModeType(EG01ScreenModeTypeEnum InScreenModeType);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderingType(EG01RenderingTypeEnum InRenderingType);
    
    UFUNCTION(BlueprintCallable)
    void SetRefreshRateType(EG01RefreshRateTypeEnum InRefreshRateType);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseUpDownType(bool IsMouseUpDownReverse);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivity(int32 InMouseSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseLeftRightType(bool IsMouseLeftRightReverse);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseAcceleration(int32 InMouseAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetMessageSpeed(EG01MessageSpeedTypeEnum InMessageSpeedType);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetLightBulbDisp(bool IsLightBulbDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetIsVSync(bool InIsVSync);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUseRamekeBgm(bool InIsUseRamakeBgm);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUpDateQuestDisp(bool InIsUpDateQuestDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTextureFiltering(EG01TextureQualityTypeEnum InTextureFiltering);
    
    UFUNCTION(BlueprintCallable)
    void SetIsQuestIconDisp(bool InIsQuestIconDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetIsQuestAutoTarget(bool InIsQuestAutoTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNoticeDisp(bool InIsNoticeDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMinimapRotate(bool InIsMinimapRotate);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMinimapDisp(bool InIsMinimapDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInactiveMute(bool InIsInactiveMute);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInactiveControl(bool InIsInactiveControl);
    
    UFUNCTION(BlueprintCallable)
    void SetIsHighDynamicRange(bool InIsHighDynamicRange);
    
    UFUNCTION(BlueprintCallable)
    void SetIsGuideDisp(bool InIsGuideDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEventSubTitle(bool InIsEventSubTitle);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDistinationTargetDisp(bool InIsDistinationTargetDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCursorMemory(bool InIsCursorMemory);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCraftPartsDisp(bool InIsCraftPartsDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetIsControllerVibration(bool InIsControllerVibration);
    
    UFUNCTION(BlueprintCallable)
    void SetIsClear(bool InIsClear);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBattleWeakRegistDisp(bool InIsBattleWeakRegistDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBattleEnemyStatusBarDisp(bool InIsBattleEnemyStatusBarDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAutoSave(bool InIsAutoSave);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAntiAliasing(bool InIsAntiAliasing);
    
    UFUNCTION(BlueprintCallable)
    void SetImageQualityAuto(bool IsImageQualityAuto);
    
    UFUNCTION(BlueprintCallable)
    void SetHdrLuminance(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphicsPresetType(EG01GraphicsPresetTypeEnum InGraphicsPresetType);
    
    UFUNCTION(BlueprintCallable)
    void SetGeoFeaturesDisp(bool IsGeoFeatures);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateType(EG01FrameRateTypeEnum InFrameRateType);
    
    UFUNCTION(BlueprintCallable)
    void SetDashType(EG01PlayerDashType InDashType);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraUpDownType(bool IsCameraUpDownReverse);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSpeed(int32 InCameraSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraRightLeftType(bool IsCameraRightLeftReverse);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightness(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTimeLineDisp(EG01BattleTimeLineTypeEnum InBattleTimeLineDisp);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleCommandFriendSelect(EG01BattleCommandSelectTypeEnum InBattleCommandSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleCommandEnemySelect(EG01BattleCommandSelectTypeEnum InBattleCommandSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetAspectRatioType(EG01AspectRatioTypeEnum InAspectRatioType);
    
    UFUNCTION(BlueprintCallable)
    void GetVoiceVolume(float& OutVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVoiceSelect(FG01VoiceLanguageID& OutLanguageID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTextSelect(FG01TextLanguageID& OutLanguageID) const;
    
    UFUNCTION(BlueprintCallable)
    void GetShadowQualityType(EG01ShadowQualityTypeEnum& OutShadowQualityType);
    
    UFUNCTION(BlueprintCallable)
    void GetSeVolume(float& OutVolume);
    
    UFUNCTION(BlueprintCallable)
    void GetScreenResolutionType(FIntPoint& OutScreenResolutionType);
    
    UFUNCTION(BlueprintCallable)
    void GetScreenModeType(EG01ScreenModeTypeEnum& OutScreenModeType);
    
    UFUNCTION(BlueprintCallable)
    void GetRenderingType(EG01RenderingTypeEnum& OutRenderingType);
    
    UFUNCTION(BlueprintCallable)
    void GetRefreshRateType(EG01RefreshRateTypeEnum& OutRefreshRateType);
    
    UFUNCTION(BlueprintCallable)
    void GetOptionSettingInitData(FG01OptionSettingParamStruct& OutOptionParams);
    
    UFUNCTION(BlueprintCallable)
    void GetMouseUpDownType(bool& IsMouseUpDownReverse);
    
    UFUNCTION(BlueprintCallable)
    void GetMouseSensitivity(int32& OutMouseSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void GetMouseLeftRightType(bool& IsMouseLeftRightReverse);
    
    UFUNCTION(BlueprintCallable)
    void GetMouseAcceleration(int32& OutMouseAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void GetMessageSpeed(EG01MessageSpeedTypeEnum& OutMessageSpeedType);
    
    UFUNCTION(BlueprintCallable)
    void GetMasterVolume(float& OutVolume);
    
    UFUNCTION(BlueprintCallable)
    void GetLightBulbDisp(bool& IsLightBulbDisp);
    
    UFUNCTION(BlueprintCallable)
    void GetIsVSync(bool& OutIsVSync);
    
    UFUNCTION(BlueprintCallable)
    void GetIsUseRamakeBgm(bool& OutIsUseRamakeBgm);
    
    UFUNCTION(BlueprintCallable)
    void GetIsUpDateQuestDisp(bool& OutIsUpDateQuestDisp);
    
    UFUNCTION(BlueprintCallable)
    void GetIsTextureFiltering(EG01TextureQualityTypeEnum& OutTextureFiltering);
    
    UFUNCTION(BlueprintCallable)
    void GetIsQuestIconDisp(bool& OutIsQuestIconDisp);
    
    UFUNCTION(BlueprintCallable)
    void GetIsQuestAutoTarget(bool& OutIsQuestAutoTarget);
    
    UFUNCTION(BlueprintCallable)
    void GetIsNoticeDisp(bool& OutIsNoticeDisp);
    
    UFUNCTION(BlueprintCallable)
    void GetIsMinimapRotate(bool& OutIsMinimapRotate);
    
    UFUNCTION(BlueprintCallable)
    void GetIsMinimapDisp(bool& OutIsMinimapDisp);
    
    UFUNCTION(BlueprintCallable)
    void GetIsInactiveMute(bool& OutIsInactiveMute);
    
    UFUNCTION(BlueprintCallable)
    void GetIsInactiveControl(bool& OutIsInactiveControl);
    
    UFUNCTION(BlueprintCallable)
    void GetIsHighDynamicRange(bool& OutIsHighDynamicRange);
    
    UFUNCTION(BlueprintCallable)
    void GetIsGuideDisp(bool& OutIsGuideDisp);
    
    UFUNCTION(BlueprintCallable)
    void GetIsEventSubTitle(bool& OutIsEventSubTitle);
    
    UFUNCTION(BlueprintCallable)
    void GetIsDistinationTargetDisp(bool& OutIsDistinationTargetDisp);
    
    UFUNCTION(BlueprintCallable)
    void GetIsCursorMemory(bool& OutIsCursorMemory);
    
    UFUNCTION(BlueprintCallable)
    void GetIsCraftPartsDisp(bool& OutIsCraftPartsDisp);
    
    UFUNCTION(BlueprintCallable)
    void GetIsControllerVibration(bool& OutIsControllerVibration);
    
    UFUNCTION(BlueprintCallable)
    void GetIsClear(bool& OutIsClear);
    
    UFUNCTION(BlueprintCallable)
    void GetIsBattleWeakRegistDisp(bool& OutIsBattleWeakRegistDisp);
    
    UFUNCTION(BlueprintCallable)
    void GetIsBattleEnemyStatusBarDisp(bool& OutIsBattleEnemyStatusBarDisp);
    
    UFUNCTION(BlueprintCallable)
    void GetIsAutoSave(bool& OutIsAutoSave);
    
    UFUNCTION(BlueprintCallable)
    void GetIsAntiAliasing(bool& OutIsAntiAliasing);
    
    UFUNCTION(BlueprintCallable)
    void GetImageQualityAuto(bool& OutImageQualityAuto);
    
    UFUNCTION(BlueprintCallable)
    void GetHdrLuminance(int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    void GetGraphicsPresetType(EG01GraphicsPresetTypeEnum& OutGraphicsPresetType);
    
    UFUNCTION(BlueprintCallable)
    void GetGeoFeaturesDisp(bool& IsGeoFeatures);
    
    UFUNCTION(BlueprintCallable)
    void GetFrameRateType(EG01FrameRateTypeEnum& OutFrameRateType);
    
    UFUNCTION(BlueprintCallable)
    void GetDashType(EG01PlayerDashType& OutDashType);
    
    UFUNCTION(BlueprintCallable)
    void GetCameraUpDownType(bool& IsCameraUpDownReverse);
    
    UFUNCTION(BlueprintCallable)
    void GetCameraSpeed(int32& OutCameraSpeed);
    
    UFUNCTION(BlueprintCallable)
    void GetCameraRightLeftType(bool& IsCameraRightLeftReverse);
    
    UFUNCTION(BlueprintCallable)
    void GetBrightness(int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    void GetBgmVolume(float& OutVolume);
    
    UFUNCTION(BlueprintCallable)
    void GetBattleTimeLineDisp(EG01BattleTimeLineTypeEnum& OutBattleTimeLineDisp);
    
    UFUNCTION(BlueprintCallable)
    void GetBattleCommandFriendSelect(EG01BattleCommandSelectTypeEnum& OutBattleCommandSelect);
    
    UFUNCTION(BlueprintCallable)
    void GetBattleCommandEnemySelect(EG01BattleCommandSelectTypeEnum& OutBattleCommandSelect);
    
    UFUNCTION(BlueprintCallable)
    void GetAspectRatioType(EG01AspectRatioTypeEnum& OutAspectRatioType);
    
};

