#pragma once
#include "CoreMinimal.h"
#include "RichTextElemBase.h"
#include "Templates/SubclassOf.h"
#include "RichTextElemText.generated.h"

class UAppTextBlock;

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API URichTextElemText : public URichTextElemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAppTextBlock> TextBlockClass;
    
public:
    URichTextElemText();

};

