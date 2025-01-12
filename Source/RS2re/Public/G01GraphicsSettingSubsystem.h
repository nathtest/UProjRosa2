#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "AppNotificationObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppNotificationObserverInf -FallbackName=AppNotificationObserverInf
#include "SaveDataUserSubsystemBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataUserSubsystemBase -FallbackName=SaveDataUserSubsystemBase
#include "EG01FrameRateTypeEnum.h"
#include "G01GraphicsSettingSubsystem.generated.h"

class UG01GameSystemDataSubsystem;

UCLASS(Blueprintable)
class RS2RE_API UG01GraphicsSettingSubsystem : public USaveDataUserSubsystemBase, public IAppNotificationObserverInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntPoint> MAllResolutionList;
    
public:
    UG01GraphicsSettingSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetVSync(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFPS(EG01FrameRateTypeEnum InMaxFPS);
    
    UFUNCTION(BlueprintCallable)
    void SetGamma(float InGamma);
    
    UFUNCTION(BlueprintCallable)
    void SetBootGameFlag(bool InFlag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UG01GameSystemDataSubsystem* GetGameSystemDataSubsystem() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetBootGameFlag();
    
    UFUNCTION(BlueprintCallable)
    TArray<FIntPoint> GetAllResolutionList();
    
    UFUNCTION(BlueprintCallable)
    void CreateAllResolutionList();
    
    UFUNCTION(BlueprintCallable)
    float ConvBrightnessToGamma(float inBrightness);
    
    UFUNCTION(BlueprintCallable)
    void ConfigurePerformance();
    
    UFUNCTION(BlueprintCallable)
    void AutoGraphicsSetting();
    

    // Fix for true pure virtual functions not being implemented
};

