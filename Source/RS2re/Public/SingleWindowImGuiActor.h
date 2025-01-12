#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=Anchors -FallbackName=Anchors
#include "SingleWindowImGuiActor.generated.h"

class UG01DebugBPImGui;

UCLASS(Blueprintable)
class RS2RE_API ASingleWindowImGuiActor : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WindowTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchors WindowAnchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlwaysWindowAnchorFix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNoMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNoCollapse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNoResize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlwaysAutoResize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAnchorDirty;
    
public:
    ASingleWindowImGuiActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetWindowTitle(const FString& InWindowTitle);
    
    UFUNCTION(BlueprintCallable)
    void SetWindowAnchors(const FAnchors& InAnchors);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool InIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImGuiTickBP(UG01DebugBPImGui* InImGui);
    
private:
    UFUNCTION(BlueprintCallable)
    void ImGuiTick();
    
};

