#pragma once
#include "CoreMinimal.h"
#include "TextWrapperBase.h"
#include "TextWrapper.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WIDGETBASESYSTEM_API UTextWrapper : public UTextWrapperBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Text;
    
public:
    UTextWrapper();

};

