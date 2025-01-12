#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "G01BattleCameraPhaseDebugInfo.h"
#include "G01DebugBattleCameraActorSubWindow.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01DebugBattleCameraActorSubWindow : public AG01DebugMenuActorSubWindow {
    GENERATED_BODY()
public:
    AG01DebugBattleCameraActorSubWindow(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void PhaseTableGUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsHideExcludePhase(bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPhaseTableSortType(FName& OutType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDebugPhaseInfo(FG01BattleCameraPhaseDebugInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentPhaseTypeColor(FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentPhaseIdColor(FLinearColor& OutColor);
    
};

