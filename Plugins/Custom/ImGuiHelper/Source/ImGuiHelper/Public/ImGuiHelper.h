#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "DebugMenuOption.h"
#include "ImGuiHelper.generated.h"

class AImGuiInputBinder;
class UDebugErrorWindow;
class UDebugMenuWindow;
class UUserWidget;

UCLASS(Blueprintable)
class IMGUIHELPER_API UImGuiHelper : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuWindow* DebugMenuWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugErrorWindow* DebugErrorWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CursorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AImGuiInputBinder* ImGuiInputBinder;
    
public:
    UImGuiHelper();

    UFUNCTION(BlueprintCallable)
    void UpdateImGuiDPIScale();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugMenuDraw();
    
    UFUNCTION(BlueprintCallable)
    void SetEnableImGuiInput(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMenuDraw(bool InShow);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugErrorAndShow(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSwitchingEnableInputByToggleDraw(bool InFlag);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableImGuiInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugMenuDraw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatedDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoSwitchingEnableInputByToggleDraw();
    
    UFUNCTION(BlueprintCallable)
    void CreateDebugMenu(FDebugMenuOption InDebugMenuOption);
    
};

