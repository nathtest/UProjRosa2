#pragma once
#include "CoreMinimal.h"
#include "RichTextElemBase.h"
#include "RichTextElemFontSize.generated.h"

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API URichTextElemFontSize : public URichTextElemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FontSize;
    
public:
    URichTextElemFontSize();

};

