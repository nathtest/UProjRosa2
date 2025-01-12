#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "RichTextElemBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=RichTextElemBase -FallbackName=RichTextElemBase
#include "G01RichTextElemImage.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01RichTextElemImage : public URichTextElemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
public:
    UG01RichTextElemImage();

};

