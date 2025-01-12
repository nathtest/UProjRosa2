#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01AchievementID.h"
#include "G01PeriodJumpUicontrollerInf.generated.h"

class UAccessorActorComponentBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01PeriodJumpUicontrollerInf : public UInterface {
    GENERATED_BODY()
};

class IG01PeriodJumpUicontrollerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodJump_ReserveAchievement(FG01AchievementID InAchievementID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodJump_OpenRequest(UAccessorActorComponentBase* InRequestAccessor, int32 Period);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodJump_Close();
    
};

