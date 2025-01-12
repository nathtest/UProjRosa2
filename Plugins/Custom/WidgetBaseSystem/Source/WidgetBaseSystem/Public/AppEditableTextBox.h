#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=VirtualKeyboardHelper -ObjectName=AppEditableTextBoxBase -FallbackName=AppEditableTextBoxBase
#include "AppEditableTextBoxBase.h"
#include "AppEditableTextBox.generated.h"

UCLASS(Blueprintable)
class WIDGETBASESYSTEM_API UAppEditableTextBox : public UAppEditableTextBoxBase {
    GENERATED_BODY()
public:
    UAppEditableTextBox();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCultureChange();
    
};

