#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "GraphicsSettingManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GraphicsSettingManagerBase -FallbackName=GraphicsSettingManagerBase
#include "EG01AspectRatioTypeEnum.h"
#include "EG01GraphicsPresetTypeEnum.h"
#include "EG01RenderingTypeEnum.h"
#include "EG01ScreenModeTypeEnum.h"
#include "EG01ShadowQualityTypeEnum.h"
#include "EG01TextureQualityTypeEnum.h"
#include "G01GraphicsSettingManagerInterface.h"
#include "G01GraphicsSettingManagerObserverInf.h"
#include "G01OptionSettingParamStruct.h"
#include "G01GraphicsSettingManager.generated.h"

class UCameraComponent;

UCLASS(Blueprintable)
class RS2RE_API AG01GraphicsSettingManager : public AGraphicsSettingManagerBase, public IG01GraphicsSettingManagerInterface, public IG01GraphicsSettingManagerObserverInf {
    GENERATED_BODY()
public:
    AG01GraphicsSettingManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void UpdateCameraAspectAndFieldOfView(UCameraComponent* InCamera, float InFov16, float InFov21);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAspectSetting();
    
    UFUNCTION(BlueprintCallable)
    void SetOptionSettingParamTextureQualityType(EG01TextureQualityTypeEnum InTextureQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionSettingParamShadowQualityType(EG01ShadowQualityTypeEnum InShadowQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionSettingParamRenderingType(EG01RenderingTypeEnum InRenderingType);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionSettingParamGraphicsPresetType(EG01GraphicsPresetTypeEnum GraphicsPresetType);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionSettingParamAntiAliasing(bool InAntiAliasing);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceConstrainAspectRatio(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAllSettings(EG01ScreenModeTypeEnum InGameScreenMode, FIntPoint InScreenResolution, bool InGameEnableAnti, EG01TextureQualityTypeEnum InGameTextureFilteringQuality, EG01ShadowQualityTypeEnum InGameShadowQuality, EG01RenderingTypeEnum InGameRenderingQuality);
    
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    bool Has_21_9_AspectResolution();
    
    UFUNCTION(BlueprintCallable)
    FG01OptionSettingParamStruct GetOptionSettingParam();
    
    UFUNCTION(BlueprintCallable)
    static EG01AspectRatioTypeEnum GetGameAspectRatio(FIntPoint InResolution);
    
    UFUNCTION(BlueprintCallable)
    void ForceConstrainAspectRatioTest();
    

    // Fix for true pure virtual functions not being implemented
};

