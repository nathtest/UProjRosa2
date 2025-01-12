#pragma once
#include "CoreMinimal.h"
#include "RichTextElemBase.h"
#include "RichTextElemFontColor.generated.h"

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API URichTextElemFontColor : public URichTextElemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPop;
    
public:
    URichTextElemFontColor();

};

