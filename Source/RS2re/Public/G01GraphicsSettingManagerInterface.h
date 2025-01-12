#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01AspectRatioTypeEnum.h"
#include "EG01FrameRateTypeEnum.h"
#include "EG01GraphicsPresetTypeEnum.h"
#include "EG01RenderingTypeEnum.h"
#include "EG01ScreenModeTypeEnum.h"
#include "EG01ShadowQualityTypeEnum.h"
#include "EG01TextureQualityTypeEnum.h"
#include "G01GraphicsSettingManagerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GraphicsSettingManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01GraphicsSettingManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_UpdateAspectSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_SetVSync(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_SetTextureQuality(EG01TextureQualityTypeEnum InGameQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_SetShadowQuality(EG01ShadowQualityTypeEnum InGameQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_SetRenderingQuality(EG01RenderingTypeEnum InGameQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_SetMaxFPS(EG01FrameRateTypeEnum InMaxFPS);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_SetGraphicsPreset(EG01GraphicsPresetTypeEnum InPresetType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_SetCurrentScreenResolution(FIntPoint InScreenResolution);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_SetCurrentScreenMode(EG01ScreenModeTypeEnum InScreenMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_SetBrightness(float InPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_SetBootGameFlag(bool InFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_SetAntiAliasingQuality(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EG01TextureQualityTypeEnum Inf_G01GraphicsSettingManager_GetTextureQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EG01ShadowQualityTypeEnum Inf_G01GraphicsSettingManager_GetShadowQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EG01RenderingTypeEnum Inf_G01GraphicsSettingManager_GetRenderingQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FIntPoint Inf_G01GraphicsSettingManager_GetCurrentScreenResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EG01ScreenModeTypeEnum Inf_G01GraphicsSettingManager_GetCurrentScreenMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EG01AspectRatioTypeEnum Inf_G01GraphicsSettingManager_GetCurrentAspectRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01GraphicsSettingManager_GetBootGameFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FIntPoint> Inf_G01GraphicsSettingManager_GetAspectResolutionList(EG01AspectRatioTypeEnum InAspectRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01GraphicsSettingManager_GetAntiAliasingQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FIntPoint> Inf_G01GraphicsSettingManager_GetAllResolutionList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01GraphicsSettingManager_AutoGraphicsSetting();
    
};

