#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01PeriodManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01PeriodManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01PeriodManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PeriodManager_PeriodJump();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PeriodManager_OnPeriodCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PeriodManager_OnChangeTotalJumpPoint(int32 InPoint, int32 InPrePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PeriodManager_OnChangeRankPoint(int32 InPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PeriodManager_OnChangeCurrentjumpPoint(int32 InPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01PeriodManager_GenerationChange(int32 InPrevGeneration, int32 InNextGeneration);
    
};

