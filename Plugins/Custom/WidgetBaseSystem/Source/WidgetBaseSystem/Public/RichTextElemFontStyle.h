#pragma once
#include "CoreMinimal.h"
#include "RichTextElemBase.h"
#include "RichTextElemFontStyle.generated.h"

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API URichTextElemFontStyle : public URichTextElemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPop;
    
public:
    URichTextElemFontStyle();

};

