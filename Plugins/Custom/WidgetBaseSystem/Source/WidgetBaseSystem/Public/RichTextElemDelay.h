#pragma once
#include "CoreMinimal.h"
#include "RichTextElemBase.h"
#include "RichTextElemDelay.generated.h"

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API URichTextElemDelay : public URichTextElemBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
public:
    URichTextElemDelay();

};

