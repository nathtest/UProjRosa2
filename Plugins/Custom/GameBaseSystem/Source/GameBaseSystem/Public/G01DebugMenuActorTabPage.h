#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ImGuiHelper -ObjectName=DebugMenuTabActorBase -FallbackName=DebugMenuTabActorBase
#include "DebugMenuTabActorBase.h"
#include "G01DebugMenuActorTabPage.generated.h"

class UG01DebugBPImGui;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AG01DebugMenuActorTabPage : public ADebugMenuTabActorBase {
    GENERATED_BODY()
public:
    AG01DebugMenuActorTabPage(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiTick(UG01DebugBPImGui* InImGuiBP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BpImGuiDeinit();
    
};

