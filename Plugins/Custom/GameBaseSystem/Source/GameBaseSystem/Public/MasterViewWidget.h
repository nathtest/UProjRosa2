#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=AppUserWidget -FallbackName=AppUserWidget
#include "WidgetDrawDataInfo.h"
#include "AppUserWidget.h"
#include "MasterViewWidget.generated.h"

class UCanvasPanel;
class UGameViewWidget;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class GAMEBASESYSTEM_API UMasterViewWidget : public UAppUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGameViewWidget*> MChildWidgetList;
    
public:
    UMasterViewWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetManualLetterBox16(bool Inactive);
    
    UFUNCTION(BlueprintCallable)
    void RemoveChildWidget(UGameViewWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USizeBox* GetSizeiBox();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCanvasPanel* GetMainCanvasPanel();
    
    UFUNCTION(BlueprintCallable)
    void AllClearChildWidget();
    
    UFUNCTION(BlueprintCallable)
    void AddChildWidget(UGameViewWidget* InWidget, FWidgetDrawDataInfo InDrawData);
    
};

