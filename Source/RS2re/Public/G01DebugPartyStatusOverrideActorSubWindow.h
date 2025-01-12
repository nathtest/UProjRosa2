#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "G01CharacterID.h"
#include "G01DebugPartyStatusOverrideActorSubWindow.generated.h"

class UG01DebugBPImGui;

UCLASS(Blueprintable)
class RS2RE_API AG01DebugPartyStatusOverrideActorSubWindow : public AG01DebugMenuActorSubWindow {
    GENERATED_BODY()
public:
    AG01DebugPartyStatusOverrideActorSubWindow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StatusGUI(UG01DebugBPImGui* bpImGui, const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void SpellLevelAllMax(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void SpellGUI(UG01DebugBPImGui* bpImGui, const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void SkillLevelAllMax(const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void SkillGUI(UG01DebugBPImGui* bpImGui, const FG01CharacterID& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    void ApplyStatus(const FG01CharacterID& InSourceCharacterId, const FG01CharacterID& InTargetCharacterId);
    
};

