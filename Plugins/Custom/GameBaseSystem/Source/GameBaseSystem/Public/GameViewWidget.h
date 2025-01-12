#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=AppUserWidget -FallbackName=AppUserWidget
#include "EWidgetType.h"
#include "WidgetDrawDataInfo.h"
#include "WidgetSettingDataInfo.h"
#include "AppUserWidget.h"
#include "GameViewWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEBASESYSTEM_API UGameViewWidget : public UAppUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsAutoLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetType MWidgetTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MWidgetNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MWidgetId;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetSettingDataInfo MSettingData;
    
public:
    UGameViewWidget();

    UFUNCTION(BlueprintCallable)
    void SetSettingData(FWidgetSettingDataInfo InSettingData);
    
    UFUNCTION(BlueprintCallable)
    void GetSettingData(FWidgetSettingDataInfo& ReSettingData);
    
    UFUNCTION(BlueprintCallable)
    FWidgetDrawDataInfo GetDrawData();
    
    UFUNCTION(BlueprintCallable)
    void CreateWidgetID();
    
};

