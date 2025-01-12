#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=HorizontalBox -FallbackName=HorizontalBox
#include "Components/HorizontalBox.h"  // Include for UHorizontalBox
#include "AppRichTextLine.generated.h"

class UAppRichTextLine;
class UAppRichTextWidget;

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API UAppRichTextLine : public UHorizontalBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAppRichTextWidget* RichTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDividedByTextWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAppRichTextLine* Prev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAppRichTextLine* Next;
    
public:
    UAppRichTextLine();

};

