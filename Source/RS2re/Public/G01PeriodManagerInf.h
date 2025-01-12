#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01EventTriggerID.h"
#include "G01PeriodManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01PeriodManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01PeriodManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodManager_SubCurrentJumpPoint(const FG01EventTriggerID& InEventPointID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodManager_SetEnablePeriodJump(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01PeriodManager_GetTotalJumpPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01PeriodManager_GetRankPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01PeriodManager_GetPreJumpPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01PeriodManager_GetCurrentJumpPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodManager_Debug_ResetTotalJumpPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodManager_Debug_ResetRankPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodManager_Debug_ResetJumpPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodManager_CheckEnablePeriodJump(bool& OutIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodManager_AddJumpPointListAndPeriodJump(const TArray<FG01EventTriggerID>& InEventTriggerIdList, bool& OutIsJumped);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodManager_AddJumpPointAndPeriodJump(const FG01EventTriggerID& InEventTriggerID, bool& OutIsJumped);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01PeriodManager_AddCurrentJumpPoint(const FG01EventTriggerID& InEventPointID);
    
};

