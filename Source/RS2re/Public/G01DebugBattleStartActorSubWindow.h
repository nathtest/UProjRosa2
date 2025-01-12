#pragma once
#include "CoreMinimal.h"
#include "G01DebugMenuActorSubWindow.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=G01DebugMenuActorSubWindow -FallbackName=G01DebugMenuActorSubWindow
#include "OnDebugBpImGuiDelegateEventDelegate.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=OnDebugBpImGuiDelegateEvent__DelegateSignature -FallbackName=OnDebugBpImGuiDelegateEventDelegate
#include "G01DebugBattleStartActorSubWindow.generated.h"

class UG01DebugBPImGui;
class UTexture;

UCLASS(Blueprintable)
class RS2RE_API AG01DebugBattleStartActorSubWindow : public AG01DebugMenuActorSubWindow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* texture_;
    
public:
    AG01DebugBattleStartActorSubWindow(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnLoadTexture();
    
    UFUNCTION(BlueprintCallable)
    void Split_UL(UG01DebugBPImGui* InImGui, const FOnDebugBpImGuiDelegateEvent& InUpperEvent, const FOnDebugBpImGuiDelegateEvent& InLowerEvent);
    
    UFUNCTION(BlueprintCallable)
    void RenderTexture();
    
    UFUNCTION(BlueprintCallable)
    void LoadTexture(UTexture* InTexture);
    
};

