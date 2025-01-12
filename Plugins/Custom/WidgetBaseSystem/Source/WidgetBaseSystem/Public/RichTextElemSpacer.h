#pragma once
#include "CoreMinimal.h"
#include "RichTextElemBase.h"
#include "RichTextElemSpacer.generated.h"

class USpacer;

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API URichTextElemSpacer : public URichTextElemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* Spacer;
    
public:
    URichTextElemSpacer();

};

