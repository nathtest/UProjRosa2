#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=AppUserWidget -FallbackName=AppUserWidget
#include "WidgetCreateEditDataTableInfo.h"
#include "AppUserWidget.h"
#include "EditViewWidget.generated.h"

class UCanvasPanel;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class GAMEBASESYSTEM_API UEditViewWidget : public UAppUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MMainCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MEditDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsSaveWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWidgetCreateEditDataTableInfo> MEditDataList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MBindName;
    
public:
    UEditViewWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SettingMainCanvasPanel(UCanvasPanel*& ReCanvasPanel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSave();
    
};

