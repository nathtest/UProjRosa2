#pragma once
#include "CoreMinimal.h"
#include "AppEditableTextBox.h" //CROSS-MODULE INCLUDE V2: -ModuleName=WidgetBaseSystem -ObjectName=AppEditableTextBox -FallbackName=AppEditableTextBox
#include "G01AppEditableTextBox.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01AppEditableTextBox : public UAppEditableTextBox {
    GENERATED_BODY()
public:
    UG01AppEditableTextBox();

};

