#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01AspectRatioTypeEnum.h"
#include "EG01GraphicsPresetTypeEnum.h"
#include "EG01RenderingTypeEnum.h"
#include "EG01ScreenModeTypeEnum.h"
#include "EG01ShadowQualityTypeEnum.h"
#include "EG01TextureQualityTypeEnum.h"
#include "G01GraphicsSettingManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01GraphicsSettingManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01GraphicsSettingManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAspectSetting();
    
    UFUNCTION(BlueprintCallable)
    void SetTextureQuality(EG01TextureQualityTypeEnum InGameQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowQuality(EG01ShadowQualityTypeEnum InGameQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderingQuality(EG01RenderingTypeEnum InGameQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetGraphicsPreset(EG01GraphicsPresetTypeEnum InPresetType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentScreenResolution(FIntPoint InScreenResolution);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentScreenMode(EG01ScreenModeTypeEnum InScreenMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightness(float InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetBootGameFlag(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingQuality(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    EG01TextureQualityTypeEnum GetTextureQuality();
    
    UFUNCTION(BlueprintCallable)
    EG01ShadowQualityTypeEnum GetShadowQuality();
    
    UFUNCTION(BlueprintCallable)
    EG01RenderingTypeEnum GetRenderingQuality();
    
    UFUNCTION(BlueprintCallable)
    FIntPoint GetCurrentScreenResolution();
    
    UFUNCTION(BlueprintCallable)
    EG01ScreenModeTypeEnum GetCurrentScreenMode();
    
    UFUNCTION(BlueprintCallable)
    EG01AspectRatioTypeEnum GetCurrentAspectRatio();
    
    UFUNCTION(BlueprintCallable)
    bool GetBootGameFlag();
    
    UFUNCTION(BlueprintCallable)
    TArray<FIntPoint> GetAspectResolutionList(EG01AspectRatioTypeEnum InAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    bool GetAntiAliasingQuality();
    
    UFUNCTION(BlueprintCallable)
    TArray<FIntPoint> GetAllResolutionList();
    
    UFUNCTION(BlueprintCallable)
    void AutoGraphicsSetting();
    
};

