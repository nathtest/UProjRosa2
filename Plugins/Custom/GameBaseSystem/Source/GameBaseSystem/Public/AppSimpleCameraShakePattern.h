#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeScrubParams -FallbackName=CameraShakeScrubParams
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeStartParams -FallbackName=CameraShakeStartParams
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeUpdateParams -FallbackName=CameraShakeUpdateParams
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeUpdateResult -FallbackName=CameraShakeUpdateResult
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayCameras -ObjectName=SimpleCameraShakePattern -FallbackName=SimpleCameraShakePattern
#include "SimpleCameraShakePattern.h"
#include "AppSimpleCameraShakePattern.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)

// before USimpleCameraShakePattern
class GAMEBASESYSTEM_API UAppSimpleCameraShakePattern : public UObject {
    GENERATED_BODY()
public:
    UAppSimpleCameraShakePattern();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateShakePattern(const FCameraShakeUpdateParams& InParams, FCameraShakeUpdateResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartShakePattern(const FCameraShakeStartParams& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScrubShakePattern(const FCameraShakeScrubParams& InParams, FCameraShakeUpdateResult& OutResult);
    
};

