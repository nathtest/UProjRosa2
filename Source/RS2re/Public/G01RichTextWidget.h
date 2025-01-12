#pragma once
#include "CoreMinimal.h"
#include "InputManagerObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=InputManagerObserverInf -FallbackName=InputManagerObserverInf
#include "AppRichTextWidget.h" //CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=AppRichTextWidget -FallbackName=AppRichTextWidget
#include "G01TextFindArgs.h"
#include "G01RichTextWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RS2RE_API UG01RichTextWidget : public UAppRichTextWidget, public IInputManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText CacheText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01TextFindArgs CacheArgs;
    
public:
    UG01RichTextWidget();

    UFUNCTION(BlueprintCallable)
    void SetTextWithArgs(FText InText, const FG01TextFindArgs& InArgs);
    

    // Fix for true pure virtual functions not being implemented
};

